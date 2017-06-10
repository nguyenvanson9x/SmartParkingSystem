#include "StdAfx.h"
#include "DA_Nhanxe.h"

using namespace SmartParkingSystem;
DA_Nhanxe::DA_Nhanxe(void){

}
void DA_Nhanxe::InsertNX(Xe^ xe){
	String^ loaixe=xe->LoaiXe;
	String^ sqlInsertNhanxe=String::Format("insert into nhanxe(Sove,BKS,Loaive,Loaixe,Thoigianvao,Trangthai) values ('0','"+ xe->BienKiemSoat +"', '"+ xe->LoaiVe +"','"+ loaixe +"','"+ xe->ThoiGianVao +"', 'N')");
	try
	{
			DBUtils::ExcuteNonQuery(sqlInsertNhanxe);		
	}
	catch (Exception^ e)
	{
			MessageBox::Show(e->Message, L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
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
		MessageBox::Show(e->Message, L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
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
		MessageBox::Show(e->Message, L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}finally{
		dr->Close();
	}
	return sum;
};
int DA_Nhanxe::check_Ve(String^ bks,String^ loai_xe){
	String^ loaixe=Convert_Hethong::GUI_To_DB(loai_xe);
	int count=0;
	String^ sql=L"select * from quanlyvethang where BKS='"+bks+"' and Loaixe='"+loaixe+"'";
	MySqlDataReader^ dr;
	try
	{
		dr=DBUtils::getDataReader(sql);
		while(dr->Read())
			count=count+1;
	}catch (Exception^ e)
	{
		MessageBox::Show(e->Message, L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}finally{
		dr->Close();
	}
	
	return count;
}
int DA_Nhanxe::check_gui(String^ bks,String^ loai_xe){
	int count=0;
	String^ sql=L"select * from nhanxe where  (nhanxe.Trangthai = 'N') and nhanxe.BKS='"+bks+"' and nhanxe.Loaixe='"+loai_xe+"'";
	MySqlDataReader^ dr;
	try
	{
		dr=DBUtils::getDataReader(sql);
		while(dr->Read())
			count=count+1;
	}catch (Exception^ e)
	{
		MessageBox::Show(e->Message, L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}finally{
		dr->Close();
	}
	
	return count;
}
double DA_Nhanxe::check_han_vethang(String^ bks,String^ loai_xe){
	String^ loaixe=Convert_Hethong::GUI_To_DB(loai_xe),^date_s,^date_e;
	
	DateTime ^date_start,^date_end;
	
	String^ sql=L"select Ngaybatdau,Ngayketthuc from quanlyvethang where BKS='"+bks+"' and Loaixe='"+loaixe+"'";
	MySqlDataReader^ dr;
	try
	{
		dr=DBUtils::getDataReader(sql);
		while(dr->Read()){
			date_start=(DateTime^)dr["Ngaybatdau"];
			date_end=(DateTime^)dr["Ngayketthuc"];
		}

	}catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}finally{
		dr->Close();
	}
	date_s=date_start->ToString("yyyy-MM-dd");
	date_e=date_end->ToString("yyyy-MM-dd");
	DateTime dt_s = DateTime::Parse(date_s);
	DateTime dt_e = DateTime::Parse(date_e);
	TimeSpan d = DateTime::Today.Subtract(dt_e);
	return d.TotalDays;
}
int DA_Nhanxe::get_tongxedap(){
	int count=0;
	String^ sql=L"select * from nhanxe where  nhanxe.Loaixe='Xe đạp'";
	MySqlDataReader^ dr;
	try
	{
		dr=DBUtils::getDataReader(sql);
		while(dr->Read())
			count=count+1;
	}catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}finally{
		dr->Close();
	}

	return count;
}