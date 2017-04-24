#pragma once
#include "frmMain.h"
namespace SmartParkingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmLogin
	/// </summary>
	public ref class frmLogin : public System::Windows::Forms::Form
	{
	public:
		frmLogin(void)
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
		~frmLogin()
		{
			if (components)
			{
				delete components;
			}
		}

		//static void sayHello();
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		bool mouseDown;
		Point lastLocation;
	private: System::Windows::Forms::Panel^  pnTitle;
	private: System::Windows::Forms::Label^  lbTitle;
	private: System::Windows::Forms::TextBox^  txtUsername;
	private: System::Windows::Forms::Label^  lbUsername;
	private: System::Windows::Forms::TextBox^  txtPassword;
	private: System::Windows::Forms::Label^  lbPassword;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::Button^  btnLogin;


#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmLogin::typeid));
				 this->pnTitle = (gcnew System::Windows::Forms::Panel());
				 this->lbTitle = (gcnew System::Windows::Forms::Label());
				 this->txtUsername = (gcnew System::Windows::Forms::TextBox());
				 this->lbUsername = (gcnew System::Windows::Forms::Label());
				 this->txtPassword = (gcnew System::Windows::Forms::TextBox());
				 this->lbPassword = (gcnew System::Windows::Forms::Label());
				 this->btnExit = (gcnew System::Windows::Forms::Button());
				 this->btnLogin = (gcnew System::Windows::Forms::Button());
				 this->SuspendLayout();
				 // 
				 // pnTitle
				 // 
				 this->pnTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
					 static_cast<System::Int32>(static_cast<System::Byte>(56)));
				 this->pnTitle->Dock = System::Windows::Forms::DockStyle::Top;
				 this->pnTitle->Location = System::Drawing::Point(0, 0);
				 this->pnTitle->Margin = System::Windows::Forms::Padding(0);
				 this->pnTitle->Name = L"pnTitle";
				 this->pnTitle->Size = System::Drawing::Size(360, 25);
				 this->pnTitle->TabIndex = 0;
				 this->pnTitle->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmLogin::pnTitle_MouseDown);
				 this->pnTitle->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmLogin::pnTitle_MouseMove);
				 this->pnTitle->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmLogin::pnTitle_MouseUp);
				 // 
				 // lbTitle
				 // 
				 this->lbTitle->AutoSize = true;
				 this->lbTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->lbTitle->ForeColor = System::Drawing::Color::White;
				 this->lbTitle->Location = System::Drawing::Point(12, 36);
				 this->lbTitle->Name = L"lbTitle";
				 this->lbTitle->Size = System::Drawing::Size(235, 31);
				 this->lbTitle->TabIndex = 2;
				 this->lbTitle->Text = L"Đăng nhập hệ thống";
				 // 
				 // txtUsername
				 // 
				 this->txtUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
					 static_cast<System::Int32>(static_cast<System::Byte>(56)));
				 this->txtUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->txtUsername->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->txtUsername->ForeColor = System::Drawing::Color::White;
				 this->txtUsername->Location = System::Drawing::Point(41, 167);
				 this->txtUsername->Name = L"txtUsername";
				 this->txtUsername->Size = System::Drawing::Size(271, 30);
				 this->txtUsername->TabIndex = 1;
				 // 
				 // lbUsername
				 // 
				 this->lbUsername->AutoSize = true;
				 this->lbUsername->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->lbUsername->ForeColor = System::Drawing::Color::White;
				 this->lbUsername->Location = System::Drawing::Point(41, 130);
				 this->lbUsername->Name = L"lbUsername";
				 this->lbUsername->Size = System::Drawing::Size(104, 22);
				 this->lbUsername->TabIndex = 0;
				 this->lbUsername->Text = L"Người dùng";
				 // 
				 // txtPassword
				 // 
				 this->txtPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
					 static_cast<System::Int32>(static_cast<System::Byte>(56)));
				 this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				 this->txtPassword->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->txtPassword->ForeColor = System::Drawing::Color::White;
				 this->txtPassword->Location = System::Drawing::Point(41, 282);
				 this->txtPassword->Name = L"txtPassword";
				 this->txtPassword->Size = System::Drawing::Size(271, 30);
				 this->txtPassword->TabIndex = 2;
				 this->txtPassword->UseSystemPasswordChar = true;
				 // 
				 // lbPassword
				 // 
				 this->lbPassword->AutoSize = true;
				 this->lbPassword->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->lbPassword->ForeColor = System::Drawing::Color::White;
				 this->lbPassword->Location = System::Drawing::Point(41, 245);
				 this->lbPassword->Name = L"lbPassword";
				 this->lbPassword->Size = System::Drawing::Size(82, 22);
				 this->lbPassword->TabIndex = 0;
				 this->lbPassword->Text = L"Mật khẩu";
				 // 
				 // btnExit
				 // 
				 this->btnExit->AutoSize = true;
				 this->btnExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
					 static_cast<System::Int32>(static_cast<System::Byte>(80)));
				 this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->btnExit->FlatAppearance->BorderSize = 0;
				 this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnExit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btnExit->ForeColor = System::Drawing::Color::White;
				 this->btnExit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.Image")));
				 this->btnExit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 this->btnExit->Location = System::Drawing::Point(211, 360);
				 this->btnExit->Name = L"btnExit";
				 this->btnExit->Size = System::Drawing::Size(105, 42);
				 this->btnExit->TabIndex = 4;
				 this->btnExit->Text = L"Thoát";
				 this->btnExit->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
				 this->btnExit->UseVisualStyleBackColor = false;
				 this->btnExit->Click += gcnew System::EventHandler(this, &frmLogin::btnExit_Click);
				 // 
				 // btnLogin
				 // 
				 this->btnLogin->AutoSize = true;
				 this->btnLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
					 static_cast<System::Int32>(static_cast<System::Byte>(138)));
				 this->btnLogin->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->btnLogin->FlatAppearance->BorderSize = 0;
				 this->btnLogin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSeaGreen;
				 this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnLogin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->btnLogin->ForeColor = System::Drawing::Color::White;
				 this->btnLogin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLogin.Image")));
				 this->btnLogin->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 this->btnLogin->Location = System::Drawing::Point(45, 360);
				 this->btnLogin->Name = L"btnLogin";
				 this->btnLogin->Size = System::Drawing::Size(153, 42);
				 this->btnLogin->TabIndex = 3;
				 this->btnLogin->Text = L"Đăng nhập";
				 this->btnLogin->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
				 this->btnLogin->UseVisualStyleBackColor = false;
				 this->btnLogin->Click += gcnew System::EventHandler(this, &frmLogin::btnLogin_Click);
				 // 
				 // frmLogin
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
					 static_cast<System::Int32>(static_cast<System::Byte>(56)));
				 this->ClientSize = System::Drawing::Size(360, 480);
				 this->Controls->Add(this->btnExit);
				 this->Controls->Add(this->btnLogin);
				 this->Controls->Add(this->txtPassword);
				 this->Controls->Add(this->lbPassword);
				 this->Controls->Add(this->txtUsername);
				 this->Controls->Add(this->lbUsername);
				 this->Controls->Add(this->lbTitle);
				 this->Controls->Add(this->pnTitle);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				 this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
				 this->Name = L"frmLogin";
				 this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
				 this->Text = L"Đăng nhập hệ thống";
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }
#pragma endregion
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
	private: System::Void btnLogin_Click(System::Object^  sender, System::EventArgs^  e) {

		String ^user, ^pass;
		user = txtUsername->Text;
		pass = txtPassword->Text;

		if (user->Length == 0)
		{
			if (pass->Length == 0)
			{
				MessageBox::Show(this, L"Bạn chưa nhập tên đăng nhập và mật khẩu", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Error);
				txtUsername->Focus();
				txtUsername->SelectAll();
			}
			else
			{
				MessageBox::Show(this, L"Bạn chưa nhập tên đăng nhập", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Error);
				txtUsername->Focus();
				txtUsername->SelectAll();
			}
		}
		else if (pass->Length == 0)
		{
			MessageBox::Show(this, L"Bạn chưa nhập mật khẩu", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Error);
			txtPassword->Focus();
		}
		else
		{
			String ^sql = "select USERNAME,PASSWORD,CHUCVU from taikhoan where USERNAME='" + txtUsername->Text + "'and PASSWORD='" + txtPassword->Text + "'";
			MySqlDataReader ^dr = nullptr;
			try
			{
				dr = DBUtils::getDataReader(sql);
				if (dr != nullptr)
				{
					if (dr->Read())
					{
						String ^username, ^password;
						int type;
						username = (String^)dr["USERNAME"];
						password = (String^)dr["PASSWORD"];
						type = (int)dr["CHUCVU"];
						if (user->Equals(username) && pass->Equals(password))
						{
							Hide();
							frmMain^ main = gcnew frmMain();
							main->Show();
							this->txtPassword->Clear();
							switch (type)
							{
							case 1:
								main->get_btnHeThong()->Enabled = true;
								main->get_btnHeThong()->Visible = true;
								break;
							case 0:
								main->get_btnHeThong()->Enabled = false;
								main->get_btnHeThong()->Visible = false;
								break;
							default:
								break;
							}
						}
					}
					else
					{
						MessageBox::Show(this, L"Tên đăng nhập hoặc mật khẩu không đúng", L"Thông báo", MessageBoxButtons::OK, MessageBoxIcon::Error);
						txtUsername->Focus();
						txtUsername->SelectAll();
					}
				}
			}
			finally
			{
				if (dr != nullptr)
					dr->Close();
				DBUtils::disConnect();
			}
		}
	}
	private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
		Environment::Exit(0);
	}
	};
}
