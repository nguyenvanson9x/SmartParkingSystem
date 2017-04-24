// SmartParkingSystem.cpp : main project file.
#include "stdafx.h"
#include "frmDatabase.h"
using namespace SmartParkingSystem;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	if (connect::get_value()) //get-set value from app.config file
		if (connect::check_connection() == true) //check connection
			Application::Run(gcnew frmLogin());
		else
			Application::Run(gcnew frmDatabase());
	else
		Application::Run(gcnew frmDatabase());
	return 0;
}
