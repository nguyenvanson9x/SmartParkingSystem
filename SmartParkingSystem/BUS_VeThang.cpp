#include "StdAfx.h"
#include "BUS_VeThang.h"
using namespace SmartParkingSystem;

BUS_VeThang::BUS_VeThang(void)
{
}

void BUS_VeThang::Add(VeThang ^ ticket)
{
	if (ticket->BienXe != "")
		da->Add(ticket);
	else
		MessageBox::Show(L"Thông tin không được bỏ trống");
}

void BUS_VeThang::Update(VeThang ^ ticket)
{
	if (ticket->BienXe != "")
		da->Update(ticket);
	else
		MessageBox::Show(L"Thông tin không được bỏ trống");
}

void BUS_VeThang::Delete(int id)
{
	da->Delete(id);
}

void BUS_VeThang::Search(String ^ search, DataGridView^ dgvTicket)
{
	String^ sql = "select Mathe, BKS, Loaixe, Ngaybatdau, Ngayketthuc, Tien from quanlyvethang";
	String^ sqlSearch = String::Format("select Mathe, BKS, Loaixe, Ngaybatdau, Ngayketthuc, Tien from quanlyvethang where BKS like '%{0}%' or Loaixe like '%{1}%' or Mathe = '{2}'", search, search, search);
	if (search->Equals(""))
		da->Search(sql, dgvTicket);
	else
		da->Search(sqlSearch, dgvTicket);
}

void BUS_VeThang::showMoney(String^ Loaixe, TextBox^ txtGiaVe)
{
	String^ sql = String::Format("select Tien_Vethang from loaixe where Loaixe = '{0}'", Loaixe);
	da->showMoney(sql, txtGiaVe);
}
