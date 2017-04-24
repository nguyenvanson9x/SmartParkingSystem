#pragma once
namespace SmartParkingSystem {
	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class DBMySQLUtils
	{
		static MySqlConnection^ conn = nullptr;
	public:
		DBMySQLUtils();
		static MySqlConnection^ GetDBConnection(String^, String^, String^, String^, String^);
	};
}



