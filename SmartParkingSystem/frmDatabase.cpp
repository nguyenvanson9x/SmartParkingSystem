#include "StdAfx.h"
#include "frmDatabase.h"

void SmartParkingSystem::frmDatabase::put_to_app_config()
{
	app_config::EditAppSetting("host", txtServer->Text);
	app_config::EditAppSetting("database", txtDatabase->Text);
	app_config::EditAppSetting("port", txtPort->Text);
	app_config::EditAppSetting("username", txtUsername->Text);
	app_config::EditAppSetting("password", txtPassword->Text);
}

void SmartParkingSystem::frmDatabase::init_app_config()
{
	app_config::AddAppSetting("host", "");
	app_config::AddAppSetting("database", "");
	app_config::AddAppSetting("port", "");
	app_config::AddAppSetting("username", "");
	app_config::AddAppSetting("password", "");
}

/// <summary>
/// Required method for Designer support - do not modify
/// the contents of this method with the code editor.
/// </summary>

inline void SmartParkingSystem::frmDatabase::InitializeComponent(void)
{
	System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmDatabase::typeid));
	this->pnTitle = (gcnew System::Windows::Forms::Panel());
	this->btnExit = (gcnew System::Windows::Forms::Button());
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
	this->btnLogin = (gcnew System::Windows::Forms::Button());
	this->pnTitle->SuspendLayout();
	this->SuspendLayout();
	// 
	// pnTitle
	// 
	this->pnTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
		static_cast<System::Int32>(static_cast<System::Byte>(56)));
	this->pnTitle->Controls->Add(this->btnExit);
	this->pnTitle->Dock = System::Windows::Forms::DockStyle::Top;
	this->pnTitle->Location = System::Drawing::Point(0, 0);
	this->pnTitle->Margin = System::Windows::Forms::Padding(0);
	this->pnTitle->Name = L"pnTitle";
	this->pnTitle->Size = System::Drawing::Size(500, 25);
	this->pnTitle->TabIndex = 7;
	this->pnTitle->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmDatabase::pnTitle_MouseDown);
	this->pnTitle->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmDatabase::pnTitle_MouseMove);
	this->pnTitle->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmDatabase::pnTitle_MouseUp);
	// 
	// btnExit
	// 
	this->btnExit->FlatAppearance->BorderSize = 0;
	this->btnExit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(229)), 
		static_cast<System::Int32>(static_cast<System::Byte>(57)), static_cast<System::Int32>(static_cast<System::Byte>(53)));
	this->btnExit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
		static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
	this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnExit->ForeColor = System::Drawing::Color::White;
	this->btnExit->Location = System::Drawing::Point(475, 0);
	this->btnExit->Margin = System::Windows::Forms::Padding(0);
	this->btnExit->Name = L"btnExit";
	this->btnExit->Size = System::Drawing::Size(25, 25);
	this->btnExit->TabIndex = 7;
	this->btnExit->Text = L"X";
	this->btnExit->UseVisualStyleBackColor = true;
	this->btnExit->Click += gcnew System::EventHandler(this, &frmDatabase::btnExit_Click);
	// 
	// lbTitle
	// 
	this->lbTitle->AutoSize = true;
	this->lbTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
		static_cast<System::Byte>(0)));
	this->lbTitle->ForeColor = System::Drawing::Color::White;
	this->lbTitle->Location = System::Drawing::Point(12, 36);
	this->lbTitle->Name = L"lbTitle";
	this->lbTitle->Size = System::Drawing::Size(267, 31);
	this->lbTitle->TabIndex = 7;
	this->lbTitle->Text = L"Kết nối Cơ Sở Dữ Liệu";
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
	this->lbServer->TabIndex = 7;
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
	this->lbPort->TabIndex = 7;
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
	this->lbDatabase->TabIndex = 7;
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
	this->lbUsername->TabIndex = 7;
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
	this->lbPassword->TabIndex = 7;
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
	this->txtServer->TabIndex = 0;
	this->txtServer->Text = L"localhost";
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
	this->txtPassword->TabIndex = 4;
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
	this->txtUsername->TabIndex = 3;
	this->txtUsername->Text = L"root";
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
	this->txtDatabase->TabIndex = 2;
	this->txtDatabase->Text = L"sps";
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
	this->txtPort->TabIndex = 1;
	this->txtPort->Text = L"3306";
	// 
	// btnLogin
	// 
	this->btnLogin->AutoSize = true;
	this->btnLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(87)), 
		static_cast<System::Int32>(static_cast<System::Byte>(34)));
	this->btnLogin->Cursor = System::Windows::Forms::Cursors::Hand;
	this->btnLogin->FlatAppearance->BorderSize = 0;
	this->btnLogin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
		static_cast<System::Int32>(static_cast<System::Byte>(74)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
	this->btnLogin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), 
		static_cast<System::Int32>(static_cast<System::Byte>(81)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
	this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
	this->btnLogin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
		static_cast<System::Byte>(0)));
	this->btnLogin->ForeColor = System::Drawing::Color::White;
	this->btnLogin->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnLogin.Image")));
	this->btnLogin->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
	this->btnLogin->Location = System::Drawing::Point(185, 395);
	this->btnLogin->Name = L"btnLogin";
	this->btnLogin->Size = System::Drawing::Size(130, 42);
	this->btnLogin->TabIndex = 5;
	this->btnLogin->Text = L"Kết nối";
	this->btnLogin->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
	this->btnLogin->UseVisualStyleBackColor = false;
	this->btnLogin->Click += gcnew System::EventHandler(this, &frmDatabase::btnLogin_Click);
	// 
	// frmDatabase
	// 
	this->AcceptButton = this->btnLogin;
	this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
	this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
		static_cast<System::Int32>(static_cast<System::Byte>(56)));
	this->ClientSize = System::Drawing::Size(500, 470);
	this->Controls->Add(this->btnLogin);
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
	this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
	this->Name = L"frmDatabase";
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
	this->Text = L"Kết nối cơ sở dữ liệu";
	this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmDatabase::pnTitle_MouseDown);
	this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmDatabase::pnTitle_MouseMove);
	this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmDatabase::pnTitle_MouseUp);
	this->pnTitle->ResumeLayout(false);
	this->ResumeLayout(false);
	this->PerformLayout();

}

