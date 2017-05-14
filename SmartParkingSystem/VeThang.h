#pragma once
namespace SmartParkingSystem {
	using namespace System;

	public ref class VeThang
	{
	private:
		int id, gia_ve;
		String ^loai_xe, ^bien_xe, ^date_start, ^date_end; 
	public:
		VeThang(void);
		VeThang(int, String^, String^, String^, String^, int);
		property int Id {
			int get() { return id; }
			void set(int i) { id = i; }
		}

		property String^ LoaiXe {
			String^ get() { return loai_xe; }
			void set(String^ lx) { loai_xe = lx; }
		}

		property String^ BienXe {
			String^ get() { return bien_xe; }
			void set(String^ bx) { bien_xe = bx; }
		}

		property String^ DateStart {
			String^ get() { return date_start; }
			void set(String^ ds) { date_start = ds; }
		}

		property String^ DateEnd {
			String^ get() { return date_end; }
			void set(String^ de) { date_end = de; }
		}

		property int GiaVe {
			int get() { return gia_ve; }
			void set(int gv) { gia_ve = gv; }
		}
	};
}


