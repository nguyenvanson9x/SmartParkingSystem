#pragma once
#include "VeThang.h"
#include "DBUtils.h"
namespace SmartParkingSystem {
	using namespace System::Windows::Forms;
	public ref class DA_VeThang
	{
	public:
		DA_VeThang(void);
		void Add(VeThang ^ ticket);
		void Update(VeThang ^ ticket);
		void Delete(int id);
		void Search(String^ sql, System::Windows::Forms::DataGridView^ dgvTicket);
		void showMoney(String^ sql, System::Windows::Forms::TextBox^ txtGiaVe);
	};
}


