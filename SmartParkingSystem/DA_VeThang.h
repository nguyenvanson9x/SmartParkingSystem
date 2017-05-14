#pragma once
#include "VeThang.h"
#include "DBUtils.h"
namespace SmartParkingSystem {
	using namespace System::Windows::Forms;
	public ref class DA_VeThang
	{
	public:
		DA_VeThang(void);
		void Add(VeThang ^ ticket);
		void Update(VeThang ^ ticket);
		void Delete(int id);
	};
}


