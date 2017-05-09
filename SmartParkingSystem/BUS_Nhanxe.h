#pragma once
#include "DA_Nhanxe.h"
#include "Xe.h"
namespace SmartParkingSystem {
	using namespace System::Windows::Forms;
	using namespace System;
	public ref class BUS_Nhanxe
	{
	private:
		DA_Nhanxe ^da;
	public:
		BUS_Nhanxe(void);
		void Them(Xe^,String^,String^);
		void CapNhat(int,String^,String^,String^,String^);
		void Xoa(int,String^);
		void Search(String^, DataGridView^);
		int showTongXe();
	};
}