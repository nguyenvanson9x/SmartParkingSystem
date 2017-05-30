#pragma once
#include "frmHeThong.h"
#include "frmNhanXe.h"
#include "frmTraXe.h"
#include "frmSoDo.h"
#include "frmThongKe.h"
#include "frmVeThang.h"

namespace SmartParkingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for frmMain
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
		{
			InitializeComponent();
			maxAble = false;
			Time->Start();
		}
		Button^ get_btnHeThong() {
			return this->btnHeThong;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^  tbContainer;
	private: System::Windows::Forms::TableLayoutPanel^  tbLeft;
	private: System::Windows::Forms::Panel^  pnSubSystem;
	private: System::Windows::Forms::Button^  btnNhanXe;
	private: System::Windows::Forms::Button^  btnTraXe;
	private: System::Windows::Forms::Button^  btnVeThang;


	private: System::Windows::Forms::Button^  btnGioiThieu;
	private: System::Windows::Forms::Button^  btnLogout;

	private: System::Windows::Forms::Button^  btnHeThong;
	private: System::Windows::Forms::Panel^  pnTitle;
	private: System::Windows::Forms::Button^  btnMax;
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Button^  btnMin;
	private: System::Windows::Forms::Label^  lbTitle;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Label^  lb_Time;
	private: System::Windows::Forms::Timer^  Time;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		bool maxAble;
		bool mouseDown;
	private: System::Windows::Forms::Button^  btnThongKe;
			 Point lastLocation;
		void keep_form(String^);
		void add_form_to_panel(Form ^f);

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmMain::typeid));
			this->tbContainer = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tbLeft = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnNhanXe = (gcnew System::Windows::Forms::Button());
			this->btnTraXe = (gcnew System::Windows::Forms::Button());
			this->btnVeThang = (gcnew System::Windows::Forms::Button());
			this->btnGioiThieu = (gcnew System::Windows::Forms::Button());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->btnHeThong = (gcnew System::Windows::Forms::Button());
			this->pnSubSystem = (gcnew System::Windows::Forms::Panel());
			this->pnTitle = (gcnew System::Windows::Forms::Panel());
			this->lb_Time = (gcnew System::Windows::Forms::Label());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->btnMin = (gcnew System::Windows::Forms::Button());
			this->btnMax = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->Time = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnThongKe = (gcnew System::Windows::Forms::Button());
			this->tbContainer->SuspendLayout();
			this->tbLeft->SuspendLayout();
			this->pnTitle->SuspendLayout();
			this->SuspendLayout();
			// 
			// tbContainer
			// 
			this->tbContainer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbContainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->tbContainer->ColumnCount = 2;
			this->tbContainer->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 15)));
			this->tbContainer->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 85)));
			this->tbContainer->Controls->Add(this->tbLeft, 0, 0);
			this->tbContainer->Controls->Add(this->pnSubSystem, 1, 0);
			this->tbContainer->Location = System::Drawing::Point(0, 35);
			this->tbContainer->Margin = System::Windows::Forms::Padding(0);
			this->tbContainer->Name = L"tbContainer";
			this->tbContainer->RowCount = 1;
			this->tbContainer->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tbContainer->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tbContainer->Size = System::Drawing::Size(1280, 685);
			this->tbContainer->TabIndex = 1;
			// 
			// tbLeft
			// 
			this->tbLeft->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->tbLeft->ColumnCount = 1;
			this->tbLeft->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tbLeft->Controls->Add(this->btnNhanXe, 0, 2);
			this->tbLeft->Controls->Add(this->btnTraXe, 0, 3);
			this->tbLeft->Controls->Add(this->btnVeThang, 0, 4);
			this->tbLeft->Controls->Add(this->btnThongKe, 0, 5);
			this->tbLeft->Controls->Add(this->btnGioiThieu, 0, 6);
			this->tbLeft->Controls->Add(this->btnLogout, 0, 7);
			this->tbLeft->Controls->Add(this->btnHeThong, 0, 1);
			this->tbLeft->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tbLeft->Location = System::Drawing::Point(0, 0);
			this->tbLeft->Margin = System::Windows::Forms::Padding(0);
			this->tbLeft->Name = L"tbLeft";
			this->tbLeft->RowCount = 9;
			this->tbLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tbLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tbLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tbLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tbLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tbLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tbLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tbLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tbLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 11.11111F)));
			this->tbLeft->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tbLeft->Size = System::Drawing::Size(192, 685);
			this->tbLeft->TabIndex = 0;
			// 
			// btnNhanXe
			// 
			this->btnNhanXe->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnNhanXe->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnNhanXe->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnNhanXe->FlatAppearance->BorderSize = 0;
			this->btnNhanXe->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btnNhanXe->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), 
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btnNhanXe->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), 
				static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->btnNhanXe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNhanXe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnNhanXe->ForeColor = System::Drawing::Color::White;
			this->btnNhanXe->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnNhanXe.Image")));
			this->btnNhanXe->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNhanXe->Location = System::Drawing::Point(0, 157);
			this->btnNhanXe->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->btnNhanXe->Name = L"btnNhanXe";
			this->btnNhanXe->Size = System::Drawing::Size(192, 66);
			this->btnNhanXe->TabIndex = 1;
			this->btnNhanXe->Text = L"Nhận Xe  ";
			this->btnNhanXe->UseVisualStyleBackColor = true;
			this->btnNhanXe->Click += gcnew System::EventHandler(this, &frmMain::btnNhanXe_Click);
			// 
			// btnTraXe
			// 
			this->btnTraXe->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTraXe->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnTraXe->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnTraXe->FlatAppearance->BorderSize = 0;
			this->btnTraXe->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btnTraXe->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), 
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btnTraXe->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), 
				static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->btnTraXe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTraXe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnTraXe->ForeColor = System::Drawing::Color::White;
			this->btnTraXe->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnTraXe.Image")));
			this->btnTraXe->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnTraXe->Location = System::Drawing::Point(0, 233);
			this->btnTraXe->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->btnTraXe->Name = L"btnTraXe";
			this->btnTraXe->Size = System::Drawing::Size(192, 66);
			this->btnTraXe->TabIndex = 2;
			this->btnTraXe->Text = L"Trả Xe    ";
			this->btnTraXe->UseVisualStyleBackColor = true;
			this->btnTraXe->Click += gcnew System::EventHandler(this, &frmMain::btnTraXe_Click);
			// 
			// btnVeThang
			// 
			this->btnVeThang->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnVeThang->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnVeThang->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnVeThang->FlatAppearance->BorderSize = 0;
			this->btnVeThang->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btnVeThang->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), 
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btnVeThang->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), 
				static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->btnVeThang->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVeThang->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnVeThang->ForeColor = System::Drawing::Color::White;
			this->btnVeThang->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnVeThang.Image")));
			this->btnVeThang->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnVeThang->Location = System::Drawing::Point(0, 309);
			this->btnVeThang->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->btnVeThang->Name = L"btnVeThang";
			this->btnVeThang->Size = System::Drawing::Size(192, 66);
			this->btnVeThang->TabIndex = 3;
			this->btnVeThang->Text = L"Vé Tháng";
			this->btnVeThang->UseVisualStyleBackColor = true;
			this->btnVeThang->Click += gcnew System::EventHandler(this, &frmMain::btnVeThang_Click);
			// 
			// btnGioiThieu
			// 
			this->btnGioiThieu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnGioiThieu->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnGioiThieu->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnGioiThieu->FlatAppearance->BorderSize = 0;
			this->btnGioiThieu->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btnGioiThieu->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), 
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btnGioiThieu->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), 
				static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->btnGioiThieu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGioiThieu->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnGioiThieu->ForeColor = System::Drawing::Color::White;
			this->btnGioiThieu->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnGioiThieu.Image")));
			this->btnGioiThieu->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnGioiThieu->Location = System::Drawing::Point(0, 461);
			this->btnGioiThieu->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->btnGioiThieu->Name = L"btnGioiThieu";
			this->btnGioiThieu->Size = System::Drawing::Size(192, 66);
			this->btnGioiThieu->TabIndex = 6;
			this->btnGioiThieu->Text = L"Giới Thiệu";
			this->btnGioiThieu->UseVisualStyleBackColor = true;
			this->btnGioiThieu->Click += gcnew System::EventHandler(this, &frmMain::btnGioiThieu_Click);
			// 
			// btnLogout
			// 
			this->btnLogout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLogout->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnLogout->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnLogout->FlatAppearance->BorderSize = 0;
			this->btnLogout->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btnLogout->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), 
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btnLogout->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), 
				static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->btnLogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnLogout->ForeColor = System::Drawing::Color::White;
			this->btnLogout->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnLogout.Image")));
			this->btnLogout->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLogout->Location = System::Drawing::Point(0, 537);
			this->btnLogout->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(192, 66);
			this->btnLogout->TabIndex = 7;
			this->btnLogout->Text = L"Đăng xuất";
			this->btnLogout->UseVisualStyleBackColor = true;
			this->btnLogout->Click += gcnew System::EventHandler(this, &frmMain::btnLogout_Click);
			// 
			// btnHeThong
			// 
			this->btnHeThong->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnHeThong->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnHeThong->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnHeThong->FlatAppearance->BorderSize = 0;
			this->btnHeThong->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btnHeThong->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), 
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btnHeThong->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), 
				static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->btnHeThong->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHeThong->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnHeThong->ForeColor = System::Drawing::Color::White;
			this->btnHeThong->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnHeThong.Image")));
			this->btnHeThong->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnHeThong->Location = System::Drawing::Point(0, 81);
			this->btnHeThong->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->btnHeThong->Name = L"btnHeThong";
			this->btnHeThong->Size = System::Drawing::Size(192, 66);
			this->btnHeThong->TabIndex = 0;
			this->btnHeThong->Text = L"Hệ Thống";
			this->btnHeThong->UseVisualStyleBackColor = true;
			this->btnHeThong->Click += gcnew System::EventHandler(this, &frmMain::btnHeThong_Click);
			// 
			// pnSubSystem
			// 
			this->pnSubSystem->BackColor = System::Drawing::Color::White;
			this->pnSubSystem->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnSubSystem->Location = System::Drawing::Point(192, 0);
			this->pnSubSystem->Margin = System::Windows::Forms::Padding(0, 0, 5, 5);
			this->pnSubSystem->Name = L"pnSubSystem";
			this->pnSubSystem->Size = System::Drawing::Size(1083, 680);
			this->pnSubSystem->TabIndex = 1;
			// 
			// pnTitle
			// 
			this->pnTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->pnTitle->Controls->Add(this->lb_Time);
			this->pnTitle->Controls->Add(this->lbTitle);
			this->pnTitle->Controls->Add(this->btnMin);
			this->pnTitle->Controls->Add(this->btnMax);
			this->pnTitle->Controls->Add(this->btnClose);
			this->pnTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnTitle->Location = System::Drawing::Point(0, 0);
			this->pnTitle->Margin = System::Windows::Forms::Padding(0);
			this->pnTitle->Name = L"pnTitle";
			this->pnTitle->Size = System::Drawing::Size(1280, 35);
			this->pnTitle->TabIndex = 2;
			this->pnTitle->DoubleClick += gcnew System::EventHandler(this, &frmMain::btnMax_Click);
			this->pnTitle->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::pnTitle_MouseDown);
			this->pnTitle->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::pnTitle_MouseMove);
			this->pnTitle->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::pnTitle_MouseUp);
			// 
			// lb_Time
			// 
			this->lb_Time->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lb_Time->AutoSize = true;
			this->lb_Time->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lb_Time->ForeColor = System::Drawing::Color::White;
			this->lb_Time->Location = System::Drawing::Point(640, 9);
			this->lb_Time->Name = L"lb_Time";
			this->lb_Time->Size = System::Drawing::Size(0, 20);
			this->lb_Time->TabIndex = 4;
			// 
			// lbTitle
			// 
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbTitle->ForeColor = System::Drawing::Color::White;
			this->lbTitle->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"lbTitle.Image")));
			this->lbTitle->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lbTitle->Location = System::Drawing::Point(10, 0);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(252, 35);
			this->lbTitle->TabIndex = 3;
			this->lbTitle->Text = L"  Hệ thống quản lý nhà xe";
			this->lbTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbTitle->DoubleClick += gcnew System::EventHandler(this, &frmMain::btnMax_Click);
			this->lbTitle->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::pnTitle_MouseDown);
			this->lbTitle->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::pnTitle_MouseMove);
			this->lbTitle->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &frmMain::pnTitle_MouseUp);
			// 
			// btnMin
			// 
			this->btnMin->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->btnMin->BackColor = System::Drawing::Color::Transparent;
			this->btnMin->FlatAppearance->BorderSize = 0;
			this->btnMin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGreen;
			this->btnMin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Green;
			this->btnMin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMin->ForeColor = System::Drawing::Color::White;
			this->btnMin->Location = System::Drawing::Point(1176, 5);
			this->btnMin->Margin = System::Windows::Forms::Padding(0);
			this->btnMin->Name = L"btnMin";
			this->btnMin->Size = System::Drawing::Size(30, 30);
			this->btnMin->TabIndex = 2;
			this->btnMin->Text = L"_";
			this->btnMin->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnMin->UseVisualStyleBackColor = false;
			this->btnMin->Click += gcnew System::EventHandler(this, &frmMain::btnMin_Click);
			// 
			// btnMax
			// 
			this->btnMax->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->btnMax->BackColor = System::Drawing::Color::Transparent;
			this->btnMax->FlatAppearance->BorderSize = 0;
			this->btnMax->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gold;
			this->btnMax->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Goldenrod;
			this->btnMax->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMax->ForeColor = System::Drawing::Color::White;
			this->btnMax->Location = System::Drawing::Point(1212, 5);
			this->btnMax->Margin = System::Windows::Forms::Padding(0);
			this->btnMax->Name = L"btnMax";
			this->btnMax->Size = System::Drawing::Size(30, 30);
			this->btnMax->TabIndex = 1;
			this->btnMax->Text = L"<>";
			this->btnMax->UseVisualStyleBackColor = false;
			this->btnMax->Click += gcnew System::EventHandler(this, &frmMain::btnMax_Click);
			// 
			// btnClose
			// 
			this->btnClose->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->btnClose->BackColor = System::Drawing::Color::Transparent;
			this->btnClose->FlatAppearance->BorderSize = 0;
			this->btnClose->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkRed;
			this->btnClose->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnClose->ForeColor = System::Drawing::Color::White;
			this->btnClose->Location = System::Drawing::Point(1245, 5);
			this->btnClose->Margin = System::Windows::Forms::Padding(0);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(30, 30);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"X";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &frmMain::btnClose_Click);
			// 
			// Time
			// 
			this->Time->Tick += gcnew System::EventHandler(this, &frmMain::Time_Tick);
			// 
			// btnThongKe
			// 
			this->btnThongKe->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnThongKe->Dock = System::Windows::Forms::DockStyle::Fill;
			this->btnThongKe->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->btnThongKe->FlatAppearance->BorderSize = 0;
			this->btnThongKe->FlatAppearance->CheckedBackColor = System::Drawing::Color::White;
			this->btnThongKe->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(84)), 
				static_cast<System::Int32>(static_cast<System::Byte>(161)), static_cast<System::Int32>(static_cast<System::Byte>(152)));
			this->btnThongKe->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(36)), 
				static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->btnThongKe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnThongKe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnThongKe->ForeColor = System::Drawing::Color::White;
			this->btnThongKe->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnThongKe.Image")));
			this->btnThongKe->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnThongKe->Location = System::Drawing::Point(0, 385);
			this->btnThongKe->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->btnThongKe->Name = L"btnThongKe";
			this->btnThongKe->Size = System::Drawing::Size(192, 66);
			this->btnThongKe->TabIndex = 5;
			this->btnThongKe->Text = L"Thống Kê";
			this->btnThongKe->UseVisualStyleBackColor = true;
			this->btnThongKe->Click += gcnew System::EventHandler(this, &frmMain::btnThongKe_Click);
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->pnTitle);
			this->Controls->Add(this->tbContainer);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"frmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hệ Thống Quản Lý Nhà Xe";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &frmMain::frmMain_Load);
			this->tbContainer->ResumeLayout(false);
			this->tbLeft->ResumeLayout(false);
			this->pnTitle->ResumeLayout(false);
			this->pnTitle->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
	private: System::Void btnHeThong_Click(System::Object^  sender, System::EventArgs^  e) {
		frmHeThong ^hethong = gcnew frmHeThong();
		add_form_to_panel(hethong);
		//keep_form(hethong->Name);

	}

	private: System::Void btnNhanXe_Click(System::Object^  sender, System::EventArgs^  e) {
		frmNhanXe ^nhanxe = gcnew frmNhanXe();
		add_form_to_panel(nhanxe);
		//keep_form(nhanxe->Name);
	}
	private: System::Void btnTraXe_Click(System::Object^  sender, System::EventArgs^  e) {
		frmTraXe ^traxe = gcnew frmTraXe();
		add_form_to_panel(traxe);
		//keep_form(traxe->Name);
	}
	private: System::Void btnVeThang_Click(System::Object^  sender, System::EventArgs^  e) {
		frmVeThang ^vethang = gcnew frmVeThang();
		add_form_to_panel(vethang);
		//keep_form(vethang->Name);
	}
	private: System::Void btnSoDo_Click(System::Object^  sender, System::EventArgs^  e) {
		frmSoDo ^sodo = gcnew frmSoDo();
		add_form_to_panel(sodo);
		//keep_form(sodo->Name);
	}
	private: System::Void btnThongKe_Click(System::Object^  sender, System::EventArgs^  e) {
		frmThongKe ^thongke = gcnew frmThongKe();
		add_form_to_panel(thongke);
		//keep_form(thongke->Name);
	}
	private: System::Void btnLogout_Click(System::Object^  sender, System::EventArgs^  e) {
		Form ^frm;
		for (int i = 0; i < Application::OpenForms->Count; ++i) {
			frm = Application::OpenForms[i];
			if (frm->Name == "frmLogin")
			{
				frm->Show();
				frm->TopMost = true;
			}
			else if (frm->Name == "frmMain") {
				frm->Show();
				frm->Enabled = false;
			}
			else
				frm->Close();
		}

	}
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e) {
		Environment::Exit(0);
	}
	private: System::Void btnMin_Click(System::Object^  sender, System::EventArgs^  e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void btnMax_Click(System::Object^  sender, System::EventArgs^  e) {
		if (maxAble == false) {
			this->WindowState = FormWindowState::Normal;
			maxAble = true;
		}
		else {
			this->WindowState = FormWindowState::Maximized;
			maxAble = false;
		}
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
	private: System::Void frmMain_Load(System::Object^  sender, System::EventArgs^  e) {
		//btnNhanXe_Click(sender, e);
	}
	private: System::Void btnGioiThieu_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Time_Tick(System::Object^  sender, System::EventArgs^  e) {
		DateTime ^dateTime = DateTime::Now;
		this->lb_Time->Text = dateTime->ToString();
	}
	};
}

