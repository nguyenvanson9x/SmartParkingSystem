#pragma once
#include "DA_Traxe.h"
#include "Xe.h"
namespace SmartParkingSystem {
	using namespace System::Windows::Forms;
	using namespace System;
	public ref class BUS_Traxe
	{
	private:
		DA_Traxe ^da;
	public:
		BUS_Traxe(void);
		void Traxe(Xe^,String^);
		void Search(String^, DataGridView^);
		void showData(TextBox^,String^,String^);
		int showTongXe();
	};
}