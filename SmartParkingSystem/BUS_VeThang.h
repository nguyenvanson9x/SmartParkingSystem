#pragma once
#include "VeThang.h"
#include "DA_VeThang.h"
namespace SmartParkingSystem {
	using namespace System::Windows::Forms;
	using namespace System;

	public ref class BUS_VeThang
	{
	private:
		DA_VeThang ^da;
	public:
		BUS_VeThang(void);
		void Add(VeThang ^ ticket);
		void Update(VeThang ^ ticket);
		void Delete(int id);
		void Search(String ^ search, System::Windows::Forms::DataGridView^ dgvTicket);
	};
}


