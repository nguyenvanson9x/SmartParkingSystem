#include "StdAfx.h"
#include "Utils_File.h"

using namespace SmartParkingSystem;
Utils_File::Utils_File()
{
}

void Utils_File::read_file(String ^ path)
{
	f->open("app.cfg");
	string line, data;
	while (!f->eof()) {

	}
}

void Utils_File::write_file(String ^ path)
{
}
