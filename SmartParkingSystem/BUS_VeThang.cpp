#include "StdAfx.h"
#include "BUS_VeThang.h"
using namespace SmartParkingSystem;

BUS_VeThang::BUS_VeThang(void)
{
}

void BUS_VeThang::Add(VeThang ^ ticket)
{
	da->Add(ticket);
}

void BUS_VeThang::Update(VeThang ^ ticket)
{
	da->Update(ticket);
}

void BUS_VeThang::Delete(int id)
{
	da->Delete(id);
}

void BUS_VeThang::Search(String ^ search, System::Windows::Forms::DataGridView^ dgvTicket)
{
}
