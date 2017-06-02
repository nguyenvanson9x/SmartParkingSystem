#pragma once
#include "frmConfigDatabase.h"
#include "DBUtils.h"
#include "BUS_HeThong.h"
#include "Convert_Hethong.h"
namespace SmartParkingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmHeThong
	/// </summary>
	public ref class frmHeThong : public System::Windows::Forms::Form
	{
	public:
		frmHeThong(void)
		{
			InitializeComponent();
			b = gcnew BUS_HeThong();
			//Enable_Button(true, false);
			dgvAccount->ClearSelection();
			show_pass = 0;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmHeThong()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Panel^  pnTitle;
		System::Windows::Forms::Label^  lbTitle;
		System::Windows::Forms::TableLayoutPanel^  tbContainer;
		System::Windows::Forms::Panel^  pnCar;
		System::Windows::Forms::Panel^  pnTicket;
		System::Windows::Forms::Label^  lbAccount;
		System::Windows::Forms::Label^  lbTicket;
		System::Windows::Forms::Label^  lbChucvu;
		System::Windows::Forms::Label^  lbFullName;
		System::Windows::Forms::Label^  lbMatkhau;
		System::Windows::Forms::Label^  lbTaikhoan;
		System::Windows::Forms::Label^  lbID;
		System::Windows::Forms::Button^  btnHuy;
		System::Windows::Forms::Button^  btnXoa;
		System::Windows::Forms::Button^  btnCapnhat;
		System::Windows::Forms::Button^  btnThem;
		System::Windows::Forms::TextBox^  txtSearch;
		System::Windows::Forms::Button^  btnTimkiem;
		System::Windows::Forms::DataGridView^  dgvAccount;
		System::Windows::Forms::ComboBox^  cbChucvu;
		System::Windows::Forms::TextBox^  txtHoten;
		System::Windows::Forms::TextBox^  txtMatkhau;
		System::Windows::Forms::TextBox^  txtTaikhoan;
		System::Windows::Forms::TextBox^  txtID;
		System::Windows::Forms::Label^  lbSer;
		System::Windows::Forms::Label^  lbGiadieuchinh;
		System::Windows::Forms::Label^  lbGiahientai;
		System::Windows::Forms::Label^  lbLoaixe;
		System::Windows::Forms::Label^  lbLoaive;
		System::Windows::Forms::TextBox^  txtGiadieuchinh;
		System::Windows::Forms::TextBox^  txtGiahientai;
		System::Windows::Forms::ComboBox^  cbLoaixe;
		System::Windows::Forms::ComboBox^  cbLoaive;
		System::Windows::Forms::Button^  btnHoantac;
		System::Windows::Forms::Button^  btnThaydoi;
		System::Windows::Forms::Button^  btn_config_db;
		System::Windows::Forms::ToolTip^  toolTip;
		System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		BUS_HeThong ^b;
		String ^id, ^username, ^password, ^fullname, ^type;
		int show_pass;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clUSERNAME;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clPASSWORD;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clTEN;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clCHUCVU;
	private: System::Windows::Forms::Button^  btnShowPassWord;






#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->components = (gcnew System::ComponentModel::Container());
				 System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmHeThong::typeid));
				 System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				 System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				 System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				 this->pnTitle = (gcnew System::Windows::Forms::Panel());
				 this->btn_config_db = (gcnew System::Windows::Forms::Button());
				 this->lbTitle = (gcnew System::Windows::Forms::Label());
				 this->tbContainer = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->pnCar = (gcnew System::Windows::Forms::Panel());
				 this->btnShowPassWord = (gcnew System::Windows::Forms::Button());
				 this->lbSer = (gcnew System::Windows::Forms::Label());
				 this->cbChucvu = (gcnew System::Windows::Forms::ComboBox());
				 this->txtHoten = (gcnew System::Windows::Forms::TextBox());
				 this->txtMatkhau = (gcnew System::Windows::Forms::TextBox());
				 this->txtTaikhoan = (gcnew System::Windows::Forms::TextBox());
				 this->txtID = (gcnew System::Windows::Forms::TextBox());
				 this->dgvAccount = (gcnew System::Windows::Forms::DataGridView());
				 this->clID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->clUSERNAME = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->clPASSWORD = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->clTEN = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->clCHUCVU = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->txtSearch = (gcnew System::Windows::Forms::TextBox());
				 this->btnTimkiem = (gcnew System::Windows::Forms::Button());
				 this->btnHuy = (gcnew System::Windows::Forms::Button());
				 this->btnXoa = (gcnew System::Windows::Forms::Button());
				 this->btnCapnhat = (gcnew System::Windows::Forms::Button());
				 this->btnThem = (gcnew System::Windows::Forms::Button());
				 this->lbChucvu = (gcnew System::Windows::Forms::Label());
				 this->lbFullName = (gcnew System::Windows::Forms::Label());
				 this->lbMatkhau = (gcnew System::Windows::Forms::Label());
				 this->lbTaikhoan = (gcnew System::Windows::Forms::Label());
				 this->lbID = (gcnew System::Windows::Forms::Label());
				 this->lbAccount = (gcnew System::Windows::Forms::Label());
				 this->pnTicket = (gcnew System::Windows::Forms::Panel());
				 this->btnHoantac = (gcnew System::Windows::Forms::Button());
				 this->btnThaydoi = (gcnew System::Windows::Forms::Button());
				 this->txtGiadieuchinh = (gcnew System::Windows::Forms::TextBox());
				 this->txtGiahientai = (gcnew System::Windows::Forms::TextBox());
				 this->cbLoaixe = (gcnew System::Windows::Forms::ComboBox());
				 this->cbLoaive = (gcnew System::Windows::Forms::ComboBox());
				 this->lbGiadieuchinh = (gcnew System::Windows::Forms::Label());
				 this->lbGiahientai = (gcnew System::Windows::Forms::Label());
				 this->lbLoaixe = (gcnew System::Windows::Forms::Label());
				 this->lbLoaive = (gcnew System::Windows::Forms::Label());
				 this->lbTicket = (gcnew System::Windows::Forms::Label());
				 this->toolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
				 this->pnTitle->SuspendLayout();
				 this->tbContainer->SuspendLayout();
				 this->pnCar->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvAccount))->BeginInit();
				 this->pnTicket->SuspendLayout();
				 this->SuspendLayout();
				 // 
				 // pnTitle
				 // 
				 this->pnTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
					 static_cast<System::Int32>(static_cast<System::Byte>(56)));
				 this->pnTitle->Controls->Add(this->btn_config_db);
				 this->pnTitle->Controls->Add(this->lbTitle);
				 this->pnTitle->Dock = System::Windows::Forms::DockStyle::Top;
				 this->pnTitle->Location = System::Drawing::Point(0, 0);
				 this->pnTitle->Margin = System::Windows::Forms::Padding(0);
				 this->pnTitle->Name = L"pnTitle";
				 this->pnTitle->Size = System::Drawing::Size(1083, 50);
				 this->pnTitle->TabIndex = 0;
				 // 
				 // btn_config_db
				 // 
				 this->btn_config_db->Anchor = System::Windows::Forms::AnchorStyles::Right;
				 this->btn_config_db->AutoSize = true;
				 this->btn_config_db->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
					 static_cast<System::Int32>(static_cast<System::Byte>(56)));
				 this->btn_config_db->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->btn_config_db->FlatAppearance->BorderSize = 0;
				 this->btn_config_db->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btn_config_db->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->btn_config_db->ForeColor = System::Drawing::Color::White;
				 this->btn_config_db->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btn_config_db.Image")));
				 this->btn_config_db->Location = System::Drawing::Point(1033, 7);
				 this->btn_config_db->Name = L"btn_config_db";
				 this->btn_config_db->Size = System::Drawing::Size(38, 38);
				 this->btn_config_db->TabIndex = 0;
				 this->btn_config_db->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
				 this->toolTip->SetToolTip(this->btn_config_db, L"Cấu hình Cơ sở Dữ liệu");
				 this->btn_config_db->UseVisualStyleBackColor = false;
				 this->btn_config_db->Click += gcnew System::EventHandler(this, &frmHeThong::btn_config_db_Click);
				 // 
				 // lbTitle
				 // 
				 this->lbTitle->AutoSize = true;
				 this->lbTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbTitle->ForeColor = System::Drawing::Color::White;
				 this->lbTitle->Location = System::Drawing::Point(12, 9);
				 this->lbTitle->Name = L"lbTitle";
				 this->lbTitle->Size = System::Drawing::Size(216, 31);
				 this->lbTitle->TabIndex = 0;
				 this->lbTitle->Text = L"Quản lý Hệ Thống";
				 // 
				 // tbContainer
				 // 
				 this->tbContainer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
					 | System::Windows::Forms::AnchorStyles::Left) 
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->tbContainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)), 
					 static_cast<System::Int32>(static_cast<System::Byte>(230)));
				 this->tbContainer->ColumnCount = 2;
				 this->tbContainer->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 70)));
				 this->tbContainer->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 30)));
				 this->tbContainer->Controls->Add(this->pnCar, 0, 0);
				 this->tbContainer->Controls->Add(this->pnTicket, 1, 0);
				 this->tbContainer->Location = System::Drawing::Point(0, 50);
				 this->tbContainer->Margin = System::Windows::Forms::Padding(0);
				 this->tbContainer->Name = L"tbContainer";
				 this->tbContainer->RowCount = 1;
				 this->tbContainer->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
				 this->tbContainer->Size = System::Drawing::Size(1083, 631);
				 this->tbContainer->TabIndex = 1;
				 // 
				 // pnCar
				 // 
				 this->pnCar->BackColor = System::Drawing::Color::White;
				 this->pnCar->Controls->Add(this->btnShowPassWord);
				 this->pnCar->Controls->Add(this->lbSer);
				 this->pnCar->Controls->Add(this->cbChucvu);
				 this->pnCar->Controls->Add(this->txtHoten);
				 this->pnCar->Controls->Add(this->txtMatkhau);
				 this->pnCar->Controls->Add(this->txtTaikhoan);
				 this->pnCar->Controls->Add(this->txtID);
				 this->pnCar->Controls->Add(this->dgvAccount);
				 this->pnCar->Controls->Add(this->txtSearch);
				 this->pnCar->Controls->Add(this->btnTimkiem);
				 this->pnCar->Controls->Add(this->btnHuy);
				 this->pnCar->Controls->Add(this->btnXoa);
				 this->pnCar->Controls->Add(this->btnCapnhat);
				 this->pnCar->Controls->Add(this->btnThem);
				 this->pnCar->Controls->Add(this->lbChucvu);
				 this->pnCar->Controls->Add(this->lbFullName);
				 this->pnCar->Controls->Add(this->lbMatkhau);
				 this->pnCar->Controls->Add(this->lbTaikhoan);
				 this->pnCar->Controls->Add(this->lbID);
				 this->pnCar->Controls->Add(this->lbAccount);
				 this->pnCar->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->pnCar->Location = System::Drawing::Point(10, 10);
				 this->pnCar->Margin = System::Windows::Forms::Padding(10, 10, 5, 10);
				 this->pnCar->Name = L"pnCar";
				 this->pnCar->Size = System::Drawing::Size(743, 611);
				 this->pnCar->TabIndex = 0;
				 // 
				 // btnShowPassWord
				 // 
				 this->btnShowPassWord->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				 this->btnShowPassWord->BackColor = System::Drawing::Color::Transparent;
				 this->btnShowPassWord->FlatAppearance->BorderSize = 0;
				 this->btnShowPassWord->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnShowPassWord->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnShowPassWord.Image")));
				 this->btnShowPassWord->Location = System::Drawing::Point(552, 140);
				 this->btnShowPassWord->Name = L"btnShowPassWord";
				 this->btnShowPassWord->Size = System::Drawing::Size(26, 26);
				 this->btnShowPassWord->TabIndex = 14;
				 this->toolTip->SetToolTip(this->btnShowPassWord, L"Hiện mật khẩu");
				 this->btnShowPassWord->UseVisualStyleBackColor = false;
				 this->btnShowPassWord->Click += gcnew System::EventHandler(this, &frmHeThong::btnShowPassWord_Click);
				 // 
				 // lbSer
				 // 
				 this->lbSer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->lbSer->BackColor = System::Drawing::Color::Black;
				 this->lbSer->Location = System::Drawing::Point(0, 310);
				 this->lbSer->Name = L"lbSer";
				 this->lbSer->Size = System::Drawing::Size(743, 1);
				 this->lbSer->TabIndex = 13;
				 this->lbSer->Text = L"label1";
				 // 
				 // cbChucvu
				 // 
				 this->cbChucvu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->cbChucvu->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				 this->cbChucvu->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->cbChucvu->FormattingEnabled = true;
				 this->cbChucvu->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Nhân Viên", L"Quản Lý"});
				 this->cbChucvu->Location = System::Drawing::Point(285, 220);
				 this->cbChucvu->Name = L"cbChucvu";
				 this->cbChucvu->Size = System::Drawing::Size(261, 27);
				 this->cbChucvu->TabIndex = 5;
				 // 
				 // txtHoten
				 // 
				 this->txtHoten->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->txtHoten->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->txtHoten->Location = System::Drawing::Point(285, 180);
				 this->txtHoten->Name = L"txtHoten";
				 this->txtHoten->Size = System::Drawing::Size(261, 26);
				 this->txtHoten->TabIndex = 4;
				 // 
				 // txtMatkhau
				 // 
				 this->txtMatkhau->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->txtMatkhau->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->txtMatkhau->Location = System::Drawing::Point(285, 140);
				 this->txtMatkhau->Name = L"txtMatkhau";
				 this->txtMatkhau->Size = System::Drawing::Size(261, 26);
				 this->txtMatkhau->TabIndex = 3;
				 this->txtMatkhau->UseSystemPasswordChar = true;
				 // 
				 // txtTaikhoan
				 // 
				 this->txtTaikhoan->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->txtTaikhoan->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->txtTaikhoan->Location = System::Drawing::Point(285, 100);
				 this->txtTaikhoan->Name = L"txtTaikhoan";
				 this->txtTaikhoan->Size = System::Drawing::Size(261, 26);
				 this->txtTaikhoan->TabIndex = 2;
				 // 
				 // txtID
				 // 
				 this->txtID->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->txtID->Enabled = false;
				 this->txtID->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->txtID->Location = System::Drawing::Point(285, 60);
				 this->txtID->Name = L"txtID";
				 this->txtID->Size = System::Drawing::Size(261, 26);
				 this->txtID->TabIndex = 1;
				 // 
				 // dgvAccount
				 // 
				 this->dgvAccount->AllowUserToAddRows = false;
				 this->dgvAccount->AllowUserToDeleteRows = false;
				 this->dgvAccount->AllowUserToResizeColumns = false;
				 this->dgvAccount->AllowUserToResizeRows = false;
				 this->dgvAccount->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
					 | System::Windows::Forms::AnchorStyles::Left) 
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->dgvAccount->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
				 this->dgvAccount->BackgroundColor = System::Drawing::Color::White;
				 this->dgvAccount->BorderStyle = System::Windows::Forms::BorderStyle::None;
				 dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
				 dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
				 dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
				 dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
				 dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
				 dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
				 this->dgvAccount->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
				 this->dgvAccount->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				 this->dgvAccount->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->clID, this->clUSERNAME, 
					 this->clPASSWORD, this->clTEN, this->clCHUCVU});
				 this->dgvAccount->Location = System::Drawing::Point(0, 380);
				 this->dgvAccount->Margin = System::Windows::Forms::Padding(0);
				 this->dgvAccount->Name = L"dgvAccount";
				 this->dgvAccount->ReadOnly = true;
				 dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
				 dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Control;
				 dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
				 dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
				 dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
				 dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
				 this->dgvAccount->RowHeadersDefaultCellStyle = dataGridViewCellStyle5;
				 this->dgvAccount->RowHeadersVisible = false;
				 this->dgvAccount->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
				 dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				 this->dgvAccount->RowsDefaultCellStyle = dataGridViewCellStyle6;
				 this->dgvAccount->RowTemplate->Height = 30;
				 this->dgvAccount->Size = System::Drawing::Size(743, 231);
				 this->dgvAccount->TabIndex = 12;
				 this->dgvAccount->TabStop = false;
				 this->dgvAccount->DataBindingComplete += gcnew System::Windows::Forms::DataGridViewBindingCompleteEventHandler(this, &frmHeThong::dgvAccount_DataBindingComplete);
				 this->dgvAccount->RowEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmHeThong::dgvAccount_RowEnter);
				 // 
				 // clID
				 // 
				 this->clID->DataPropertyName = L"ID";
				 this->clID->HeaderText = L"Mã tài khoản";
				 this->clID->Name = L"clID";
				 this->clID->ReadOnly = true;
				 this->clID->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				 // 
				 // clUSERNAME
				 // 
				 this->clUSERNAME->DataPropertyName = L"USERNAME";
				 this->clUSERNAME->HeaderText = L"Tài khoản";
				 this->clUSERNAME->Name = L"clUSERNAME";
				 this->clUSERNAME->ReadOnly = true;
				 this->clUSERNAME->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				 // 
				 // clPASSWORD
				 // 
				 this->clPASSWORD->DataPropertyName = L"PASSWORD";
				 this->clPASSWORD->HeaderText = L"Mật khẩu";
				 this->clPASSWORD->Name = L"clPASSWORD";
				 this->clPASSWORD->ReadOnly = true;
				 this->clPASSWORD->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				 this->clPASSWORD->Visible = false;
				 // 
				 // clTEN
				 // 
				 this->clTEN->DataPropertyName = L"TEN";
				 this->clTEN->HeaderText = L"Họ và tên";
				 this->clTEN->Name = L"clTEN";
				 this->clTEN->ReadOnly = true;
				 this->clTEN->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				 // 
				 // clCHUCVU
				 // 
				 this->clCHUCVU->DataPropertyName = L"CHUCVU";
				 this->clCHUCVU->HeaderText = L"Chức vụ";
				 this->clCHUCVU->Name = L"clCHUCVU";
				 this->clCHUCVU->ReadOnly = true;
				 this->clCHUCVU->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				 this->clCHUCVU->Visible = false;
				 // 
				 // txtSearch
				 // 
				 this->txtSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
					 | System::Windows::Forms::AnchorStyles::Left) 
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->txtSearch->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->txtSearch->Location = System::Drawing::Point(297, 325);
				 this->txtSearch->Name = L"txtSearch";
				 this->txtSearch->Size = System::Drawing::Size(306, 26);
				 this->txtSearch->TabIndex = 10;
				 // 
				 // btnTimkiem
				 // 
				 this->btnTimkiem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
				 this->btnTimkiem->AutoSize = true;
				 this->btnTimkiem->BackColor = System::Drawing::Color::DodgerBlue;
				 this->btnTimkiem->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->btnTimkiem->FlatAppearance->BorderSize = 0;
				 this->btnTimkiem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnTimkiem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->btnTimkiem->ForeColor = System::Drawing::Color::White;
				 this->btnTimkiem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnTimkiem.Image")));
				 this->btnTimkiem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 this->btnTimkiem->Location = System::Drawing::Point(609, 320);
				 this->btnTimkiem->Name = L"btnTimkiem";
				 this->btnTimkiem->Size = System::Drawing::Size(125, 33);
				 this->btnTimkiem->TabIndex = 11;
				 this->btnTimkiem->Text = L"Tìm kiếm";
				 this->btnTimkiem->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
				 this->btnTimkiem->UseVisualStyleBackColor = false;
				 this->btnTimkiem->Click += gcnew System::EventHandler(this, &frmHeThong::btnTimkiem_Click);
				 // 
				 // btnHuy
				 // 
				 this->btnHuy->AutoSize = true;
				 this->btnHuy->BackColor = System::Drawing::Color::Gold;
				 this->btnHuy->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->btnHuy->FlatAppearance->BorderSize = 0;
				 this->btnHuy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnHuy->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->btnHuy->ForeColor = System::Drawing::Color::White;
				 this->btnHuy->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnHuy.Image")));
				 this->btnHuy->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 this->btnHuy->Location = System::Drawing::Point(543, 268);
				 this->btnHuy->Name = L"btnHuy";
				 this->btnHuy->Size = System::Drawing::Size(115, 33);
				 this->btnHuy->TabIndex = 9;
				 this->btnHuy->Text = L"Hủy";
				 this->btnHuy->UseVisualStyleBackColor = false;
				 this->btnHuy->Click += gcnew System::EventHandler(this, &frmHeThong::btnHuy_Click);
				 // 
				 // btnXoa
				 // 
				 this->btnXoa->AutoSize = true;
				 this->btnXoa->BackColor = System::Drawing::Color::Tomato;
				 this->btnXoa->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->btnXoa->FlatAppearance->BorderSize = 0;
				 this->btnXoa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnXoa->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->btnXoa->ForeColor = System::Drawing::Color::White;
				 this->btnXoa->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnXoa.Image")));
				 this->btnXoa->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 this->btnXoa->Location = System::Drawing::Point(390, 268);
				 this->btnXoa->Name = L"btnXoa";
				 this->btnXoa->Size = System::Drawing::Size(115, 33);
				 this->btnXoa->TabIndex = 8;
				 this->btnXoa->Text = L"Xóa";
				 this->btnXoa->UseVisualStyleBackColor = false;
				 this->btnXoa->Click += gcnew System::EventHandler(this, &frmHeThong::btnXoa_Click);
				 // 
				 // btnCapnhat
				 // 
				 this->btnCapnhat->AutoSize = true;
				 this->btnCapnhat->BackColor = System::Drawing::Color::SeaGreen;
				 this->btnCapnhat->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->btnCapnhat->FlatAppearance->BorderSize = 0;
				 this->btnCapnhat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnCapnhat->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->btnCapnhat->ForeColor = System::Drawing::Color::White;
				 this->btnCapnhat->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnCapnhat.Image")));
				 this->btnCapnhat->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 this->btnCapnhat->Location = System::Drawing::Point(237, 268);
				 this->btnCapnhat->Name = L"btnCapnhat";
				 this->btnCapnhat->Size = System::Drawing::Size(115, 33);
				 this->btnCapnhat->TabIndex = 7;
				 this->btnCapnhat->Text = L"Cập nhật";
				 this->btnCapnhat->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
				 this->btnCapnhat->UseVisualStyleBackColor = false;
				 this->btnCapnhat->Click += gcnew System::EventHandler(this, &frmHeThong::btnCapnhat_Click);
				 // 
				 // btnThem
				 // 
				 this->btnThem->AutoSize = true;
				 this->btnThem->BackColor = System::Drawing::Color::DodgerBlue;
				 this->btnThem->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->btnThem->FlatAppearance->BorderSize = 0;
				 this->btnThem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnThem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->btnThem->ForeColor = System::Drawing::Color::White;
				 this->btnThem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnThem.Image")));
				 this->btnThem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 this->btnThem->Location = System::Drawing::Point(84, 268);
				 this->btnThem->Name = L"btnThem";
				 this->btnThem->Size = System::Drawing::Size(115, 33);
				 this->btnThem->TabIndex = 6;
				 this->btnThem->Text = L"Thêm";
				 this->btnThem->UseVisualStyleBackColor = false;
				 this->btnThem->Click += gcnew System::EventHandler(this, &frmHeThong::btnThem_Click);
				 // 
				 // lbChucvu
				 // 
				 this->lbChucvu->AutoSize = true;
				 this->lbChucvu->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbChucvu->Location = System::Drawing::Point(164, 220);
				 this->lbChucvu->Name = L"lbChucvu";
				 this->lbChucvu->Size = System::Drawing::Size(61, 19);
				 this->lbChucvu->TabIndex = 0;
				 this->lbChucvu->Text = L"Chức vụ";
				 this->lbChucvu->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 // 
				 // lbFullName
				 // 
				 this->lbFullName->AutoSize = true;
				 this->lbFullName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbFullName->Location = System::Drawing::Point(164, 180);
				 this->lbFullName->Name = L"lbFullName";
				 this->lbFullName->Size = System::Drawing::Size(50, 19);
				 this->lbFullName->TabIndex = 0;
				 this->lbFullName->Text = L"Họ tên";
				 this->lbFullName->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 // 
				 // lbMatkhau
				 // 
				 this->lbMatkhau->AutoSize = true;
				 this->lbMatkhau->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbMatkhau->Location = System::Drawing::Point(164, 140);
				 this->lbMatkhau->Name = L"lbMatkhau";
				 this->lbMatkhau->Size = System::Drawing::Size(67, 19);
				 this->lbMatkhau->TabIndex = 0;
				 this->lbMatkhau->Text = L"Mật khẩu";
				 this->lbMatkhau->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 // 
				 // lbTaikhoan
				 // 
				 this->lbTaikhoan->AutoSize = true;
				 this->lbTaikhoan->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbTaikhoan->Location = System::Drawing::Point(164, 100);
				 this->lbTaikhoan->Name = L"lbTaikhoan";
				 this->lbTaikhoan->Size = System::Drawing::Size(69, 19);
				 this->lbTaikhoan->TabIndex = 0;
				 this->lbTaikhoan->Text = L"Tài khoản";
				 this->lbTaikhoan->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 // 
				 // lbID
				 // 
				 this->lbID->AutoSize = true;
				 this->lbID->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbID->Location = System::Drawing::Point(164, 60);
				 this->lbID->Name = L"lbID";
				 this->lbID->Size = System::Drawing::Size(25, 19);
				 this->lbID->TabIndex = 0;
				 this->lbID->Text = L"ID";
				 this->lbID->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 // 
				 // lbAccount
				 // 
				 this->lbAccount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)), 
					 static_cast<System::Int32>(static_cast<System::Byte>(248)));
				 this->lbAccount->Dock = System::Windows::Forms::DockStyle::Top;
				 this->lbAccount->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbAccount->Location = System::Drawing::Point(0, 0);
				 this->lbAccount->Margin = System::Windows::Forms::Padding(0);
				 this->lbAccount->Name = L"lbAccount";
				 this->lbAccount->Size = System::Drawing::Size(743, 36);
				 this->lbAccount->TabIndex = 0;
				 this->lbAccount->Text = L"Thông tin tài khoản";
				 this->lbAccount->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 // 
				 // pnTicket
				 // 
				 this->pnTicket->BackColor = System::Drawing::Color::White;
				 this->pnTicket->Controls->Add(this->btnHoantac);
				 this->pnTicket->Controls->Add(this->btnThaydoi);
				 this->pnTicket->Controls->Add(this->txtGiadieuchinh);
				 this->pnTicket->Controls->Add(this->txtGiahientai);
				 this->pnTicket->Controls->Add(this->cbLoaixe);
				 this->pnTicket->Controls->Add(this->cbLoaive);
				 this->pnTicket->Controls->Add(this->lbGiadieuchinh);
				 this->pnTicket->Controls->Add(this->lbGiahientai);
				 this->pnTicket->Controls->Add(this->lbLoaixe);
				 this->pnTicket->Controls->Add(this->lbLoaive);
				 this->pnTicket->Controls->Add(this->lbTicket);
				 this->pnTicket->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->pnTicket->Location = System::Drawing::Point(760, 10);
				 this->pnTicket->Margin = System::Windows::Forms::Padding(2, 10, 10, 10);
				 this->pnTicket->Name = L"pnTicket";
				 this->pnTicket->Size = System::Drawing::Size(313, 611);
				 this->pnTicket->TabIndex = 1;
				 // 
				 // btnHoantac
				 // 
				 this->btnHoantac->AutoSize = true;
				 this->btnHoantac->BackColor = System::Drawing::Color::Gold;
				 this->btnHoantac->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->btnHoantac->FlatAppearance->BorderSize = 0;
				 this->btnHoantac->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnHoantac->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->btnHoantac->ForeColor = System::Drawing::Color::White;
				 this->btnHoantac->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnHoantac.Image")));
				 this->btnHoantac->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 this->btnHoantac->Location = System::Drawing::Point(168, 440);
				 this->btnHoantac->Name = L"btnHoantac";
				 this->btnHoantac->Size = System::Drawing::Size(115, 33);
				 this->btnHoantac->TabIndex = 6;
				 this->btnHoantac->Text = L"Hoàn tác";
				 this->btnHoantac->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
				 this->btnHoantac->UseVisualStyleBackColor = false;
				 this->btnHoantac->Click += gcnew System::EventHandler(this, &frmHeThong::btnHoantac_Click);
				 // 
				 // btnThaydoi
				 // 
				 this->btnThaydoi->AutoSize = true;
				 this->btnThaydoi->BackColor = System::Drawing::Color::SeaGreen;
				 this->btnThaydoi->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->btnThaydoi->FlatAppearance->BorderSize = 0;
				 this->btnThaydoi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnThaydoi->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->btnThaydoi->ForeColor = System::Drawing::Color::White;
				 this->btnThaydoi->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnThaydoi.Image")));
				 this->btnThaydoi->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 this->btnThaydoi->Location = System::Drawing::Point(30, 440);
				 this->btnThaydoi->Name = L"btnThaydoi";
				 this->btnThaydoi->Size = System::Drawing::Size(115, 33);
				 this->btnThaydoi->TabIndex = 5;
				 this->btnThaydoi->Text = L"Thay đổi";
				 this->btnThaydoi->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
				 this->btnThaydoi->UseVisualStyleBackColor = false;
				 this->btnThaydoi->Click += gcnew System::EventHandler(this, &frmHeThong::btnThaydoi_Click);
				 // 
				 // txtGiadieuchinh
				 // 
				 this->txtGiadieuchinh->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->txtGiadieuchinh->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->txtGiadieuchinh->Location = System::Drawing::Point(30, 372);
				 this->txtGiadieuchinh->Name = L"txtGiadieuchinh";
				 this->txtGiadieuchinh->Size = System::Drawing::Size(253, 26);
				 this->txtGiadieuchinh->TabIndex = 4;
				 // 
				 // txtGiahientai
				 // 
				 this->txtGiahientai->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->txtGiahientai->Enabled = false;
				 this->txtGiahientai->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->txtGiahientai->Location = System::Drawing::Point(30, 292);
				 this->txtGiahientai->Name = L"txtGiahientai";
				 this->txtGiahientai->ReadOnly = true;
				 this->txtGiahientai->Size = System::Drawing::Size(253, 26);
				 this->txtGiahientai->TabIndex = 3;
				 // 
				 // cbLoaixe
				 // 
				 this->cbLoaixe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->cbLoaixe->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				 this->cbLoaixe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->cbLoaixe->FormattingEnabled = true;
				 this->cbLoaixe->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Xe đạp", L"Xe máy", L"Xe ô tô"});
				 this->cbLoaixe->Location = System::Drawing::Point(30, 212);
				 this->cbLoaixe->Name = L"cbLoaixe";
				 this->cbLoaixe->Size = System::Drawing::Size(253, 27);
				 this->cbLoaixe->TabIndex = 2;
				 this->cbLoaixe->SelectedIndexChanged += gcnew System::EventHandler(this, &frmHeThong::cbLoaixe_SelectedIndexChanged);
				 // 
				 // cbLoaive
				 // 
				 this->cbLoaive->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->cbLoaive->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				 this->cbLoaive->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->cbLoaive->FormattingEnabled = true;
				 this->cbLoaive->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Vé ngày", L"Vé tháng"});
				 this->cbLoaive->Location = System::Drawing::Point(30, 132);
				 this->cbLoaive->Name = L"cbLoaive";
				 this->cbLoaive->Size = System::Drawing::Size(253, 27);
				 this->cbLoaive->TabIndex = 1;
				 this->cbLoaive->SelectedIndexChanged += gcnew System::EventHandler(this, &frmHeThong::cbLoaive_SelectedIndexChanged);
				 // 
				 // lbGiadieuchinh
				 // 
				 this->lbGiadieuchinh->AutoSize = true;
				 this->lbGiadieuchinh->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbGiadieuchinh->Location = System::Drawing::Point(30, 342);
				 this->lbGiadieuchinh->Name = L"lbGiadieuchinh";
				 this->lbGiadieuchinh->Size = System::Drawing::Size(94, 19);
				 this->lbGiadieuchinh->TabIndex = 0;
				 this->lbGiadieuchinh->Text = L"Giá điều chỉnh";
				 // 
				 // lbGiahientai
				 // 
				 this->lbGiahientai->AutoSize = true;
				 this->lbGiahientai->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbGiahientai->Location = System::Drawing::Point(30, 262);
				 this->lbGiahientai->Name = L"lbGiahientai";
				 this->lbGiahientai->Size = System::Drawing::Size(76, 19);
				 this->lbGiahientai->TabIndex = 0;
				 this->lbGiahientai->Text = L"Giá hiện tại";
				 // 
				 // lbLoaixe
				 // 
				 this->lbLoaixe->AutoSize = true;
				 this->lbLoaixe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbLoaixe->Location = System::Drawing::Point(30, 182);
				 this->lbLoaixe->Name = L"lbLoaixe";
				 this->lbLoaixe->Size = System::Drawing::Size(54, 19);
				 this->lbLoaixe->TabIndex = 0;
				 this->lbLoaixe->Text = L"Loại xe";
				 // 
				 // lbLoaive
				 // 
				 this->lbLoaive->AutoSize = true;
				 this->lbLoaive->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbLoaive->Location = System::Drawing::Point(30, 102);
				 this->lbLoaive->Name = L"lbLoaive";
				 this->lbLoaive->Size = System::Drawing::Size(54, 19);
				 this->lbLoaive->TabIndex = 0;
				 this->lbLoaive->Text = L"Loại vé";
				 // 
				 // lbTicket
				 // 
				 this->lbTicket->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)), 
					 static_cast<System::Int32>(static_cast<System::Byte>(248)));
				 this->lbTicket->Dock = System::Windows::Forms::DockStyle::Top;
				 this->lbTicket->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbTicket->Location = System::Drawing::Point(0, 0);
				 this->lbTicket->Margin = System::Windows::Forms::Padding(0);
				 this->lbTicket->Name = L"lbTicket";
				 this->lbTicket->Size = System::Drawing::Size(313, 36);
				 this->lbTicket->TabIndex = 1;
				 this->lbTicket->Text = L"Điều chỉnh giá vé";
				 this->lbTicket->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 // 
				 // frmHeThong
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::White;
				 this->ClientSize = System::Drawing::Size(1083, 680);
				 this->Controls->Add(this->tbContainer);
				 this->Controls->Add(this->pnTitle);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				 this->Name = L"frmHeThong";
				 this->Text = L"frmHeThong";
				 this->Load += gcnew System::EventHandler(this, &frmHeThong::frmHeThong_Load);
				 this->pnTitle->ResumeLayout(false);
				 this->pnTitle->PerformLayout();
				 this->tbContainer->ResumeLayout(false);
				 this->pnCar->ResumeLayout(false);
				 this->pnCar->PerformLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvAccount))->EndInit();
				 this->pnTicket->ResumeLayout(false);
				 this->pnTicket->PerformLayout();
				 this->ResumeLayout(false);

			 }
