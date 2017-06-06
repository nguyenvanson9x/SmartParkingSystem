#include "StdAfx.h"
#include "DA_Traxe.h"

using namespace SmartParkingSystem;
DA_Traxe::DA_Traxe(void){};

// thêm thông tin của xe vào bảng traxe trong csdl
void DA_Traxe::InsertTX(Xe^ xe,String^ tong_tien){
	String^ sqlInsertTX=L"insert into traxe values('"+xe->Id+"','"+xe->ThoiGianRa+"','"+tong_tien+"')";
	DBUtils::ExcuteNonQuery(sqlInsertTX); // Thực hiện truy vấn sql
};

// cập nhật thông tin xe trong bảng nhanxe: TrangThai = "T"
void DA_Traxe::UpdateTX(int id,Xe^ xe){
	String^ loai_xe=xe->LoaiXe;
	String^ sqlUpdate=L"update nhanxe set Trangthai='T' where Sove='"+id+"' and Loaixe='"+ loai_xe +"'";
	DBUtils::ExcuteNonQuery(sqlUpdate);

};

// tìm kiếm thông tin, và đổ dữ liệu lên bảng dgv
void DA_Traxe::Search(String^ sqlSearch, DataGridView^ dgv){
	try {
		DBUtils::loadData(dgv, sqlSearch); // thực hiện truy vấn sql, đồng thời đổ kết quả lên bảng dgv
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message, L"Th�ng b�o", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
};

// Tính tổng số xe chưa trả
int DA_Traxe::TongXe(){
	int sum=0;
	String^ sql =String::Format( "select * from nhanxe where nhanxe.Trangthai = 'N'");
	MySqlDataReader^ dr;
	try
	{
		dr=DBUtils::getDataReader(sql);
		while (dr->Read())
			sum=sum+1;
	}catch (Exception^ e)
	{
		MessageBox::Show(e->Message, L"Th�ng b�o", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}finally{
		dr->Close();
	}
	
	return sum;
};

// Tính tổng số tiền cần trả
String^ DA_Traxe::TongTien(String ^loai_xe){
	String^ sum="";
	String^ sql=L"select Tien from loaixe where Loaixe='"+ loai_xe +"'";
	MySqlDataReader^ dr;
	try{
		dr=DBUtils::getDataReader(sql);
		if(dr!=nullptr)
			while(dr->Read())
				sum=dr["Tien"]->ToString();
	}catch(Exception^ e){
		MessageBox::Show(e->Message, L"Th�ng b�o", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}finally{
		dr->Close();
	}
	return sum;
}
