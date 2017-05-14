#pragma once
#include "DBUtils.h"
#include "BUS_VeThang.h"
#include "Convert_Hethong.h"
namespace SmartParkingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;

	/// <summary>
	/// Summary for frmVeThang
	/// </summary>
	public ref class frmVeThang : public System::Windows::Forms::Form
	{
	public:
		frmVeThang(void)
		{
			InitializeComponent();
			b = gcnew BUS_VeThang();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmVeThang()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  pnTitle;
	private: System::Windows::Forms::Label^  lbTitle;
	private: System::Windows::Forms::TableLayoutPanel^  tbContainer;
	private: System::Windows::Forms::Panel^  pnTicketInfo;
	private: System::Windows::Forms::DataGridView^  dgvTicket;
	private: System::Windows::Forms::Label^  lbSum;
	private: System::Windows::Forms::Button^  btnTrolai;
	private: System::Windows::Forms::TextBox^  txtSearch;
	private: System::Windows::Forms::Button^  btnTimkiem;
	private: System::Windows::Forms::Label^  lbCar;
	private: System::Windows::Forms::Panel^  pnTicket;
	private: System::Windows::Forms::Button^  btnHuy;
	private: System::Windows::Forms::Button^  btnSua;
	private: System::Windows::Forms::TextBox^  txtGiaVe;

	private: System::Windows::Forms::TextBox^  txtBienXe;

	private: System::Windows::Forms::ComboBox^  cbLoaixe;
	private: System::Windows::Forms::Label^  lbGiaVe;
	private: System::Windows::Forms::Label^  lbBienXe;
	private: System::Windows::Forms::Label^  lbLoaixe;
	private: System::Windows::Forms::Label^  lbMaThe;
	private: System::Windows::Forms::Label^  lbTicket;
	private: System::Windows::Forms::TextBox^  txtMaThe;
	private: System::Windows::Forms::Label^  lbNgayHetHan;
	private: System::Windows::Forms::Label^  lbNgayBatDau;
	private: System::Windows::Forms::DateTimePicker^  txtNgayHetHan;
	private: System::Windows::Forms::DateTimePicker^  txtNgayBatDau;
	private: System::Windows::Forms::Button^  btnXoa;
	private: System::Windows::Forms::Button^  btnThem;
	private: System::Windows::Forms::TextBox^  txtTrangThai;
	private: System::Windows::Forms::Label^  lbTrangThai;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clMaThe;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clBienSo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clLoaiXe;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clNgayBatDau;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clNgayKetThuc;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  clTien;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		BUS_VeThang ^b;
		int id, gia_ve;
		String ^loai_xe, ^bien_xe, ^date_start, ^date_end; 

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->pnTitle = (gcnew System::Windows::Forms::Panel());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->tbContainer = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pnTicket = (gcnew System::Windows::Forms::Panel());
			this->txtTrangThai = (gcnew System::Windows::Forms::TextBox());
			this->lbTrangThai = (gcnew System::Windows::Forms::Label());
			this->btnXoa = (gcnew System::Windows::Forms::Button());
			this->btnThem = (gcnew System::Windows::Forms::Button());
			this->txtNgayHetHan = (gcnew System::Windows::Forms::DateTimePicker());
			this->txtNgayBatDau = (gcnew System::Windows::Forms::DateTimePicker());
			this->lbNgayHetHan = (gcnew System::Windows::Forms::Label());
			this->lbNgayBatDau = (gcnew System::Windows::Forms::Label());
			this->txtMaThe = (gcnew System::Windows::Forms::TextBox());
			this->btnHuy = (gcnew System::Windows::Forms::Button());
			this->btnSua = (gcnew System::Windows::Forms::Button());
			this->txtGiaVe = (gcnew System::Windows::Forms::TextBox());
			this->txtBienXe = (gcnew System::Windows::Forms::TextBox());
			this->cbLoaixe = (gcnew System::Windows::Forms::ComboBox());
			this->lbGiaVe = (gcnew System::Windows::Forms::Label());
			this->lbBienXe = (gcnew System::Windows::Forms::Label());
			this->lbLoaixe = (gcnew System::Windows::Forms::Label());
			this->lbMaThe = (gcnew System::Windows::Forms::Label());
			this->lbTicket = (gcnew System::Windows::Forms::Label());
			this->pnTicketInfo = (gcnew System::Windows::Forms::Panel());
			this->dgvTicket = (gcnew System::Windows::Forms::DataGridView());
			this->clMaThe = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clBienSo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clLoaiXe = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clNgayBatDau = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clNgayKetThuc = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->clTien = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lbSum = (gcnew System::Windows::Forms::Label());
			this->btnTrolai = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnTimkiem = (gcnew System::Windows::Forms::Button());
			this->lbCar = (gcnew System::Windows::Forms::Label());
			this->pnTitle->SuspendLayout();
			this->tbContainer->SuspendLayout();
			this->pnTicket->SuspendLayout();
			this->pnTicketInfo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvTicket))->BeginInit();
			this->SuspendLayout();
			// 
			// pnTitle
			// 
			this->pnTitle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(50)), 
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->pnTitle->Controls->Add(this->lbTitle);
			this->pnTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnTitle->Location = System::Drawing::Point(0, 0);
			this->pnTitle->Margin = System::Windows::Forms::Padding(0);
			this->pnTitle->Name = L"pnTitle";
			this->pnTitle->Size = System::Drawing::Size(1083, 50);
			this->pnTitle->TabIndex = 0;
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbTitle->ForeColor = System::Drawing::Color::White;
			this->lbTitle->Location = System::Drawing::Point(12, 9);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(214, 31);
			this->lbTitle->TabIndex = 0;
			this->lbTitle->Text = L"Quản lý Vé Tháng";
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
			this->tbContainer->Controls->Add(this->pnTicket, 0, 0);
			this->tbContainer->Controls->Add(this->pnTicketInfo, 0, 0);
			this->tbContainer->Location = System::Drawing::Point(0, 50);
			this->tbContainer->Margin = System::Windows::Forms::Padding(0);
			this->tbContainer->Name = L"tbContainer";
			this->tbContainer->RowCount = 1;
			this->tbContainer->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tbContainer->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tbContainer->Size = System::Drawing::Size(1083, 632);
			this->tbContainer->TabIndex = 1;
			// 
			// pnTicket
			// 
			this->pnTicket->BackColor = System::Drawing::Color::White;
			this->pnTicket->Controls->Add(this->txtTrangThai);
			this->pnTicket->Controls->Add(this->lbTrangThai);
			this->pnTicket->Controls->Add(this->btnXoa);
			this->pnTicket->Controls->Add(this->btnThem);
			this->pnTicket->Controls->Add(this->txtNgayHetHan);
			this->pnTicket->Controls->Add(this->txtNgayBatDau);
			this->pnTicket->Controls->Add(this->lbNgayHetHan);
			this->pnTicket->Controls->Add(this->lbNgayBatDau);
			this->pnTicket->Controls->Add(this->txtMaThe);
			this->pnTicket->Controls->Add(this->btnHuy);
			this->pnTicket->Controls->Add(this->btnSua);
			this->pnTicket->Controls->Add(this->txtGiaVe);
			this->pnTicket->Controls->Add(this->txtBienXe);
			this->pnTicket->Controls->Add(this->cbLoaixe);
			this->pnTicket->Controls->Add(this->lbGiaVe);
			this->pnTicket->Controls->Add(this->lbBienXe);
			this->pnTicket->Controls->Add(this->lbLoaixe);
			this->pnTicket->Controls->Add(this->lbMaThe);
			this->pnTicket->Controls->Add(this->lbTicket);
			this->pnTicket->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnTicket->Location = System::Drawing::Point(760, 10);
			this->pnTicket->Margin = System::Windows::Forms::Padding(2, 10, 10, 10);
			this->pnTicket->Name = L"pnTicket";
			this->pnTicket->Size = System::Drawing::Size(313, 612);
			this->pnTicket->TabIndex = 2;
			// 
			// txtTrangThai
			// 
			this->txtTrangThai->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtTrangThai->Enabled = false;
			this->txtTrangThai->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtTrangThai->ForeColor = System::Drawing::Color::Red;
			this->txtTrangThai->Location = System::Drawing::Point(133, 464);
			this->txtTrangThai->Name = L"txtTrangThai";
			this->txtTrangThai->Size = System::Drawing::Size(156, 26);
			this->txtTrangThai->TabIndex = 15;
			this->txtTrangThai->Text = L"Hết hạn";
			// 
			// lbTrangThai
			// 
			this->lbTrangThai->AutoSize = true;
			this->lbTrangThai->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbTrangThai->ForeColor = System::Drawing::Color::Red;
			this->lbTrangThai->Location = System::Drawing::Point(26, 467);
			this->lbTrangThai->Name = L"lbTrangThai";
			this->lbTrangThai->Size = System::Drawing::Size(68, 19);
			this->lbTrangThai->TabIndex = 14;
			this->lbTrangThai->Text = L"Trạng thái";
			// 
			// btnXoa
			// 
			this->btnXoa->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnXoa->AutoSize = true;
			this->btnXoa->BackColor = System::Drawing::Color::Tomato;
			this->btnXoa->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnXoa->FlatAppearance->BorderSize = 0;
			this->btnXoa->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnXoa->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnXoa->ForeColor = System::Drawing::Color::White;
			this->btnXoa->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnXoa->Location = System::Drawing::Point(26, 565);
			this->btnXoa->Name = L"btnXoa";
			this->btnXoa->Size = System::Drawing::Size(95, 33);
			this->btnXoa->TabIndex = 13;
			this->btnXoa->Text = L"Xóa";
			this->btnXoa->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnXoa->UseVisualStyleBackColor = false;
			this->btnXoa->Click += gcnew System::EventHandler(this, &frmVeThang::btnXoa_Click);
			// 
			// btnThem
			// 
			this->btnThem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnThem->AutoSize = true;
			this->btnThem->BackColor = System::Drawing::Color::DodgerBlue;
			this->btnThem->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnThem->FlatAppearance->BorderSize = 0;
			this->btnThem->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnThem->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnThem->ForeColor = System::Drawing::Color::White;
			this->btnThem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnThem->Location = System::Drawing::Point(26, 510);
			this->btnThem->Name = L"btnThem";
			this->btnThem->Size = System::Drawing::Size(95, 33);
			this->btnThem->TabIndex = 12;
			this->btnThem->Text = L"Thêm";
			this->btnThem->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnThem->UseVisualStyleBackColor = false;
			this->btnThem->Click += gcnew System::EventHandler(this, &frmVeThang::btnThem_Click);
			// 
			// txtNgayHetHan
			// 
			this->txtNgayHetHan->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtNgayHetHan->CustomFormat = L"yyyy-MM-dd";
			this->txtNgayHetHan->Enabled = false;
			this->txtNgayHetHan->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNgayHetHan->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->txtNgayHetHan->Location = System::Drawing::Point(133, 345);
			this->txtNgayHetHan->Name = L"txtNgayHetHan";
			this->txtNgayHetHan->Size = System::Drawing::Size(156, 26);
			this->txtNgayHetHan->TabIndex = 11;
			// 
			// txtNgayBatDau
			// 
			this->txtNgayBatDau->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtNgayBatDau->CustomFormat = L"yyyy-MM-dd";
			this->txtNgayBatDau->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtNgayBatDau->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->txtNgayBatDau->Location = System::Drawing::Point(133, 282);
			this->txtNgayBatDau->Name = L"txtNgayBatDau";
			this->txtNgayBatDau->Size = System::Drawing::Size(156, 26);
			this->txtNgayBatDau->TabIndex = 10;
			this->txtNgayBatDau->ValueChanged += gcnew System::EventHandler(this, &frmVeThang::txtNgayBatDau_ValueChanged);
			// 
			// lbNgayHetHan
			// 
			this->lbNgayHetHan->AutoSize = true;
			this->lbNgayHetHan->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbNgayHetHan->Location = System::Drawing::Point(26, 343);
			this->lbNgayHetHan->Name = L"lbNgayHetHan";
			this->lbNgayHetHan->Size = System::Drawing::Size(89, 19);
			this->lbNgayHetHan->TabIndex = 9;
			this->lbNgayHetHan->Text = L"Ngày hết hạn";
			// 
			// lbNgayBatDau
			// 
			this->lbNgayBatDau->AutoSize = true;
			this->lbNgayBatDau->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbNgayBatDau->Location = System::Drawing::Point(26, 281);
			this->lbNgayBatDau->Name = L"lbNgayBatDau";
			this->lbNgayBatDau->Size = System::Drawing::Size(91, 19);
			this->lbNgayBatDau->TabIndex = 8;
			this->lbNgayBatDau->Text = L"Ngày bắt đầu";
			// 
			// txtMaThe
			// 
			this->txtMaThe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtMaThe->Enabled = false;
			this->txtMaThe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtMaThe->Location = System::Drawing::Point(133, 92);
			this->txtMaThe->Name = L"txtMaThe";
			this->txtMaThe->Size = System::Drawing::Size(156, 26);
			this->txtMaThe->TabIndex = 7;
			// 
			// btnHuy
			// 
			this->btnHuy->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnHuy->AutoSize = true;
			this->btnHuy->BackColor = System::Drawing::Color::Gold;
			this->btnHuy->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnHuy->FlatAppearance->BorderSize = 0;
			this->btnHuy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnHuy->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnHuy->ForeColor = System::Drawing::Color::White;
			this->btnHuy->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnHuy->Location = System::Drawing::Point(184, 565);
			this->btnHuy->Name = L"btnHuy";
			this->btnHuy->Size = System::Drawing::Size(95, 33);
			this->btnHuy->TabIndex = 6;
			this->btnHuy->Text = L"Hủy";
			this->btnHuy->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnHuy->UseVisualStyleBackColor = false;
			this->btnHuy->Click += gcnew System::EventHandler(this, &frmVeThang::btnHuy_Click);
			// 
			// btnSua
			// 
			this->btnSua->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnSua->AutoSize = true;
			this->btnSua->BackColor = System::Drawing::Color::SeaGreen;
			this->btnSua->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSua->FlatAppearance->BorderSize = 0;
			this->btnSua->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSua->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSua->ForeColor = System::Drawing::Color::White;
			this->btnSua->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSua->Location = System::Drawing::Point(184, 510);
			this->btnSua->Name = L"btnSua";
			this->btnSua->Size = System::Drawing::Size(95, 33);
			this->btnSua->TabIndex = 5;
			this->btnSua->Text = L"Sửa";
			this->btnSua->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnSua->UseVisualStyleBackColor = false;
			this->btnSua->Click += gcnew System::EventHandler(this, &frmVeThang::btnSua_Click);
			// 
			// txtGiaVe
			// 
			this->txtGiaVe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtGiaVe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtGiaVe->Location = System::Drawing::Point(133, 408);
			this->txtGiaVe->Name = L"txtGiaVe";
			this->txtGiaVe->Size = System::Drawing::Size(156, 26);
			this->txtGiaVe->TabIndex = 4;
			// 
			// txtBienXe
			// 
			this->txtBienXe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtBienXe->BackColor = System::Drawing::Color::White;
			this->txtBienXe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtBienXe->Location = System::Drawing::Point(133, 219);
			this->txtBienXe->Name = L"txtBienXe";
			this->txtBienXe->Size = System::Drawing::Size(156, 26);
			this->txtBienXe->TabIndex = 3;
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
			this->cbLoaixe->Location = System::Drawing::Point(133, 155);
			this->cbLoaixe->Name = L"cbLoaixe";
			this->cbLoaixe->Size = System::Drawing::Size(156, 27);
			this->cbLoaixe->TabIndex = 2;
			// 
			// lbGiaVe
			// 
			this->lbGiaVe->AutoSize = true;
			this->lbGiaVe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbGiaVe->Location = System::Drawing::Point(26, 405);
			this->lbGiaVe->Name = L"lbGiaVe";
			this->lbGiaVe->Size = System::Drawing::Size(48, 19);
			this->lbGiaVe->TabIndex = 0;
			this->lbGiaVe->Text = L"Giá vé";
			// 
			// lbBienXe
			// 
			this->lbBienXe->AutoSize = true;
			this->lbBienXe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbBienXe->Location = System::Drawing::Point(26, 219);
			this->lbBienXe->Name = L"lbBienXe";
			this->lbBienXe->Size = System::Drawing::Size(54, 19);
			this->lbBienXe->TabIndex = 0;
			this->lbBienXe->Text = L"Biển xe";
			// 
			// lbLoaixe
			// 
			this->lbLoaixe->AutoSize = true;
			this->lbLoaixe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbLoaixe->Location = System::Drawing::Point(26, 157);
			this->lbLoaixe->Name = L"lbLoaixe";
			this->lbLoaixe->Size = System::Drawing::Size(54, 19);
			this->lbLoaixe->TabIndex = 0;
			this->lbLoaixe->Text = L"Loại xe";
			// 
			// lbMaThe
			// 
			this->lbMaThe->AutoSize = true;
			this->lbMaThe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbMaThe->Location = System::Drawing::Point(26, 95);
			this->lbMaThe->Name = L"lbMaThe";
			this->lbMaThe->Size = System::Drawing::Size(52, 19);
			this->lbMaThe->TabIndex = 0;
			this->lbMaThe->Text = L"Mã thẻ";
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
			this->lbTicket->Text = L"Thông tin thẻ";
			this->lbTicket->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pnTicketInfo
			// 
			this->pnTicketInfo->BackColor = System::Drawing::Color::White;
			this->pnTicketInfo->Controls->Add(this->dgvTicket);
			this->pnTicketInfo->Controls->Add(this->lbSum);
			this->pnTicketInfo->Controls->Add(this->btnTrolai);
			this->pnTicketInfo->Controls->Add(this->txtSearch);
			this->pnTicketInfo->Controls->Add(this->btnTimkiem);
			this->pnTicketInfo->Controls->Add(this->lbCar);
			this->pnTicketInfo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnTicketInfo->Location = System::Drawing::Point(10, 10);
			this->pnTicketInfo->Margin = System::Windows::Forms::Padding(10, 10, 5, 10);
			this->pnTicketInfo->Name = L"pnTicketInfo";
			this->pnTicketInfo->Size = System::Drawing::Size(743, 612);
			this->pnTicketInfo->TabIndex = 1;
			// 
			// dgvTicket
			// 
			this->dgvTicket->AllowUserToAddRows = false;
			this->dgvTicket->AllowUserToDeleteRows = false;
			this->dgvTicket->AllowUserToResizeColumns = false;
			this->dgvTicket->AllowUserToResizeRows = false;
			this->dgvTicket->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvTicket->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvTicket->BackgroundColor = System::Drawing::Color::White;
			this->dgvTicket->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvTicket->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->dgvTicket->ColumnHeadersHeight = 28;
			this->dgvTicket->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dgvTicket->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->clMaThe, this->clBienSo, 
				this->clLoaiXe, this->clNgayBatDau, this->clNgayKetThuc, this->clTien});
			this->dgvTicket->Location = System::Drawing::Point(0, 118);
			this->dgvTicket->Margin = System::Windows::Forms::Padding(0);
			this->dgvTicket->Name = L"dgvTicket";
			this->dgvTicket->ReadOnly = true;
			this->dgvTicket->RowHeadersVisible = false;
			this->dgvTicket->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dgvTicket->RowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dgvTicket->Size = System::Drawing::Size(743, 467);
			this->dgvTicket->TabIndex = 4;
			this->dgvTicket->TabStop = false;
			this->dgvTicket->RowEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmVeThang::dgvTicket_RowEnter);
			// 
			// clMaThe
			// 
			this->clMaThe->DataPropertyName = L"Mathe";
			this->clMaThe->HeaderText = L"Mã thẻ";
			this->clMaThe->Name = L"clMaThe";
			this->clMaThe->ReadOnly = true;
			this->clMaThe->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// clBienSo
			// 
			this->clBienSo->DataPropertyName = L"BKS";
			this->clBienSo->HeaderText = L"Biển số";
			this->clBienSo->Name = L"clBienSo";
			this->clBienSo->ReadOnly = true;
			this->clBienSo->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// clLoaiXe
			// 
			this->clLoaiXe->DataPropertyName = L"Loaixe";
			this->clLoaiXe->HeaderText = L"Loại xe";
			this->clLoaiXe->Name = L"clLoaiXe";
			this->clLoaiXe->ReadOnly = true;
			this->clLoaiXe->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// clNgayBatDau
			// 
			this->clNgayBatDau->DataPropertyName = L"Ngaybatdau";
			this->clNgayBatDau->HeaderText = L"Ngày bắt đầu";
			this->clNgayBatDau->Name = L"clNgayBatDau";
			this->clNgayBatDau->ReadOnly = true;
			this->clNgayBatDau->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// clNgayKetThuc
			// 
			this->clNgayKetThuc->DataPropertyName = L"Ngayketthuc";
			this->clNgayKetThuc->HeaderText = L"Ngày hết hạn";
			this->clNgayKetThuc->Name = L"clNgayKetThuc";
			this->clNgayKetThuc->ReadOnly = true;
			this->clNgayKetThuc->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// clTien
			// 
			this->clTien->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->clTien->DataPropertyName = L"Tien";
			this->clTien->HeaderText = L"Tiền";
			this->clTien->Name = L"clTien";
			this->clTien->ReadOnly = true;
			this->clTien->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// lbSum
			// 
			this->lbSum->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->lbSum->AutoSize = true;
			this->lbSum->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbSum->Location = System::Drawing::Point(0, 589);
			this->lbSum->Margin = System::Windows::Forms::Padding(0);
			this->lbSum->Name = L"lbSum";
			this->lbSum->Size = System::Drawing::Size(104, 21);
			this->lbSum->TabIndex = 0;
			this->lbSum->Text = L"Tổng số thẻ:";
			// 
			// btnTrolai
			// 
			this->btnTrolai->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnTrolai->AutoSize = true;
			this->btnTrolai->BackColor = System::Drawing::Color::Gold;
			this->btnTrolai->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnTrolai->FlatAppearance->BorderSize = 0;
			this->btnTrolai->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnTrolai->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnTrolai->ForeColor = System::Drawing::Color::White;
			this->btnTrolai->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnTrolai->Location = System::Drawing::Point(636, 60);
			this->btnTrolai->Name = L"btnTrolai";
			this->btnTrolai->Size = System::Drawing::Size(95, 33);
			this->btnTrolai->TabIndex = 3;
			this->btnTrolai->Text = L"Trở lại";
			this->btnTrolai->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnTrolai->UseVisualStyleBackColor = false;
			this->btnTrolai->Click += gcnew System::EventHandler(this, &frmVeThang::btnTrolai_Click);
			// 
			// txtSearch
			// 
			this->txtSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtSearch->Location = System::Drawing::Point(179, 65);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(320, 26);
			this->txtSearch->TabIndex = 1;
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
			this->btnTimkiem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnTimkiem->Location = System::Drawing::Point(505, 60);
			this->btnTimkiem->Name = L"btnTimkiem";
			this->btnTimkiem->Size = System::Drawing::Size(125, 33);
			this->btnTimkiem->TabIndex = 2;
			this->btnTimkiem->Text = L"Tìm kiếm";
			this->btnTimkiem->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnTimkiem->UseVisualStyleBackColor = false;
			this->btnTimkiem->Click += gcnew System::EventHandler(this, &frmVeThang::btnTimkiem_Click);
			// 
			// lbCar
			// 
			this->lbCar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)), 
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->lbCar->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbCar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbCar->Location = System::Drawing::Point(0, 0);
			this->lbCar->Margin = System::Windows::Forms::Padding(0);
			this->lbCar->Name = L"lbCar";
			this->lbCar->Size = System::Drawing::Size(743, 36);
			this->lbCar->TabIndex = 1;
			this->lbCar->Text = L"Danh mục thẻ";
			this->lbCar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// frmVeThang
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1083, 680);
			this->Controls->Add(this->tbContainer);
			this->Controls->Add(this->pnTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmVeThang";
			this->Text = L"frmVeThang";
			this->Load += gcnew System::EventHandler(this, &frmVeThang::frmVeThang_Load);
			this->pnTitle->ResumeLayout(false);
			this->pnTitle->PerformLayout();
			this->tbContainer->ResumeLayout(false);
			this->pnTicket->ResumeLayout(false);
			this->pnTicket->PerformLayout();
			this->pnTicketInfo->ResumeLayout(false);
			this->pnTicketInfo->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvTicket))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void frmVeThang_Load(System::Object^  sender, System::EventArgs^  e) {
				 loadData();
			 }
	private: System::Void btnThem_Click(System::Object^  sender, System::EventArgs^  e) {

				 loai_xe = Convert_Hethong::GUI_To_DB(txtBienXe->Text);
				 bien_xe = txtBienXe->Text;
				 date_start = txtNgayBatDau->Value.ToString("yyyy-MM-dd");
				 date_end = txtNgayHetHan->Value.ToString("yyyy-MM-dd");
				 gia_ve = Int32::Parse(txtGiaVe->Text);
				 VeThang ^ticket = gcnew VeThang(0, loai_xe, bien_xe, date_start, date_end, gia_ve);
				 b->Add(ticket);


			 }
	private: System::Void btnSua_Click(System::Object^  sender, System::EventArgs^  e) {
				 try {
					 loai_xe = cbLoaixe->SelectedItem->ToString();
					 bien_xe = txtBienXe->Text;
					 date_start = txtNgayBatDau->Value.ToString("yyyy-MM-dd");
					 date_end = txtNgayHetHan->Value.ToString("yyyy-MM-dd");
					 gia_ve = Int32::Parse(txtGiaVe->Text);


					 VeThang ^ticket = gcnew VeThang(0, loai_xe, bien_xe, date_start, date_end, gia_ve);
					 b->Update(ticket);
				 }
				 catch (Exception^ e) {
					 MessageBox::Show(e->Message);
				 }
			 }
	private: System::Void btnXoa_Click(System::Object^  sender, System::EventArgs^  e) {
				 int id, row;
				 row = dgvTicket->CurrentCell->RowIndex;
				 id = Int32::Parse(dgvTicket[0, row]->Value->ToString());

				 b->Delete(id);
			 }
	private: System::Void btnHuy_Click(System::Object^  sender, System::EventArgs^  e) {
				 setNull();
			 }
	private: System::Void btnTimkiem_Click(System::Object^  sender, System::EventArgs^  e) {
				 String ^search = txtSearch->Text;
				 b->Search(search, dgvTicket);
				 txtSearch->Clear();
			 }
	private: System::Void btnTrolai_Click(System::Object^  sender, System::EventArgs^  e) {
				 loadData();
			 }
	private: System::Void dgvTicket_RowEnter(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
				 int row;
				 String^ partten = "yyyy-MM-dd";

				 row = e->RowIndex;
				 try {
					 txtMaThe->Text = dgvTicket[0, row]->Value->ToString();
					 txtBienXe->Text = dgvTicket[1, row]->Value->ToString();
					 cbLoaixe->Text = Convert_Hethong::DB_To_GUI(dgvTicket[2, row]->Value->ToString());

					 date_start = dgvTicket[3, row]->Value->ToString();
					 date_end = dgvTicket[4, row]->Value->ToString();

					 DateTime dt_s = DateTime::Parse(date_start);
					 DateTime dt_e = DateTime::Parse(date_end);

					 txtNgayBatDau->Value = dt_s;
					 txtNgayHetHan->Value = dt_e;
				 }
				 catch (Exception^ e) {
					 MessageBox::Show(e->Message);
				 }
				 txtGiaVe->Text = dgvTicket[5, row]->Value->ToString();
			 }
	private: void loadData() {
				 String ^sql = L"select Mathe, BKS, Loaixe, Ngaybatdau, Ngayketthuc, Tien from quanlyvethang;";
				 DBUtils::loadData(dgvTicket, sql);
			 }
	private: void setNull() {
			 }
	private: System::Void txtNgayBatDau_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
				 txtNgayHetHan->Value = txtNgayBatDau->Value.AddDays(30);
			 }
	};
}
