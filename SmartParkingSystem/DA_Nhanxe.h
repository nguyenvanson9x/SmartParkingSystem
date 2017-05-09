#pragma once
#include "Xe.h"
#include "DBUtils.h"
namespace SmartParkingSystem {
	using namespace System::Windows::Forms;
	public ref class DA_Nhanxe
	{
	public:
		DA_Nhanxe(void);
		void InsertNX(Xe^);
		void UpdateNX(int,String^,String^,String^,String^);
		void InsertX(String^,String^);
		int TongXe();
		void deleteNX(int,String^);
		void Search(String^ sqlSearch, DataGridView^ dgv);
		bool check_Ve(String^,String^);
		bool check_gui(String^,String^);
		bool checkInsert(String^);
	};

}

