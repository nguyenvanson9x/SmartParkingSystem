#include "StdAfx.h"
#include "BUS_Traxe.h"
#include "Convert_Hethong.h"
using namespace SmartParkingSystem;

BUS_Traxe::BUS_Traxe(void){};
void BUS_Traxe::Traxe(Xe^ xe,String^ tong_tien){
	da->InsertTX(xe,tong_tien);
	//Xe^ xe1=gcnew Xe(xe->Id, "", "", "", "", "", "");
	da->UpdateTX(xe->Id,xe);
};
void BUS_Traxe::Search(String^ search, DataGridView^ dgv){
	String^ sql=L"SELECT nhanxe.Sove,nhanxe.BKS,nhanxe.Loaive,xe.Loaixe,nhanxe.Thoigianvao FROM nhanxe,xe WHERE (nhanxe.BKS=xe.BKS) AND (Trangthai='N')";
	String^ sqlSearch=String::Format("select nhanxe.Sove, nhanxe.BKS, xe.Loaixe, nhanxe.Loaive, nhanxe.Thoigianvao from nhanxe,xe where (nhanxe.BKS = xe.BKS) and (nhanxe.Sove='{0}' or nhanxe.BKS='{1}' or nhanxe.Loaive='{2}' or nhanxe.Thoigianvao='{3}' or xe.Loaixe='{4}') and (nhanxe.Trangthai = 'N')",search,search,search,search,search);
	if (search->Equals(""))
		da->Search(sql, dgv);
	else
		da->Search(sqlSearch, dgv);
};
void BUS_Traxe::showData(TextBox^ txtTongTien,String^ loai_ve,String^ loai_xe){
	String ^loaixe=Convert_Hethong::GUI_To_DB(loai_xe);
	String^ tien=da->TongTien(loaixe);
	if(loai_ve->CompareTo(L"Vé ngày")==0)
		txtTongTien->Text=tien;
	else
		txtTongTien->Text="Vé tháng";
};
int BUS_Traxe::showTongXe(){
	return da->TongXe();
};
