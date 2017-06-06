#pragma once
#include "Xe.h"
#include "DBUtils.h"
#include "Convert_Hethong.h"
namespace SmartParkingSystem {
	using namespace System::Windows::Forms;
	public ref class DA_Thongke
	{
	public:
		DA_Thongke(void);
		void thongke_theo_ngay(DataGridView^,String^,String^);
		void thongke_theo_bks(DataGridView^,String^);
		void thongke_theo_loaixe(DataGridView^,String^);
		void thongke_theo_trangthai(DataGridView^,String^);
		void thongke_full_luachon(DataGridView^,String^,String^,String^,String^,String^);
		//void xuat_bao_cao();
		
	};

}