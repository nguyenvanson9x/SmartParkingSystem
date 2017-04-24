#pragma once
#include <fstream>
#include <iostream>
#include <string>
namespace SmartParkingSystem {
	using namespace std;
	public ref class Utils_File
	{
	private:
		static fstream *f;
		static String ^dataSource, ^port, ^database, ^username, ^password, ^is_Remember;
	public:
		Utils_File();
		static void read_file(String^);
		static void write_file(String^);
	};
}


