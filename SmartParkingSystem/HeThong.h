#pragma once
namespace SmartParkingSystem {
	using namespace System;

	public ref class HeThong
	{
	private:
		int id;
		String ^ho_ten, ^tai_khoan, ^mat_khau, ^chuc_vu;
	public:
		HeThong(void);
		HeThong(int, String^, String^, String^, String^);
		property int Id {
			int get() { return id; }
			void set(int i) { id = i; }
		}

		property String^ ChucVu {
			String^ get() { return chuc_vu; }
			void set(String^ cv) { chuc_vu = cv; }
		}

		property String^ HoTen {
			String^ get() { return ho_ten; }
			void set(String ^ht) { ho_ten = ht; }
		}

		property String^ TaiKhoan {
			String^ get() { return tai_khoan; }
			void set(String ^tk) { tai_khoan = tk; }
		}

		property String^ MatKhau {
			String^ get() { return mat_khau; }
			void set(String^ mk) { mat_khau = mk; }
		}
	};

}

