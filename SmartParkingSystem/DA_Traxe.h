#pragma once
#include "Xe.h"
#include "DBUtils.h"
namespace SmartParkingSystem {
	using namespace System::Windows::Forms;
	public ref class DA_Traxe
	{
	public:
		DA_Traxe(void);
		void InsertTX(Xe^,String^);
		void UpdateTX(int,Xe^);
		void Search(String^ sqlSearch, DataGridView^ dgv);
		int TongXe();
		String^ TongTien(String^);
	};

}

