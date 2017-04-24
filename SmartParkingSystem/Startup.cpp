#include "StdAfx.h"
#include "Startup.h"
#include "connect.h"
#include "DBUtils.h"
using namespace SmartParkingSystem;
Startup::Startup()
{
}

bool Startup::get_value()
{
	if (ConfigurationManager::AppSettings["host"] != nullptr) {
		//Get value from App.config
		host = ConfigurationManager::AppSettings["host"];
		port = ConfigurationManager::AppSettings["port"];
		database = ConfigurationManager::AppSettings["database"];
		username = ConfigurationManager::AppSettings["username"];
		password = ConfigurationManager::AppSettings["password"];
		return true;
	}
	return false;
}

void Startup::push_to_connect()
{

}

bool Startup::check_connection()
{
	return DBUtils::OpenConnection();
}