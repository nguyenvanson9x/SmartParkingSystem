#include "StdAfx.h"
#include "app_config.h"

using namespace SmartParkingSystem;
app_config::app_config()
{	
}

//edit values in app.config file
void app_config::EditAppSetting(String ^key, String ^value)
{
	config = ConfigurationManager::OpenExeConfiguration(ConfigurationUserLevel::None);
	config->AppSettings->Settings[key]->Value = value;
	config->Save(ConfigurationSaveMode::Modified);
	ConfigurationManager::RefreshSection("appSettings");
}
//add key-value to app.config file
void app_config::AddAppSetting(String ^key, String ^value)
{
	config = ConfigurationManager::OpenExeConfiguration(ConfigurationUserLevel::None);
	config->AppSettings->Settings->Add(key, value);
	config->Save(ConfigurationSaveMode::Modified);
	ConfigurationManager::RefreshSection("appSettings");
}
//remove key-value in app.config file
void app_config::RemoveAppSetting(String ^key)
{
	config = ConfigurationManager::OpenExeConfiguration(ConfigurationUserLevel::None);
	config->AppSettings->Settings->Remove(key);
	config->Save(ConfigurationSaveMode::Modified);
	ConfigurationManager::RefreshSection("appSettings");
}
