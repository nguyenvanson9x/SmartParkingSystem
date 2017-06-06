#include "StdAfx.h"
#include "BUS_Thongke.h"
using namespace SmartParkingSystem;
BUS_Thongke::BUS_Thongke(void){
};

void BUS_Thongke::Thongke_theo_ngay(DataGridView^ dgvThong_ke,String^ date_start,String^ date_end){
	da->thongke_theo_ngay(dgvThong_ke,date_start,date_end);
};

void BUS_Thongke::Thongke_theo_bks(DataGridView^ dgvThong_ke,String^ bks){
	da->thongke_theo_bks(dgvThong_ke,bks);
};

void BUS_Thongke::Thongke_theo_loaixe(DataGridView^ dgvThong_ke,String^ loaixe){
	da->thongke_theo_loaixe(dgvThong_ke,loaixe);
};
void BUS_Thongke::Thongke_theo_trangthai(DataGridView^ dgvThong_ke,String^ trangthai){
	da->thongke_theo_trangthai(dgvThong_ke,trangthai);
};

void BUS_Thongke::Thongke_full_luachon(DataGridView^ dgvThong_ke,String^ date_s,String^ date_e,String^ bks,String^ loaixe,String^ trangthai){
	da->thongke_full_luachon(dgvThong_ke,date_s,date_e,bks,loaixe,trangthai);
};
