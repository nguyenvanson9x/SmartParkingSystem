#include "StdAfx.h"
#include "DA_VeThang.h"
using namespace SmartParkingSystem;

DA_VeThang::DA_VeThang(void)
{
}

void DA_VeThang::Add(VeThang ^ ticket)
{
	int gia_ve;
	String ^sql, ^loai_xe, ^bien_xe, ^date_start, ^date_end;

	loai_xe = ticket->LoaiXe;
	bien_xe = ticket->BienXe;
	date_start = ticket->DateStart;
	date_end = ticket->DateEnd;
	gia_ve = ticket->GiaVe;
	
	sql = String::Format("insert into quanlyvethang (Mathe, BKS, Loaixe, Ngaybatdau, Ngayketthuc, Tien) values ('{0}', '{1}', '{2}', '{3}', '{4}', '{5}')","0", bien_xe, loai_xe, date_start, date_end, gia_ve);
	try {
		DBUtils::ExcuteNonQuery(sql);
	}
	catch(Exception^e) {
		MessageBox::Show(e->Message, L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);

	}
}

void DA_VeThang::Update(VeThang ^ ticket)
{
	int id, gia_ve;
	String ^loai_xe, ^bien_xe, ^date_start, ^date_end; 
	String ^sql;

	id = ticket->Id;
	gia_ve = ticket->GiaVe;
	loai_xe = ticket->LoaiXe;
	bien_xe = ticket->BienXe;
	date_start = ticket->DateStart;
	date_end = ticket->DateEnd;

	sql = String::Format("UPDATE quanlyvethang SET BKS = '{0}', Loaixe = '{1}', Ngaybatdau = '{2}', Ngayketthuc = '{3}', Tien = '{4}' WHERE Mathe = '{5}'", bien_xe, loai_xe, date_start, date_end, gia_ve, id);
	try {
		DBUtils::ExcuteNonQuery(sql);
	}
	catch(Exception^e) {
		MessageBox::Show(e->Message, L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);

	}
}

void DA_VeThang::Delete(int id)
{
	String^ sql = String::Format("delete from quanlyvethang where Mathe = '{0}'", id);
	try {
		DBUtils::ExcuteNonQuery(sql);
	}
	catch (Exception ^e) {
		MessageBox::Show(e->Message, L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}

void DA_VeThang::Search(String^ sql, System::Windows::Forms::DataGridView^ dgvTicket)
{
	try {
		DBUtils::loadData(dgvTicket, sql);
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message, L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}

void SmartParkingSystem::DA_VeThang::showMoney(String^ sql, System::Windows::Forms::TextBox^ txtGiaVe)
{
	MySqlDataReader^ dr;
	try {
		dr = DBUtils::getDataReader(sql);
		if (dr != nullptr)
			while (dr->Read())
				txtGiaVe->Text = dr["Tien_Vethang"]->ToString();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message, L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	finally {
		dr->Close();
	}
}
