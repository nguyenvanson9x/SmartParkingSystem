#pragma once
namespace SmartParkingSystem {
	using namespace System;

	public ref class Xe
	{
	private:
		int id;
		String ^bks, ^loai_xe, ^thoi_gian_vao, ^thoi_gian_ra,^loai_ve,^gia_ve;
	public:
		Xe(void);
		Xe(int, String^, String^, String^, String^, String^, String^);
		property int Id {
			int get() { return id; }
			void set(int i) { id = i; }
		}

		property String^ LoaiXe {
			String^ get() { return loai_xe; }
			void set(String^ lx) { loai_xe = lx; }
		}

		property String^ ThoiGianVao {
			String^ get() { return thoi_gian_vao; }
			void set(String ^tgv) { thoi_gian_vao = tgv; }
		}

		property String^ ThoiGianRa {
			String^ get() { return thoi_gian_ra; }
			void set(String ^tgr) { thoi_gian_ra = tgr; }
		}

		property String^ LoaiVe {
			String^ get() { return loai_ve; }
			void set(String^ lv) { loai_ve = lv; }
		}
		property String^ BienKiemSoat{
			String^ get(){
				return bks;
			}
			void set(String^ bien_so){
				bks=bien_so;
			}
		}
		property String^ GiaVe{
			String^ get(){return gia_ve;}
			void set(String^ giave){gia_ve=giave;}
		}

	};

}

