#include "StdAfx.h"
#include "DA_Thongke.h"

using namespace SmartParkingSystem;
DA_Thongke::DA_Thongke(void){};

void DA_Thongke::thongke_theo_ngay(DataGridView^ dgvThong_ke,String^ date_start,String^ date_end){
	String^ sql=L"SELECT * FROM `thongke` WHERE Thoigianvao BETWEEN CAST('"+date_start+"' AS DATE) AND CAST('"+date_start+"' AS DATE)";
	DBUtils::loadDataSort(dgvThong_ke,sql);
};

void DA_Thongke::thongke_theo_bks(DataGridView^ dgvThong_ke,String^ bks){
	String^ sql=L"SELECT * FROM `thongke` WHERE BKS='"+bks+"'";
	DBUtils::loadDataSort(dgvThong_ke,sql);
};

void DA_Thongke::thongke_theo_loaixe(DataGridView^ dgvThong_ke,String^ loaixe){
	String^ sql_loai=L"SELECT * FROM `thongke` WHERE Loaixe='"+loaixe+"'";
	if(loaixe->Equals(L"<-- Tất cả -->")){
		String^ sql=L"SELECT * FROM `thongke`";
		DBUtils::loadDataSort(dgvThong_ke,sql);
	}else
		DBUtils::loadDataSort(dgvThong_ke,sql_loai);
};
void DA_Thongke::thongke_theo_trangthai(DataGridView^ dgvThong_ke,String^ trangthai){
	String^ trang_thai;
	if (trangthai->Equals(L"Chưa lấy xe"))
	{
		trang_thai="N";
	}
	if (trangthai->Equals(L"Đã lấy xe"))
	{
		trang_thai="T";
	}
	if(trangthai->Equals(L"<-- Tất cả -->")){
		String^ sql=L"SELECT * FROM `thongke`";
		DBUtils::loadDataSort(dgvThong_ke,sql);
	}
	String^ sql_trangthai=L"SELECT * FROM `thongke` WHERE Trangthai='"+trang_thai+"'";	
	DBUtils::loadDataSort(dgvThong_ke,sql_trangthai);
};
void DA_Thongke::thongke_full_luachon(DataGridView^ dgvThong_ke,String^ date_s,String^ date_e,String^ bks,String^ loaixe,String^ trangthai){
	if (bks!="")
	{
		if(loaixe->Equals(L"<-- Tất cả -->") && trangthai->Equals(L"Chưa lấy xe")){
			String^ sql_1=L"SELECT * FROM `thongke` WHERE Trangthai='N' and Thoigianvao='"+date_s+"' and BKS='"+bks+"'";
			DBUtils::loadDataSort(dgvThong_ke,sql_1);
		}else if(loaixe->Equals(L"<-- Tất cả -->") && trangthai->Equals(L"Đã lấy xe")){
			String^ sql_2=L"SELECT * FROM `thongke` WHERE Trangthai='T' and Thoigianvao='"+date_s+"' and BKS='"+bks+"'";
			DBUtils::loadDataSort(dgvThong_ke,sql_2);
		}else if (loaixe->Equals(L"<-- Tất cả -->") && trangthai->Equals(L"<-- Tất cả -->"))
		{
			String^ sql_3=L"SELECT * FROM `thongke` WHERE Thoigianvao='"+date_s+"' and BKS='"+bks+"'";
			DBUtils::loadDataSort(dgvThong_ke,sql_3);
		}else if (!loaixe->Equals(L"<-- Tất cả -->") && trangthai->Equals(L"<-- Tất cả -->")){
			String^ sql_4=L"SELECT * FROM `thongke` WHERE Thoigianvao='"+date_s+"' and Loaixe='"+loaixe+"' and BKS='"+bks+"'";
			DBUtils::loadDataSort(dgvThong_ke,sql_4);
		}else if(!loaixe->Equals(L"<-- Tất cả -->") && trangthai->Equals(L"Chưa lấy xe")){
			String^ sql_5=L"SELECT * FROM `thongke` WHERE Trangthai='N' and Thoigianvao='"+date_s+"' and Loaixe='"+loaixe+"' and BKS='"+bks+"'";
			DBUtils::loadDataSort(dgvThong_ke,sql_5);
		}else if(!loaixe->Equals(L"<-- Tất cả -->") && trangthai->Equals(L"Đã lấy xe")){
			String^ sql_6=L"SELECT * FROM `thongke` WHERE Trangthai='T' and Thoigianvao='"+date_s+"' and Loaixe='"+loaixe+"' and BKS='"+bks+"'";
			DBUtils::loadDataSort(dgvThong_ke,sql_6);
		}
	} 
	else
	{
		if(loaixe->Equals(L"<-- Tất cả -->") && trangthai->Equals(L"Chưa lấy xe")){
			String^ sql_1=L"SELECT * FROM `thongke` WHERE Trangthai='N' and Thoigianvao='"+date_s+"'";
			DBUtils::loadDataSort(dgvThong_ke,sql_1);
		}else if(loaixe->Equals(L"<-- Tất cả -->") && trangthai->Equals(L"Đã lấy xe")){
			String^ sql_2=L"SELECT * FROM `thongke` WHERE Trangthai='T' and Thoigianvao='"+date_s+"' ";
			DBUtils::loadDataSort(dgvThong_ke,sql_2);
		}else if(loaixe->Equals(L"<-- Tất cả -->") && trangthai->Equals(L"<-- Tất cả -->")){
			String^ sql_3=L"SELECT * FROM `thongke` WHERE Thoigianvao='"+date_s+"'";
			DBUtils::loadDataSort(dgvThong_ke,sql_3);
		}else if (!loaixe->Equals(L"<-- Tất cả -->") && trangthai->Equals(L"<-- Tất cả -->")){
			String^ sql_4=L"SELECT * FROM `thongke` WHERE Thoigianvao='"+date_s+"' and Loaixe='"+loaixe+"'";
			DBUtils::loadDataSort(dgvThong_ke,sql_4);
		}else if(!loaixe->Equals(L"<-- Tất cả -->") && trangthai->Equals(L"Chưa lấy xe")){
			String^ sql_5=L"SELECT * FROM `thongke` WHERE Trangthai='N' and Thoigianvao='"+date_s+"' and Loaixe='"+loaixe+"'";
			DBUtils::loadDataSort(dgvThong_ke,sql_5);
		}else if(!loaixe->Equals(L"<-- Tất cả -->") && trangthai->Equals(L"Đã lấy xe")){
			String^ sql_6=L"SELECT * FROM `thongke` WHERE Trangthai='T' and Thoigianvao='"+date_s+"' and Loaixe='"+loaixe+"'";
			DBUtils::loadDataSort(dgvThong_ke,sql_6);
		}
	}
};
void DA_Thongke::xuat_bao_cao(){

};