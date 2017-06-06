#include "StdAfx.h"
#include "BUS_Traxe.h"
#include "Convert_Hethong.h"
using namespace SmartParkingSystem;

BUS_Traxe::BUS_Traxe(void){};

// xử lý trả xe
void BUS_Traxe::Traxe(Xe^ xe,String^ tong_tien){
	da->InsertTX(xe,tong_tien); // thêm thông tin của xe vào bảng traxe trong csdl
	da->UpdateTX(xe->Id,xe); // cập nhật thông tin xe trong bảng nhanxe: TrangThai = "T"
};

// xử lý tìm kiếm
void BUS_Traxe::Search(String^ search, DataGridView^ dgv){
	String^ sql=L"SELECT Sove,BKS,Loaixe,Loaive,Thoigianvao FROM nhanxe WHERE Trangthai='N'";
	String^ sqlSearch=String::Format("select Sove,BKS,Loaixe,Loaive,Thoigianvao from nhanxe where (nhanxe.Sove='{0}' or nhanxe.BKS='{1}' or Loaive='{2}' or Thoigianvao='{3}' or Loaixe='{4}') and (nhanxe.Trangthai = 'N')",search,search,search,search,search);
	if (search->Equals("")) // Nếu từ khóa là rỗng thì lấy ra toàn bộ thông tin xe, rồi đổ vả bảng dgv
		da->Search(sql, dgv);
	else
		da->Search(sqlSearch, dgv); // Tìm kiếm theo từ khóa
	// Chuyển hết dữ liệu xuống lớp DataAccess để xử lý
};
void BUS_Traxe::showData(TextBox^ txtTongTien,String^ loai_ve,String^ loai_xe){
	String ^loaixe=Convert_Hethong::GUI_To_DB(loai_xe); // Chuyển tên loại xe về định dạng của csdl
	String^ tien=da->TongTien(loaixe); // tính tổng tiền từ csdl
	if(loai_ve->CompareTo(L"Vé ngày")==0)
		txtTongTien->Text=tien;
	else
		txtTongTien->Text="Vé tháng";
};

// Lấy tổng số xe chưa trả từ csdl
int BUS_Traxe::showTongXe(){
	return da->TongXe();
};
