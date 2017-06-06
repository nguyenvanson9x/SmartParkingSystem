#pragma once
#include "DA_Thongke.h"
#include "Xe.h"
namespace SmartParkingSystem {
	using namespace System::Windows::Forms;
	using namespace System;
	public ref class BUS_Thongke
	{
	private:
		DA_Thongke ^da;
	public:
		BUS_Thongke(void);
		void Thongke_theo_ngay(DataGridView^,String^,String^);
		void Thongke_theo_bks(DataGridView^,String^);
		void Thongke_theo_loaixe(DataGridView^,String^);
		void Thongke_theo_trangthai(DataGridView^,String^);
		void Thongke_full_luachon(DataGridView^,String^,String^,String^,String^,String^);
	};
}