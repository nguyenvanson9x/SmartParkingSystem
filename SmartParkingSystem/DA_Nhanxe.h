#pragma once
#include "Xe.h"
#include "DBUtils.h"
#include "Convert_Hethong.h"
namespace SmartParkingSystem {
	using namespace System::Windows::Forms;
	public ref class DA_Nhanxe
	{
	public:
		DA_Nhanxe(void);
		void InsertNX(Xe^);
		void UpdateNX(int,String^,String^,String^,String^);
		int TongXe();
		void deleteNX(int,String^);
		void Search(String^ sqlSearch, DataGridView^ dgv);
		int check_Ve(String^,String^);
		int check_gui(String^,String^);
		int check_han_vethang(String^,String^);
	};

}

