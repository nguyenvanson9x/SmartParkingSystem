#include "StdAfx.h"
#include "VeThang.h"

using namespace SmartParkingSystem;
VeThang::VeThang(void)
{
}

VeThang::VeThang(int id, String^ loai_xe, String^ bien_xe, String^ date_start, String^ date_end, int gia_ve)
{
	this->id = id;
	this->loai_xe = loai_xe;
	this->bien_xe = bien_xe;
	this->date_start = date_start;
	this->date_end = date_end;
	this->gia_ve = gia_ve;

}
