#pragma once
#include "DA_HeThong.h"
#include "HeThong.h"
namespace SmartParkingSystem {
	using namespace System::Windows::Forms;
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
		//void ShowTicket(String^, String^, TextBox^);
	};
}


