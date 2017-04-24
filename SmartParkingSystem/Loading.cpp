#include "StdAfx.h"
#include "Loading.h"

using namespace SmartParkingSystem;
Loading::Loading(frmDatabase^ db)
{
	bool state = db->get_remember();
}
