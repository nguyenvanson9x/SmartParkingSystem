#include "StdAfx.h"
#include "BUS_HeThong.h"
#include "Convert_Hethong.h"
using namespace SmartParkingSystem;
BUS_HeThong::BUS_HeThong(void)
{
}

void BUS_HeThong::Them(HeThong^ user)
{
	if (user->HoTen->Equals("") || user->TaiKhoan->Equals("") || user->MatKhau->Equals(""))
		MessageBox::Show(L"Thông tin không được bỏ trống", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
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
	String^ sqlSearch = String::Format("select * from taikhoan where username like '%{0}%' or ten like '%{1}%'", search, search);
	if (search->Equals(""))
		da->Search(sql, dgv);
	else
		da->Search(sqlSearch, dgv);
}

void BUS_HeThong::showTicket(String^ Loaixe, String^ Loaive, TextBox^ txtGiahientai)
{
	String^ sqlMoney = "select Tien, Tien_Vethang from loaixe where Loaixe = '" + Loaixe + "'";
	if (Loaive->CompareTo("Vé ngày") == 0)
		da->showMoney(sqlMoney, "Tien", txtGiahientai);
	else
		da->showMoney(sqlMoney, "Tien_Vethang", txtGiahientai);
}

void BUS_HeThong::Thaydoi(ComboBox^ cbLoaixe, ComboBox^ cbLoaive,TextBox^ txtGiahientai, TextBox^ txtGiadieuchinh)
{
	String^ loaixe_GUI = cbLoaixe->SelectedItem->ToString();
	String^ loaixe = Convert_Hethong::GUI_To_DB(loaixe_GUI);
	String^ loaive = cbLoaive->SelectedItem->ToString();
	String^ gia_moi = txtGiadieuchinh->Text;
	int money;

	try {
		if (gia_moi->CompareTo("") == 0)
			MessageBox::Show(L"Bạn chưa nhập giá mới.", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		else if (Int32::Parse(gia_moi) > 0) {
			money = Int32::Parse(gia_moi);
			if (loaive->CompareTo(L"Vé ngày") == 0)
				da->updateTicket(loaixe, money, "Tien");
			else
				da->updateTicket(loaixe, money, "Tien_Vethang");
			String^ temp = txtGiadieuchinh->Text;
			txtGiadieuchinh->Clear();
			txtGiahientai->Text = temp;
		}
		else {
			MessageBox::Show(L"Giá tiền không hợp lệ", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			txtGiadieuchinh->Clear();
		}
			
	}
	catch (Exception^) {
		MessageBox::Show(L"Lỗi định dạng. Chỉ được nhập số", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Error);
		txtGiadieuchinh->Clear();
	}
}

