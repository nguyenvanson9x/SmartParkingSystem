#pragma once
namespace SmartParkingSystem {
	using namespace System;
	public ref class Nhanxe{
	protected:
		int sove;
		String ^bks, ^loaive, ^vitri,^date,^trangthai;
	public:
		Nhanxe(void);
		Nhanxe(int,String^,String^,String^,String^,String^);
		property int id

	}
}