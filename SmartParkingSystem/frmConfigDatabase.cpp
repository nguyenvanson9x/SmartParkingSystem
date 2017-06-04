#include "StdAfx.h"
#include "frmConfigDatabase.h"

void SmartParkingSystem::frmConfigDatabase::put_to_app_config()
{
	app_config::EditAppSetting("host", txtServer->Text);
	app_config::EditAppSetting("database", txtDatabase->Text);
	app_config::EditAppSetting("port", txtPort->Text);
	app_config::EditAppSetting("username", txtUsername->Text);
	app_config::EditAppSetting("password", txtPassword->Text);
}

void SmartParkingSystem::frmConfigDatabase::init_app_config()
{
	app_config::AddAppSetting("host", "");
	app_config::AddAppSetting("database", "");
	app_config::AddAppSetting("port", "");
	app_config::AddAppSetting("username", "");
	app_config::AddAppSetting("password", "");
}