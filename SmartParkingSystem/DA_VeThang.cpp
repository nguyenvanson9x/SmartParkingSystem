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
		MessageBox::Show(e->Message);

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

	sql = String::Format("update quanlyvethang set BKS = '{0}', Loai");
}

void DA_VeThang::Delete(int id)
{
}

void SmartParkingSystem::DA_VeThang::Search(String^ sql, System::Windows::Forms::DataGridView^ dgvTicket)
{
	throw gcnew System::NotImplementedException();
}
