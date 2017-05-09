#include "StdAfx.h"
#include "DA_Traxe.h"

using namespace SmartParkingSystem;
DA_Traxe::DA_Traxe(void){};

void DA_Traxe::InsertTX(Xe^ xe,String^ tong_tien){
	String^ sqlInsert=L"insert into thongke values('"+xe->Id+"','"+xe->BienKiemSoat+"','"+xe->LoaiVe+"','"+xe->LoaiXe+"','"+xe->ThoiGianVao+"','"+xe->ThoiGianRa+"','"+tong_tien+"')";
	DBUtils::ExcuteNonQuery(sqlInsert);
};
void DA_Traxe::UpdateTX(int id,Xe^ xe){
	String^ loai_xe=xe->LoaiXe;
	String^ sqlUpdate=L"update nhanxe set Trangthai='T' where Sove='"+id+"' and Loaixe='"+ loai_xe +"'";
	DBUtils::ExcuteNonQuery(sqlUpdate);

};
void DA_Traxe::Search(String^ sqlSearch, DataGridView^ dgv){
	try {
		DBUtils::loadData(dgv, sqlSearch);
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message);
	}
};
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
		MessageBox::Show(e->Message);
	}finally{
		dr->Close();
	}
	
	return sum;
};
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
		MessageBox::Show(e->Message);
	}finally{
		dr->Close();
	}
	return sum;
}
