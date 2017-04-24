#include "StdAfx.h"
#include "HeThong.h"

using namespace SmartParkingSystem;
HeThong::HeThong(void)
{
}

HeThong::HeThong(int i, String^ u, String^ p, String^ name, String^ cv)
{
	id = i;
	tai_khoan = u;
	mat_khau = p;
	ho_ten = name;
	chuc_vu = cv;
}
