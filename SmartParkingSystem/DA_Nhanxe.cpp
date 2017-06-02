#include "StdAfx.h"
#include "DA_Nhanxe.h"

using namespace SmartParkingSystem;
DA_Nhanxe::DA_Nhanxe(void){

}
void DA_Nhanxe::InsertNX(Xe^ xe){
	String^ loaixe=xe->LoaiXe;
	String^ sqlInsertNhanxe=String::Format("insert into nhanxe(Sove,BKS,Loaive,Loaixe,Thoigianvao,Trangthai) values ('"+ xe->Id +"','"+ xe->BienKiemSoat +"', '"+ xe->LoaiVe +"','"+ loaixe +"','"+ xe->ThoiGianVao +"', 'N')");
	try
	{
			DBUtils::ExcuteNonQuery(sqlInsertNhanxe);		
	}
	catch (Exception^ e)
	{
			MessageBox::Show(e->Message);
	}
};
void DA_Nhanxe::UpdateNX(int sove,String^ bks,String^ loai_ve,String^ loai_xe,String^ thoi_gian_vao){
	String^ sqlUpdate=L"update nhanxe set BKS='"+ bks +"',Loaive='"+ loai_ve +"',Thoigianvao='"+thoi_gian_vao+"',Trangthai='N',Loaixe='"+ loai_xe +"' where Sove='"+sove+"'";
	DBUtils::ExcuteNonQuery(sqlUpdate);
}
void DA_Nhanxe::deleteNX(int sove,String^ bks){
	String^ sqlDelete=String::Format("delete from nhanxe where Sove='{0}' and BKS='{1}'",sove,bks);
	DBUtils::ExcuteNonQuery(sqlDelete);
}
void DA_Nhanxe::Search(String^ sqlSearch, DataGridView^ dgv){
	try {
		DBUtils::loadData(dgv, sqlSearch);
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message);
	}
}
int DA_Nhanxe::TongXe(){
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
bool DA_Nhanxe::check_Ve(String^ bks,String^ loai_xe){
	int count=0;
	String^ sql=String::Format("select * from quanlyvethang where BKS='{0}' and Loaixe='{1}'",bks,loai_xe);
	MySqlDataReader^ dr;
	try
	{
		dr=DBUtils::getDataReader(sql);
		if(dr!=nullptr)
			while(dr->Read())
				count=count+1;
	}catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}finally{
		dr->Close();
	}
	if(count>0)
		return true;
	return false;
}
bool DA_Nhanxe::check_gui(String^ bks,String^ loai_xe){
	int count=0;
	String^ sql=L"select * from nhanxe,xe where (nhanxe.Loaixe=xe.Loaixe) and (nhanxe.BKS = xe.BKS) and (nhanxe.Trangthai = 'N') and nhanxe.BKS='"+bks+"' and xe.BKS='"+bks+"' and nhanxe.Loaixe='"+loai_xe+"' and xe.Loaixe='"+loai_xe+"'";
	MySqlDataReader^ dr;
	try
	{
		dr=DBUtils::getDataReader(sql);
		if(dr!=nullptr)
			while(dr->Read())
				count=count+1;
	}catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}finally{
		dr->Close();
	}
	if(count>0)
		return false;
	return true;
}