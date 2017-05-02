#pragma once
#include "HeThong.h"
#include "DBUtils.h"
namespace SmartParkingSystem {
	using namespace System::Windows::Forms;
	public ref class DA_HeThong
	{
	public:
		DA_HeThong(void);
		void InsertHT(HeThong^ h);
		void updateHT(HeThong^ user);
		void deleteHT(int id);
		void Search(String^ sqlSearch, DataGridView^ dgv);
		void showMoney(String^ sqlMoney, String^ money, TextBox^ txtGiahientai);
		void updateTicket(String^ loaixe, int money, String^ type);
	};

}

