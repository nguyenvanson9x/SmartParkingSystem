#pragma once
namespace SmartParkingSystem {
	public ref class Startup
	{
	private:
		static String ^host, ^port, ^database, ^username, ^password;
	public:		
		Startup();
		static bool get_value();
		static void push_to_connect();
		static bool check_connection();
	};
}