#pragma once
#include "HeThong.h"
namespace SmartParkingSystem {
	using namespace System::Windows::Forms;
	public ref class DA_HeThong
	{
	public:
		DA_HeThong(void);
		void InsertHT(HeThong^ h);
		void updateHT(HeThong^ user);
		void deleteHT(int id);
		void LoadData(String^ sqlSearch, DataGridView^ dgv);
	};

}

