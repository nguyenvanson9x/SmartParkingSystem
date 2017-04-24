#pragma once
#include "connect.h"
namespace SmartParkingSystem {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmConfigDatabase
	/// </summary>
	public ref class frmConfigDatabase : public System::Windows::Forms::Form
	{
	public:
		frmConfigDatabase(void)
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
		~frmConfigDatabase()
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
	private: System::Windows::Forms::Button^  btnCheckConnect;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::Button^  btnSaveConfig;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		bool mouseDown;
		Point lastLocation;
		String ^Host, ^Database, ^Port, ^Username, ^Password;
		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmConfigDatabase::typeid));
			this->pnTitle = (gcnew System::Windows::Forms::Panel());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->lbServer = (gcnew System::Windows::Forms::Label());
			this->lbPort = (gcnew System::Windows::Forms::Label());
			this->lbDatabase = (gcnew System::Windows::Forms::Label());
			this->lbUsername = (gcnew System::Windows::Forms::Label());
			this->lbPassword = (gcnew System::Windows::Forms::Label());
			this->txtServer = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->txtUsername = (gcnew System::Windows::Forms::TextBox());
			this->txtDatabase = (gcnew System::Windows::Forms::TextBox());
			this->txtPort = (gcnew System::Windows::Forms::TextBox());
			this->btnCheckConnect = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnSaveConfig = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// pnTitle
			// 
			this->pnTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->pnTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnTitle->Location = System::Drawing::Point(0, 0);
			this->pnTitle->Margin = System::Windows::Forms::Padding(0);
			this->pnTitle->Name = L"pnTitle";
			this->pnTitle->Size = System::Drawing::Size(500, 25);
			this->pnTitle->TabIndex = 0;
			this->pnTitle->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmConfigDatabase::pnTitle_MouseDown);
			this->pnTitle->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmConfigDatabase::pnTitle_MouseMove);
			this->pnTitle->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmConfigDatabase::pnTitle_MouseUp);
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->ForeColor = System::Drawing::Color::White;
			this->lbTitle->Location = System::Drawing::Point(12, 36);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(286, 31);
			this->lbTitle->TabIndex = 1;
			this->lbTitle->Text = L"Cấu hình Cơ Sở Dữ Liệu";
			// 
			// lbServer
			// 
			this->lbServer->AutoSize = true;
			this->lbServer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbServer->ForeColor = System::Drawing::Color::White;
			this->lbServer->Location = System::Drawing::Point(57, 126);
			this->lbServer->Name = L"lbServer";
			this->lbServer->Size = System::Drawing::Size(77, 22);
			this->lbServer->TabIndex = 0;
			this->lbServer->Text = L"Máy chủ";
			// 
			// lbPort
			// 
			this->lbPort->AutoSize = true;
			this->lbPort->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPort->ForeColor = System::Drawing::Color::White;
			this->lbPort->Location = System::Drawing::Point(57, 176);
			this->lbPort->Name = L"lbPort";
			this->lbPort->Size = System::Drawing::Size(51, 22);
			this->lbPort->TabIndex = 0;
			this->lbPort->Text = L"Cổng";
			// 
			// lbDatabase
			// 
			this->lbDatabase->AutoSize = true;
			this->lbDatabase->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbDatabase->ForeColor = System::Drawing::Color::White;
			this->lbDatabase->Location = System::Drawing::Point(57, 226);
			this->lbDatabase->Name = L"lbDatabase";
			this->lbDatabase->Size = System::Drawing::Size(119, 22);
			this->lbDatabase->TabIndex = 0;
			this->lbDatabase->Text = L"Cơ sở dữ liệu";
			// 
			// lbUsername
			// 
			this->lbUsername->AutoSize = true;
			this->lbUsername->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUsername->ForeColor = System::Drawing::Color::White;
			this->lbUsername->Location = System::Drawing::Point(57, 276);
			this->lbUsername->Name = L"lbUsername";
			this->lbUsername->Size = System::Drawing::Size(88, 22);
			this->lbUsername->TabIndex = 0;
			this->lbUsername->Text = L"Tài khoản";
			// 
			// lbPassword
			// 
			this->lbPassword->AutoSize = true;
			this->lbPassword->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPassword->ForeColor = System::Drawing::Color::White;
			this->lbPassword->Location = System::Drawing::Point(57, 326);
			this->lbPassword->Name = L"lbPassword";
			this->lbPassword->Size = System::Drawing::Size(82, 22);
			this->lbPassword->TabIndex = 0;
			this->lbPassword->Text = L"Mật khẩu";
			// 
			// txtServer
			// 
			this->txtServer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->txtServer->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtServer->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtServer->ForeColor = System::Drawing::Color::White;
			this->txtServer->Location = System::Drawing::Point(223, 120);
			this->txtServer->Name = L"txtServer";
			this->txtServer->Size = System::Drawing::Size(220, 30);
			this->txtServer->TabIndex = 1;
			// 
			// txtPassword
			// 
			this->txtPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPassword->ForeColor = System::Drawing::Color::White;
			this->txtPassword->Location = System::Drawing::Point(223, 320);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(220, 30);
			this->txtPassword->TabIndex = 5;
			this->txtPassword->UseSystemPasswordChar = true;
			// 
			// txtUsername
			// 
			this->txtUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->txtUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtUsername->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsername->ForeColor = System::Drawing::Color::White;
			this->txtUsername->Location = System::Drawing::Point(223, 270);
			this->txtUsername->Name = L"txtUsername";
			this->txtUsername->Size = System::Drawing::Size(220, 30);
			this->txtUsername->TabIndex = 4;
			// 
			// txtDatabase
			// 
			this->txtDatabase->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->txtDatabase->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtDatabase->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDatabase->ForeColor = System::Drawing::Color::White;
			this->txtDatabase->Location = System::Drawing::Point(223, 220);
			this->txtDatabase->Name = L"txtDatabase";
			this->txtDatabase->Size = System::Drawing::Size(220, 30);
			this->txtDatabase->TabIndex = 3;
			// 
			// txtPort
			// 
			this->txtPort->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->txtPort->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPort->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPort->ForeColor = System::Drawing::Color::White;
			this->txtPort->Location = System::Drawing::Point(223, 170);
			this->txtPort->Name = L"txtPort";
			this->txtPort->Size = System::Drawing::Size(220, 30);
			this->txtPort->TabIndex = 2;
			// 
			// btnCheckConnect
			// 
			this->btnCheckConnect->AutoSize = true;
			this->btnCheckConnect->BackColor = System::Drawing::Color::LimeGreen;
			this->btnCheckConnect->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCheckConnect->FlatAppearance->BorderSize = 0;
			this->btnCheckConnect->FlatAppearance->MouseOverBackColor = System::Drawing::Color::ForestGreen;
			this->btnCheckConnect->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCheckConnect->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCheckConnect->ForeColor = System::Drawing::Color::White;
			this->btnCheckConnect->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCheckConnect.Image")));
			this->btnCheckConnect->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCheckConnect->Location = System::Drawing::Point(39, 395);
			this->btnCheckConnect->Name = L"btnCheckConnect";
			this->btnCheckConnect->Size = System::Drawing::Size(170, 38);
			this->btnCheckConnect->TabIndex = 6;
			this->btnCheckConnect->Text = L"Kiểm tra kết nối";
			this->btnCheckConnect->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnCheckConnect->UseVisualStyleBackColor = false;
			this->btnCheckConnect->Click += gcnew System::EventHandler(this, &frmConfigDatabase::btnCheckConnect_Click);
			// 
			// btnExit
			// 
			this->btnExit->AutoSize = true;
			this->btnExit->BackColor = System::Drawing::Color::SandyBrown;
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Orange;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::Color::White;
			this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
			this->btnExit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnExit->Location = System::Drawing::Point(371, 395);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(90, 38);
			this->btnExit->TabIndex = 8;
			this->btnExit->Text = L"Đóng";
			this->btnExit->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &frmConfigDatabase::btnExit_Click);
			// 
			// btnSaveConfig
			// 
			this->btnSaveConfig->AutoSize = true;
			this->btnSaveConfig->BackColor = System::Drawing::Color::RoyalBlue;
			this->btnSaveConfig->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSaveConfig->FlatAppearance->BorderSize = 0;
			this->btnSaveConfig->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumBlue;
			this->btnSaveConfig->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSaveConfig->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSaveConfig->ForeColor = System::Drawing::Color::White;
			this->btnSaveConfig->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSaveConfig.Image")));
			this->btnSaveConfig->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSaveConfig->Location = System::Drawing::Point(215, 395);
			this->btnSaveConfig->Name = L"btnSaveConfig";
			this->btnSaveConfig->Size = System::Drawing::Size(150, 38);
			this->btnSaveConfig->TabIndex = 7;
			this->btnSaveConfig->Text = L"Lưu cấu hình";
			this->btnSaveConfig->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnSaveConfig->UseVisualStyleBackColor = false;
			this->btnSaveConfig->Click += gcnew System::EventHandler(this, &frmConfigDatabase::btnSaveConfig_Click);
			// 
			// frmConfigDatabase
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->ClientSize = System::Drawing::Size(500, 470);
			this->Controls->Add(this->btnSaveConfig);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnCheckConnect);
			this->Controls->Add(this->txtPort);
			this->Controls->Add(this->txtDatabase);
			this->Controls->Add(this->txtUsername);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtServer);
			this->Controls->Add(this->lbPassword);
			this->Controls->Add(this->lbUsername);
			this->Controls->Add(this->lbDatabase);
			this->Controls->Add(this->lbPort);
			this->Controls->Add(this->lbServer);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->pnTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmConfigDatabase";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Kết nối cơ sở dữ liệu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void pnTitle_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseDown = true;
		lastLocation = e->Location;
	}
	private: System::Void pnTitle_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (mouseDown)
		{
			if (this->mouseDown) {
				Point currentScreenPos = PointToScreen(e->Location);
				Location = Point(currentScreenPos.X - this->lastLocation.X, currentScreenPos.Y - this->lastLocation.Y);
			}
		}
	}
	private: System::Void pnTitle_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		mouseDown = false;
	}

	private: System::Void btnCheckConnect_Click(System::Object^  sender, System::EventArgs^  e) {
		connect^ c;
		c->Host = txtServer->Text;
		c->Database = txtDatabase->Text;
		c->Port = txtPort->Text;
		c->Username = txtUsername->Text;
		c->Password = txtPassword->Text;

		MessageBox::Show(c->check_connection().ToString());
	}
	private: System::Void btnSaveConfig_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
