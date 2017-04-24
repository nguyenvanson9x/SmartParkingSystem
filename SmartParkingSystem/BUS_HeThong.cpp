#include "StdAfx.h"
#include "BUS_HeThong.h"

using namespace SmartParkingSystem;
BUS_HeThong::BUS_HeThong(void)
{
}

void BUS_HeThong::Them(HeThong^ user)
{
	if (user->HoTen->Equals(""))
		MessageBox::Show("Thong tin khong duoc bo trong");
	else
		da->InsertHT(user);
}

void BUS_HeThong::CapNhat(HeThong^ user)
{
	int id = user->Id;
	if (id > 0 && id != 1)
		da->updateHT(user);
}

void BUS_HeThong::Xoa(int id)
{
	if (id > 0)
		da->deleteHT(id);
}

void BUS_HeThong::Search(String^ search, DataGridView^ dgv)
{
	String^ sql = "select * from TAIKHOAN";
	String^ sqlSearch = "select * from TAIKHOAN where USERNAME = '" + search + "'";
	if (search->Equals(""))
		da->LoadData(sql, dgv);
	else
		da->LoadData(sqlSearch, dgv);
}

