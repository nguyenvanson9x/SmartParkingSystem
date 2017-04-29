#include "StdAfx.h"
#include "DA_HeThong.h"

using namespace SmartParkingSystem;
DA_HeThong::DA_HeThong(void)
{
}

void DA_HeThong::InsertHT(HeThong^ u)
{
	String ^user, ^pass, ^ten, ^chucvu, ^sql;
	user = u->TaiKhoan;
	pass = u->MatKhau;
	ten = u->HoTen;
	chucvu = u->ChucVu;

	sql = String::Format("INSERT INTO taikhoan (USERNAME, PASSWORD, TEN, ID, CHUCVU) VALUES ('{0}', '{1}', '{2}', '{3}', '{4}')", user, pass,
		ten, "0", chucvu);
	try
	{
		DBUtils::ExcuteNonQuery(sql);
	}
	catch (Exception^)
	{
		MessageBox::Show(L"Tài khoản đã tồn tại");
	}

}

void DA_HeThong::updateHT(HeThong^ u)
{
	int id;
	String ^user, ^pass, ^ten, ^chucvu, ^sql;

	id = u->Id;
	user = u->TaiKhoan;
	pass = u->MatKhau;
	ten = u->HoTen;
	chucvu = u->ChucVu;

	sql = String::Format("update taikhoan set USERNAME = '{0}', PASSWORD = '{1}', TEN = '{2}', CHUCVU = '{3}' where ID = '{4}'", user, pass, ten, chucvu, id);
	try {
		DBUtils::ExcuteNonQuery(sql);
	}
	catch (Exception^) {
		MessageBox::Show(L"Tên đăng nhập đã tồn tại");
	}
}

void DA_HeThong::deleteHT(int id)
{
	String ^sql;
	sql = String::Format("delete from taikhoan where id = '{0}'", id);
	if (id == 1)
		MessageBox::Show(L"Không thể xóa tài khoản này");
	else
		try {
			DBUtils::ExcuteNonQuery(sql);
		}
		catch (Exception ^e) {
			MessageBox::Show("Error in Delete Acc: " + e->Message);
		}
}

void DA_HeThong::Search(String^ sqlSearch, DataGridView^ dgv)
{
	try {
		DBUtils::loadData(dgv, sqlSearch);
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message);
	}
	
}