#pragma endregion
	private: System::Void btnThem_Click(System::Object^  sender, System::EventArgs^  e) {
				 username = txtTaikhoan->Text;
				 password = txtMatkhau->Text;
				 fullname = txtHoten->Text;
				 type = cbChucvu->SelectedIndex + "";

				 HeThong ^ht = gcnew HeThong(0, username, password, fullname, type);
				 b->Them(ht);
				 loadData();
				 //Enable_Button(true, false);
			 }
	private: System::Void btnCapnhat_Click(System::Object^  sender, System::EventArgs^  e) {
				 int id, row;
				 row = dgvAccount->CurrentCell->RowIndex;

				 id = Int32::Parse(dgvAccount[0, row]->Value->ToString());
				 username = txtTaikhoan->Text;
				 password = txtMatkhau->Text;
				 fullname = txtHoten->Text;
				 type = cbChucvu->SelectedIndex + "";

				 HeThong ^ht = gcnew HeThong(id, username, password, fullname, type);
				 b->CapNhat(ht);
				 loadData();
				 setNull();
				 //Enable_Button(true, false);
			 }
	private: System::Void btnXoa_Click(System::Object^  sender, System::EventArgs^  e) {
				 int id, row;
				 row = dgvAccount->CurrentCell->RowIndex;

				 id = Int32::Parse(dgvAccount[0, row]->Value->ToString());
				 b->Xoa(id);
				 loadData();
				 setNull();
				 //Enable_Button(true, false);
			 }
	private: System::Void btnHuy_Click(System::Object^  sender, System::EventArgs^  e) {
				 setNull();
				 //Enable_Button(true, false);
			 }
	private: System::Void btnTimkiem_Click(System::Object^  sender, System::EventArgs^  e) {
				 String ^search = txtSearch->Text;
				 b->Search(search, dgvAccount);
				 txtSearch->Clear();
			 }
	private: System::Void btnThaydoi_Click(System::Object^  sender, System::EventArgs^  e) {
				 b->Thaydoi(cbLoaixe, cbLoaive, txtGiahientai, txtGiadieuchinh);
			 }
	private: System::Void btnHoantac_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void dgvAccount_RowEnter(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 int row;
				 row = e->RowIndex;

				 txtID->Text = dgvAccount[0, row]->Value->ToString();
				 username = dgvAccount[1, row]->Value->ToString();
				 txtTaikhoan->Text = username;

				 password = dgvAccount[2, row]->Value->ToString();
				 txtMatkhau->Text = password;

				 fullname = dgvAccount[3, row]->Value->ToString();
				 txtHoten->Text = fullname;

				 type = dgvAccount[4, row]->Value->ToString();
				 if (type->CompareTo("0") == 0)
					 cbChucvu->Text = L"Nhân viên";
				 else
					 cbChucvu->Text = L"Quản lý";
				 txtMatkhau->UseSystemPasswordChar = true;
				 show_pass = 0;
				 //Enable_Button(false, true);
			 }
	private: System::Void frmHeThong_Load(System::Object^  sender, System::EventArgs^  e) {

				 loadData();
				 String^ sql = "select TEN from taikhoan";
				 DBUtils::loadData_To_Collection(txtSearch, sql, "TEN");
			 }
	private: System::Void btn_config_db_Click(System::Object^  sender, System::EventArgs^  e) {
				 frmConfigDatabase ^frmConfig = gcnew frmConfigDatabase();
				 frmConfig->ShowDialog();
			 }
	private: void loadData() {
				 String ^sql = L"select * from taikhoan";
				 DBUtils::loadData(dgvAccount, sql);
			 }
	private: void setNull() {
				 txtID->Clear();
				 txtHoten->Clear();
				 txtTaikhoan->Clear();
				 txtMatkhau->Clear();
				 cbChucvu->Text = "";
				 show_pass = 0;
			 }
	private: System::Void dgvAccount_DataBindingComplete(System::Object^  sender, System::Windows::Forms::DataGridViewBindingCompleteEventArgs^  e) {
				 dgvAccount->ClearSelection();
				 dgvAccount->CurrentRow->Selected = false;
				 setNull();
			 }
	private: void Enable_Button(bool add, bool other) {
				 btnThem->Enabled = add;
				 btnCapnhat->Enabled = other;
				 btnXoa->Enabled = other;
				 btnHuy->Enabled = other;
			 }
	private: System::Void cbLoaive_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 showTicket();
			 }
	private: System::Void cbLoaixe_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
				 showTicket();
			 }
	private: void showTicket() {
				 try {
					 String^ Loaixe_GUI = cbLoaixe->SelectedItem->ToString();
					 String^ Loaixe = Convert_Hethong::GUI_To_DB(Loaixe_GUI);
					 String^ Loaive = cbLoaive->SelectedItem->ToString();
					 b->showTicket(Loaixe, Loaive, txtGiahientai);
				 }
				 catch (Exception^) {

				 }

			 }
	private: System::Void btnShowPassWord_Click(System::Object^  sender, System::EventArgs^  e) {

				 if (show_pass == 0) {
					 show_pass = 1;
					 txtMatkhau->UseSystemPasswordChar = false;
					 return;
				 }
				 if (show_pass == 1) {
					 show_pass = 0;
					 txtMatkhau->UseSystemPasswordChar = true;
				 }

			 }
	};


}
