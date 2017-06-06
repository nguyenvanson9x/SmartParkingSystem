#pragma once
#include "Xe.h"
#include "DBUtils.h"
namespace SmartParkingSystem {
	using namespace System::Windows::Forms;
	public ref class DA_Traxe
	{
	public:
		DA_Traxe(void);
		void InsertTX(Xe^,String^); // thêm thông tin của xe vào bảng traxe trong csdl
		void UpdateTX(int,Xe^); // cập nhật thông tin xe trong bảng nhanxe: TrangThai = "T"
		void Search(String^ sqlSearch, DataGridView^ dgv); // tìm kiếm thông tin, và đổ dữ liệu lên bảng dgv
		int TongXe(); // Tính tổng số xe chưa trả
		String^ TongTien(String^); // Tính tổng số tiền cần trả
	};

}