inline System::Void SmartParkingSystem::frmDatabase::btnExit_Click(System::Object ^ sender, System::EventArgs ^ e) {
	Environment::Exit(0);
}

inline System::Void SmartParkingSystem::frmDatabase::btnLogin_Click(System::Object ^ sender, System::EventArgs ^ e) {
	Host = txtServer->Text;
	Database = txtDatabase->Text;
	Port = txtPort->Text;
	Username = txtUsername->Text;
	Password = txtPassword->Text;

	connect::push_to_connect(Host, Database, Port, Username, Password);
	if (DBUtils::OpenConnection()) {
		if (ConfigurationManager::AppSettings["host"] == nullptr) {
			init_app_config();
			put_to_app_config();
		}
		else
			put_to_app_config();
		frmLogin ^login = gcnew frmLogin();
		login->Show();
		this->Hide();
	}
	else
		MessageBox::Show(L"Lỗi kết nối cơ sở dữ liệu");
}

inline System::Void SmartParkingSystem::frmDatabase::pnTitle_MouseDown(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e) {
	mouseDown = true;
	lastLocation = e->Location;
}

inline System::Void SmartParkingSystem::frmDatabase::pnTitle_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e) {
	if (mouseDown)
	{
		if (this->mouseDown) {
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->lastLocation.X, currentScreenPos.Y - this->lastLocation.Y);
		}
	}
}

inline System::Void SmartParkingSystem::frmDatabase::pnTitle_MouseUp(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e) {
	mouseDown = false;
}

