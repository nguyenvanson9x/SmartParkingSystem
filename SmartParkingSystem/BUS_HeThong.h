#pragma once
#include "DA_HeThong.h"
#include "HeThong.h"
namespace SmartParkingSystem {
	using namespace System::Windows::Forms;
	using namespace System;
	public ref class BUS_HeThong
	{
	private:
		DA_HeThong ^da;
	public:
		BUS_HeThong(void);
		//void ThayDoi();
		void Them(HeThong^);
		void CapNhat(HeThong^);
		void Xoa(int);
		void Search(String^, DataGridView^);
		void showTicket(String^ Loaixe, String^ Loaive, TextBox^ txtGiahientai);
		void Thaydoi(ComboBox^ cbLoaixe, ComboBox^ cbLoaive, TextBox^ txtGiahientai, TextBox^ txtGiadieuchinh);
		//void ShowTicket(String^, String^, TextBox^);
	};
}


