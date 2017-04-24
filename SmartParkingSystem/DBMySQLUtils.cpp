#include "StdAfx.h"
#include "DBMySQLUtils.h"
using namespace SmartParkingSystem;

DBMySQLUtils::DBMySQLUtils()
{
}

MySqlConnection^ DBMySQLUtils::GetDBConnection(String^ host, String^ port, String^ database, String^ username, String^ password) {
	String^ conn_str = L"datasource=" + host + ";port=" + port + ";username=" + username + ";password=" + password + ";database=" + database;
	conn = gcnew MySqlConnection(conn_str);
	return conn;
}
