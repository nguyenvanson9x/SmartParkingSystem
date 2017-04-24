#include "stdafx.h"
#include "connect.h"

using namespace SmartParkingSystem;
connect::connect()
{
	try
	{
		conn = DBMySQLUtils::GetDBConnection(dataSource, port, database, username, password);
	}
	catch (MySqlException^)
	{

	}
}

connect ^ connect::GetInstance()
{
	try
	{
		if (instance == nullptr || instance->getConnection()->State == ConnectionState::Closed)
			instance = gcnew connect();
	}
	catch (MySqlException^)
	{
	}
	return instance;
	// TODO: insert return statement here
}

MySqlConnection ^ connect::getConnection()
{
	return conn;
	// TODO: insert return statement here
}
bool connect::get_value()
{
	if (ConfigurationManager::AppSettings["host"] != nullptr) {
		//Get value from App.config
		dataSource = ConfigurationManager::AppSettings["host"];
		port = ConfigurationManager::AppSettings["port"];
		database = ConfigurationManager::AppSettings["database"];
		username = ConfigurationManager::AppSettings["username"];
		password = ConfigurationManager::AppSettings["password"];
		return true;
	}
	return false;
}

void connect::push_to_connect(String^ dS, String^ db, String^ p, String^ u, String^ pass)
{
	dataSource = dS;
	database = db;
	port = p;
	username = u;
	password = pass;
}

bool connect::check_connection()
{
	try
	{
		conn = DBMySQLUtils::GetDBConnection(dataSource, port, database, username, password);
		conn->Open();
		return true;
	}
	catch (MySqlException^)
	{
		return false;
	}

	return false;
}