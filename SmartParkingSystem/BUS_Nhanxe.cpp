﻿#include "StdAfx.h"
#include "BUS_Nhanxe.h"
using namespace SmartParkingSystem;

BUS_Nhanxe::BUS_Nhanxe(void){};

void BUS_Nhanxe::Them(Xe^ xe){
	String^ ticket=xe->LoaiVe;
	String^ loai_xe=xe->LoaiXe;
	
	if (da->check_gui(ticket,loai_xe)==0)
	{
		if (ticket->Equals("Vé ngày"))
			da->InsertNX(xe);
		else{
			if (da->check_Ve(xe->BienKiemSoat,loai_xe)==0){
				MessageBox::Show(L"Vé chưa đăng kí !!");
			}else if (da->check_han_vethang(xe->BienKiemSoat,loai_xe)>=0)
			{
				MessageBox::Show(L"Vé đã hết hạn!!");
			}else {
				da->InsertNX(xe);
			}
		}
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
int BUS_Nhanxe::Ve_tiep_theo(){
	return da->TongXeGui();
};
void BUS_Nhanxe::Search(String^ search, DataGridView^ dgv){
	String^ sql=L"SELECT * FROM nhanxe WHERE (Trangthai='N')";
	String^ sqlSearch=String::Format("select Sove,BKS,Loaixe,Loaive,Thoigianvao from nhanxe where (nhanxe.Sove='{0}' or nhanxe.BKS='{1}' or Loaive='{2}' or Thoigianvao='{3}' or Loaixe='{4}') and (nhanxe.Trangthai = 'N')",search,search,search,search);
	if (search->Equals(""))
		da->Search(sql, dgv);
	else
		da->Search(sqlSearch, dgv);
};
