#include "StdAfx.h"
#include "VeThang.h"

using namespace SmartParkingSystem;
VeThang::VeThang(void)
{
}

VeThang::VeThang(int id, String^ loai_xe, String^ bien_xe, String^ date_start, String^ date_end, int gia_ve)
{
	id = id;
	loai_xe = loai_xe;
	bien_xe = bien_xe;
	date_start = date_start;
	date_end = date_end;
	gia_ve = gia_ve;

}
