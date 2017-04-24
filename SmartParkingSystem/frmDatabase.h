#pragma once
#include "frmLogin.h"
#include "connect.h" //không có cũng không sao.
#include "app_config.h"

namespace SmartParkingSystem {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmDatabase
	/// </summary>
	public ref class frmDatabase : public System::Windows::Forms::Form
	{
	public:
		frmDatabase(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmDatabase()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  pnTitle;

	private: System::Windows::Forms::Label^  lbTitle;
	private: System::Windows::Forms::Label^  lbServer;
	private: System::Windows::Forms::Label^  lbPort;
	private: System::Windows::Forms::Label^  lbDatabase;
	private: System::Windows::Forms::Label^  lbUsername;
	private: System::Windows::Forms::Label^  lbPassword;

	private: System::Windows::Forms::TextBox^  txtServer;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::TextBox^  txtUsername;
	private: System::Windows::Forms::TextBox^  txtDatabase;
	private: System::Windows::Forms::TextBox^  txtPort;

	private: System::Windows::Forms::Button^  btnLogin;
	private: System::Windows::Forms::Button^  btnExit;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		bool mouseDown;
		Point lastLocation;
		void put_to_app_config();
		void init_app_config();
		String ^Host, ^Database, ^Port, ^Username, ^Password;
		connect ^c;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void);
#pragma endregion
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void pnTitle_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void pnTitle_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void pnTitle_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);

	};
}
