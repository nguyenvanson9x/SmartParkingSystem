#include "StdAfx.h"
#include "BUS_Nhanxe.h"
#include "Convert_Hethong.h"
using namespace SmartParkingSystem;

BUS_Nhanxe::BUS_Nhanxe(void){};

void BUS_Nhanxe::Them(Xe^ xe,String^ ticket,String^ loai_xe){
	String^ loaixe=Convert_Hethong::GUI_To_DB(loai_xe);
	if (da->check_gui(ticket,loai_xe))
	{
		if (ticket->Equals("Vé ngày"))
			da->InsertNX(xe);
		else
			if (da->check_Ve(ticket,loaixe))
					da->InsertNX(xe);
			else
				MessageBox::Show(L"Vé chưa đăng kí !!");
	} 
	else
		MessageBox::Show(L"Xe đã gửi rồi!!");
};
void BUS_Nhanxe::CapNhat(int sove,String^ bks,String^ loai_ve,String^ loai_xe,String^ thoi_gian_vao){
	da->UpdateNX(sove,bks,loai_ve,loai_xe,thoi_gian_vao);
};
void BUS_Nhanxe::Xoa(int sove,String^ bks){
	da->deleteNX(sove,bks);
};
int BUS_Nhanxe::showTongXe(){
	return da->TongXe();
};
void BUS_Nhanxe::Search(String^ search, DataGridView^ dgv){
	String^ sql=L"SELECT nhanxe.Sove,nhanxe.BKS,nhanxe.Loaive,xe.Loaixe,nhanxe.Thoigianvao FROM nhanxe,xe WHERE (nhanxe.BKS=xe.BKS) AND (Trangthai='N')";
	String^ sqlSearch=String::Format("select nhanxe.Sove, nhanxe.BKS, xe.Loaixe, nhanxe.Loaive, nhanxe.Thoigianvao from nhanxe,xe where (nhanxe.BKS = xe.BKS) and (nhanxe.Sove='{0}' or nhanxe.BKS='{1}' or nhanxe.Loaive='{2}' or nhanxe.Thoigianvao='{3}' or xe.Loaixe='{4}') and (nhanxe.Trangthai = 'N')",search,search,search,search,search);
	if (search->Equals(""))
		da->Search(sql, dgv);
	else
		da->Search(sqlSearch, dgv);
};
