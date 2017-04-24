#pragma once
#include "DBMySQLUtils.h"
namespace SmartParkingSystem {
	using namespace MySql::Data::MySqlClient;
	using namespace System::Configuration;
	using namespace System::Data;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Drawing;

	public ref class connect
	{
	private:
		static String ^dataSource, ^port, ^database, ^username, ^password;
		static MySqlConnection^ conn = nullptr;
		static connect^ instance = nullptr;
		connect();
	public:
		static connect^ GetInstance();
		MySqlConnection^ getConnection();
		static bool get_value();
		static void push_to_connect(String^, String^, String^, String^, String^);
		static bool check_connection();

		property String^ Host {
			String^ get() { return dataSource; }
			void set(String^ h) { dataSource = h; }
		}
		property String^ Port {
			String^ get() { return port; }
			void set(String^ p) { port = p; }
		}
		property String^ Database {
			String^ get() { return database; }
			void set(String^ db) { database = db; }
		}
		property String^ Username {
			String^ get() { return username; }
			void set(String^ u) { username = u; }
		}
		property String^ Password {
			String^ get() { return password; }
			void set(String^ pass) { password = pass; }
		}
	};
}


