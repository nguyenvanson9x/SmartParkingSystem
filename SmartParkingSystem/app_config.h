#pragma once
namespace SmartParkingSystem {
	using namespace System::Configuration;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class app_config
	{
	private:
		static System::Configuration::Configuration ^config;
	public:
		app_config();
		static void EditAppSetting(String^, String^);
		static void AddAppSetting(String^, String^);
		static void RemoveAppSetting(String^);
	};
}

