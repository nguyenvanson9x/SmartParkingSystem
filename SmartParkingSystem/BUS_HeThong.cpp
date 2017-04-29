#include "StdAfx.h"
#include "BUS_HeThong.h"

using namespace SmartParkingSystem;
BUS_HeThong::BUS_HeThong(void)
{
}

void BUS_HeThong::Them(HeThong^ user)
{
	if (user->HoTen->Equals("") || user->TaiKhoan->Equals("") || user->MatKhau->Equals(""))
		MessageBox::Show("Thong tin khong duoc bo trong");
	else
		da->InsertHT(user);
}

void BUS_HeThong::CapNhat(HeThong^ user)
{
	int id = user->Id;
	da->updateHT(user);
}

void BUS_HeThong::Xoa(int id)
{
	da->deleteHT(id);
}

void BUS_HeThong::Search(String^ search, DataGridView^ dgv)
{
	String^ sql = "select * from TAIKHOAN";
	String^ sqlSearch = String::Format("select * from taikhoan where username = '{0}' or ten = '{1}'", search, search);
	if (search->Equals(""))
		da->Search(sql, dgv);
	else
		da->Search(sqlSearch, dgv);
}

