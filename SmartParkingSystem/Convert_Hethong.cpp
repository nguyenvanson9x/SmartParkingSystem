#include "StdAfx.h"
#include "Convert_Hethong.h"

using namespace SmartParkingSystem;

String^ Convert_Hethong::GUI_To_DB(String^ GUI)
{
	String^ DB = "";
	if (GUI->CompareTo(L"Xe đạp") == 0)
		DB = "Xe dap";
	if (GUI->CompareTo(L"Xe máy") == 0)
		DB = "Xe may";
	if (GUI->CompareTo(L"Xe ô tô") == 0)
		DB = "Xe o to";

	return DB;
}

String^ Convert_Hethong::DB_To_GUI(String^ DB)
{
	String^ GUI = "";
	if (DB->CompareTo("Xe dap") == 0)
		GUI = L"Xe đạp";
	if (DB->CompareTo("Xe may") == 0)
		GUI = L"Xe máy";
	if (DB->CompareTo("Xe o to") == 0)
		GUI = L"Xe o to";
	return GUI;
}
