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
		void Traxe(Xe^,String^); // trả xe
		void Search(String^, DataGridView^); // tìm kiếm theo từ khóa, kết quả được đổ lên bảng datagridview
		void showData(TextBox^,String^,String^); // tính tổng số tiền cần trả, kết quả được hiển thị lên textbox
		int showTongXe(); // tính tổng số xe
	};
}