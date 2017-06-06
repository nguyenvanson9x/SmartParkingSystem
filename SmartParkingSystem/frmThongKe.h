#pragma once
#include "frmConfigDatabase.h"
#include "DBUtils.h"
#include "BUS_Thongke.h"
#include "Convert_Hethong.h"
namespace SmartParkingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmThongKe
	/// </summary>
	public ref class frmThongKe : public System::Windows::Forms::Form
	{
	public:
		frmThongKe(void)
		{
			InitializeComponent();
			b = gcnew BUS_Thongke();
			dgvThong_ke->ClearSelection();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~frmThongKe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  pnTitle;
	private: System::Windows::Forms::Label^  lbTitle;
	private: System::Windows::Forms::TableLayoutPanel^  tbContainer;
	private: System::Windows::Forms::Panel^  pnThong_Ke;
	private: System::Windows::Forms::ComboBox^  cbTrangThai;
	private: System::Windows::Forms::Label^  lbTrangThai;
	private: System::Windows::Forms::ComboBox^  cbLoaiXe;
	private: System::Windows::Forms::Label^  lbLoaiXe;
	private: System::Windows::Forms::TextBox^  txtSoVe;
	private: System::Windows::Forms::DateTimePicker^  dateTo;
	private: System::Windows::Forms::DateTimePicker^  dateFrom;

	private: System::Windows::Forms::Panel^  pnCenter;
	private: System::Windows::Forms::Label^  lbFrom;
	private: System::Windows::Forms::Label^  lbTo;
	private: System::Windows::Forms::Label^  lbMaVe;
	private: System::Windows::Forms::Button^  btnXuatExcel;
	private: System::Windows::Forms::Button^  btnThongKe;

	private: System::Windows::Forms::Panel^  pnInfo;
	private: System::Windows::Forms::DataGridView^  dgvThong_ke;

	private: System::Windows::Forms::Label^  lbTongSoLuot;
	private: System::Windows::Forms::Label^  lbTongSoTien;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		BUS_Thongke^ b;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  ma_the;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  bien_so;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  time_in;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  time_out;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  loai_xe;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  loai_gui;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  trang_thai;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  tien;

	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				 System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
				 this->pnTitle = (gcnew System::Windows::Forms::Panel());
				 this->lbTitle = (gcnew System::Windows::Forms::Label());
				 this->tbContainer = (gcnew System::Windows::Forms::TableLayoutPanel());
				 this->pnThong_Ke = (gcnew System::Windows::Forms::Panel());
				 this->pnCenter = (gcnew System::Windows::Forms::Panel());
				 this->btnXuatExcel = (gcnew System::Windows::Forms::Button());
				 this->btnThongKe = (gcnew System::Windows::Forms::Button());
				 this->lbFrom = (gcnew System::Windows::Forms::Label());
				 this->dateTo = (gcnew System::Windows::Forms::DateTimePicker());
				 this->dateFrom = (gcnew System::Windows::Forms::DateTimePicker());
				 this->lbTo = (gcnew System::Windows::Forms::Label());
				 this->cbLoaiXe = (gcnew System::Windows::Forms::ComboBox());
				 this->lbLoaiXe = (gcnew System::Windows::Forms::Label());
				 this->cbTrangThai = (gcnew System::Windows::Forms::ComboBox());
				 this->lbTrangThai = (gcnew System::Windows::Forms::Label());
				 this->txtSoVe = (gcnew System::Windows::Forms::TextBox());
				 this->lbMaVe = (gcnew System::Windows::Forms::Label());
				 this->pnInfo = (gcnew System::Windows::Forms::Panel());
				 this->lbTongSoLuot = (gcnew System::Windows::Forms::Label());
				 this->lbTongSoTien = (gcnew System::Windows::Forms::Label());
				 this->dgvThong_ke = (gcnew System::Windows::Forms::DataGridView());
				 this->ma_the = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->bien_so = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->time_in = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->time_out = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->loai_xe = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->loai_gui = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->trang_thai = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->tien = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->pnTitle->SuspendLayout();
				 this->tbContainer->SuspendLayout();
				 this->pnThong_Ke->SuspendLayout();
				 this->pnCenter->SuspendLayout();
				 this->pnInfo->SuspendLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvThong_ke))->BeginInit();
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
				 this->lbTitle->Size = System::Drawing::Size(116, 31);
				 this->lbTitle->TabIndex = 0;
				 this->lbTitle->Text = L"Thống kê";
				 // 
				 // tbContainer
				 // 
				 this->tbContainer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
					 | System::Windows::Forms::AnchorStyles::Left) 
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->tbContainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)), 
					 static_cast<System::Int32>(static_cast<System::Byte>(230)));
				 this->tbContainer->ColumnCount = 1;
				 this->tbContainer->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
				 this->tbContainer->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
				 this->tbContainer->Controls->Add(this->pnThong_Ke, 0, 0);
				 this->tbContainer->Controls->Add(this->pnInfo, 0, 1);
				 this->tbContainer->Location = System::Drawing::Point(0, 50);
				 this->tbContainer->Margin = System::Windows::Forms::Padding(0);
				 this->tbContainer->Name = L"tbContainer";
				 this->tbContainer->RowCount = 2;
				 this->tbContainer->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
				 this->tbContainer->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
				 this->tbContainer->Size = System::Drawing::Size(1083, 631);
				 this->tbContainer->TabIndex = 1;
				 // 
				 // pnThong_Ke
				 // 
				 this->pnThong_Ke->Controls->Add(this->pnCenter);
				 this->pnThong_Ke->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->pnThong_Ke->Location = System::Drawing::Point(0, 0);
				 this->pnThong_Ke->Margin = System::Windows::Forms::Padding(0);
				 this->pnThong_Ke->Name = L"pnThong_Ke";
				 this->pnThong_Ke->Size = System::Drawing::Size(1083, 315);
				 this->pnThong_Ke->TabIndex = 7;
				 // 
				 // pnCenter
				 // 
				 this->pnCenter->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
					 | System::Windows::Forms::AnchorStyles::Left) 
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->pnCenter->BackColor = System::Drawing::Color::White;
				 this->pnCenter->Controls->Add(this->btnXuatExcel);
				 this->pnCenter->Controls->Add(this->btnThongKe);
				 this->pnCenter->Controls->Add(this->lbFrom);
				 this->pnCenter->Controls->Add(this->dateTo);
				 this->pnCenter->Controls->Add(this->dateFrom);
				 this->pnCenter->Controls->Add(this->lbTo);
				 this->pnCenter->Controls->Add(this->cbLoaiXe);
				 this->pnCenter->Controls->Add(this->lbLoaiXe);
				 this->pnCenter->Controls->Add(this->cbTrangThai);
				 this->pnCenter->Controls->Add(this->lbTrangThai);
				 this->pnCenter->Controls->Add(this->txtSoVe);
				 this->pnCenter->Controls->Add(this->lbMaVe);
				 this->pnCenter->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->pnCenter->Location = System::Drawing::Point(10, 10);
				 this->pnCenter->Margin = System::Windows::Forms::Padding(0);
				 this->pnCenter->Name = L"pnCenter";
				 this->pnCenter->Size = System::Drawing::Size(1063, 305);
				 this->pnCenter->TabIndex = 15;
				 // 
				 // btnXuatExcel
				 // 
				 this->btnXuatExcel->AutoSize = true;
				 this->btnXuatExcel->BackColor = System::Drawing::Color::MediumSeaGreen;
				 this->btnXuatExcel->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->btnXuatExcel->FlatAppearance->BorderSize = 0;
				 this->btnXuatExcel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnXuatExcel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->btnXuatExcel->ForeColor = System::Drawing::Color::White;
				 this->btnXuatExcel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 this->btnXuatExcel->Location = System::Drawing::Point(516, 205);
				 this->btnXuatExcel->Name = L"btnXuatExcel";
				 this->btnXuatExcel->Size = System::Drawing::Size(133, 33);
				 this->btnXuatExcel->TabIndex = 16;
				 this->btnXuatExcel->Text = L"Xuất ra Excel";
				 this->btnXuatExcel->UseVisualStyleBackColor = false;
				 this->btnXuatExcel->Click += gcnew System::EventHandler(this, &frmThongKe::btnXuatExcel_Click);
				 // 
				 // btnThongKe
				 // 
				 this->btnThongKe->AutoSize = true;
				 this->btnThongKe->BackColor = System::Drawing::Color::DodgerBlue;
				 this->btnThongKe->Cursor = System::Windows::Forms::Cursors::Hand;
				 this->btnThongKe->FlatAppearance->BorderSize = 0;
				 this->btnThongKe->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
				 this->btnThongKe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->btnThongKe->ForeColor = System::Drawing::Color::White;
				 this->btnThongKe->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
				 this->btnThongKe->Location = System::Drawing::Point(362, 205);
				 this->btnThongKe->Name = L"btnThongKe";
				 this->btnThongKe->Size = System::Drawing::Size(125, 33);
				 this->btnThongKe->TabIndex = 15;
				 this->btnThongKe->Text = L"Thống kê";
				 this->btnThongKe->UseVisualStyleBackColor = false;
				 this->btnThongKe->Click += gcnew System::EventHandler(this, &frmThongKe::btnThongKe_Click);
				 // 
				 // lbFrom
				 // 
				 this->lbFrom->AutoSize = true;
				 this->lbFrom->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbFrom->Location = System::Drawing::Point(139, 73);
				 this->lbFrom->Name = L"lbFrom";
				 this->lbFrom->Size = System::Drawing::Size(62, 19);
				 this->lbFrom->TabIndex = 0;
				 this->lbFrom->Text = L"Từ ngày:";
				 // 
				 // dateTo
				 // 
				 this->dateTo->CustomFormat = L"yyyy-MM-dd";
				 this->dateTo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->dateTo->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
				 this->dateTo->Location = System::Drawing::Point(491, 73);
				 this->dateTo->Name = L"dateTo";
				 this->dateTo->Size = System::Drawing::Size(149, 26);
				 this->dateTo->TabIndex = 14;
				 // 
				 // dateFrom
				 // 
				 this->dateFrom->CustomFormat = L"yyyy-MM-dd";
				 this->dateFrom->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->dateFrom->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
				 this->dateFrom->Location = System::Drawing::Point(207, 73);
				 this->dateFrom->Name = L"dateFrom";
				 this->dateFrom->Size = System::Drawing::Size(149, 26);
				 this->dateFrom->TabIndex = 13;
				 // 
				 // lbTo
				 // 
				 this->lbTo->AutoSize = true;
				 this->lbTo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbTo->Location = System::Drawing::Point(416, 73);
				 this->lbTo->Name = L"lbTo";
				 this->lbTo->Size = System::Drawing::Size(69, 19);
				 this->lbTo->TabIndex = 4;
				 this->lbTo->Text = L"Đến ngày:";
				 // 
				 // cbLoaiXe
				 // 
				 this->cbLoaiXe->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				 this->cbLoaiXe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->cbLoaiXe->FormattingEnabled = true;
				 this->cbLoaiXe->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"<-- Tất cả -->", L"Xe đạp", L"Xe máy", L"Xe ô tô"});
				 this->cbLoaiXe->Location = System::Drawing::Point(207, 135);
				 this->cbLoaiXe->Name = L"cbLoaiXe";
				 this->cbLoaiXe->Size = System::Drawing::Size(149, 27);
				 this->cbLoaiXe->TabIndex = 3;
				 // 
				 // lbLoaiXe
				 // 
				 this->lbLoaiXe->AutoSize = true;
				 this->lbLoaiXe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbLoaiXe->Location = System::Drawing::Point(139, 138);
				 this->lbLoaiXe->Name = L"lbLoaiXe";
				 this->lbLoaiXe->Size = System::Drawing::Size(57, 19);
				 this->lbLoaiXe->TabIndex = 2;
				 this->lbLoaiXe->Text = L"Loại xe:";
				 // 
				 // cbTrangThai
				 // 
				 this->cbTrangThai->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
				 this->cbTrangThai->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->cbTrangThai->FormattingEnabled = true;
				 this->cbTrangThai->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"<-- Tất cả -->", L"Đã lấy xe", L"Chưa lấy xe"});
				 this->cbTrangThai->Location = System::Drawing::Point(491, 135);
				 this->cbTrangThai->Name = L"cbTrangThai";
				 this->cbTrangThai->Size = System::Drawing::Size(149, 27);
				 this->cbTrangThai->TabIndex = 7;
				 // 
				 // lbTrangThai
				 // 
				 this->lbTrangThai->AutoSize = true;
				 this->lbTrangThai->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbTrangThai->Location = System::Drawing::Point(416, 138);
				 this->lbTrangThai->Name = L"lbTrangThai";
				 this->lbTrangThai->Size = System::Drawing::Size(71, 19);
				 this->lbTrangThai->TabIndex = 6;
				 this->lbTrangThai->Text = L"Trạng thái:";
				 // 
				 // txtSoVe
				 // 
				 this->txtSoVe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->txtSoVe->Location = System::Drawing::Point(775, 73);
				 this->txtSoVe->Name = L"txtSoVe";
				 this->txtSoVe->Size = System::Drawing::Size(149, 26);
				 this->txtSoVe->TabIndex = 9;
				 // 
				 // lbMaVe
				 // 
				 this->lbMaVe->AutoSize = true;
				 this->lbMaVe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbMaVe->Location = System::Drawing::Point(700, 73);
				 this->lbMaVe->Name = L"lbMaVe";
				 this->lbMaVe->Size = System::Drawing::Size(69, 19);
				 this->lbMaVe->TabIndex = 8;
				 this->lbMaVe->Text = L"Mã vé xe:";
				 // 
				 // pnInfo
				 // 
				 this->pnInfo->Controls->Add(this->lbTongSoLuot);
				 this->pnInfo->Controls->Add(this->lbTongSoTien);
				 this->pnInfo->Controls->Add(this->dgvThong_ke);
				 this->pnInfo->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->pnInfo->Location = System::Drawing::Point(0, 315);
				 this->pnInfo->Margin = System::Windows::Forms::Padding(0);
				 this->pnInfo->Name = L"pnInfo";
				 this->pnInfo->Padding = System::Windows::Forms::Padding(10, 0, 10, 10);
				 this->pnInfo->Size = System::Drawing::Size(1083, 316);
				 this->pnInfo->TabIndex = 8;
				 // 
				 // lbTongSoLuot
				 // 
				 this->lbTongSoLuot->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
				 this->lbTongSoLuot->AutoSize = true;
				 this->lbTongSoLuot->BackColor = System::Drawing::Color::White;
				 this->lbTongSoLuot->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbTongSoLuot->Location = System::Drawing::Point(15, 284);
				 this->lbTongSoLuot->Margin = System::Windows::Forms::Padding(0);
				 this->lbTongSoLuot->Name = L"lbTongSoLuot";
				 this->lbTongSoLuot->Size = System::Drawing::Size(119, 22);
				 this->lbTongSoLuot->TabIndex = 21;
				 this->lbTongSoLuot->Text = L"Tổng số xe:";
				 // 
				 // lbTongSoTien
				 // 
				 this->lbTongSoTien->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left) 
					 | System::Windows::Forms::AnchorStyles::Right));
				 this->lbTongSoTien->AutoSize = true;
				 this->lbTongSoTien->BackColor = System::Drawing::Color::White;
				 this->lbTongSoTien->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 this->lbTongSoTien->Location = System::Drawing::Point(491, 284);
				 this->lbTongSoTien->Margin = System::Windows::Forms::Padding(0);
				 this->lbTongSoTien->Name = L"lbTongSoTien";
				 this->lbTongSoTien->Size = System::Drawing::Size(121, 22);
				 this->lbTongSoTien->TabIndex = 20;
				 this->lbTongSoTien->Text = L"Tổng số tiền: ";
				 // 
				 // dgvThong_ke
				 // 
				 this->dgvThong_ke->AllowUserToAddRows = false;
				 this->dgvThong_ke->AllowUserToDeleteRows = false;
				 this->dgvThong_ke->AllowUserToResizeColumns = false;
				 this->dgvThong_ke->AllowUserToResizeRows = false;
				 this->dgvThong_ke->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
				 this->dgvThong_ke->BackgroundColor = System::Drawing::Color::White;
				 this->dgvThong_ke->BorderStyle = System::Windows::Forms::BorderStyle::None;
				 dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
				 dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ActiveCaption;
				 dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
					 static_cast<System::Byte>(0)));
				 dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
				 dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
				 dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
				 dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
				 this->dgvThong_ke->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
				 this->dgvThong_ke->ColumnHeadersHeight = 28;
				 this->dgvThong_ke->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
				 this->dgvThong_ke->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {this->ma_the, this->bien_so, 
					 this->time_in, this->time_out, this->loai_xe, this->loai_gui, this->trang_thai, this->tien});
				 this->dgvThong_ke->Dock = System::Windows::Forms::DockStyle::Fill;
				 this->dgvThong_ke->Location = System::Drawing::Point(10, 0);
				 this->dgvThong_ke->Margin = System::Windows::Forms::Padding(0);
				 this->dgvThong_ke->Name = L"dgvThong_ke";
				 this->dgvThong_ke->ReadOnly = true;
				 this->dgvThong_ke->RowHeadersVisible = false;
				 this->dgvThong_ke->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
				 dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, 
					 System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
				 this->dgvThong_ke->RowsDefaultCellStyle = dataGridViewCellStyle2;
				 this->dgvThong_ke->Size = System::Drawing::Size(1063, 306);
				 this->dgvThong_ke->TabIndex = 7;
				 this->dgvThong_ke->TabStop = false;
				 this->dgvThong_ke->DataBindingComplete += gcnew System::Windows::Forms::DataGridViewBindingCompleteEventHandler(this, &frmThongKe::dgvThong_ke_DataBindingComplete);
				 // 
				 // ma_the
				 // 
				 this->ma_the->DataPropertyName = L"Mathe";
				 this->ma_the->HeaderText = L"Số vé";
				 this->ma_the->Name = L"ma_the";
				 this->ma_the->ReadOnly = true;
				 this->ma_the->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				 // 
				 // bien_so
				 // 
				 this->bien_so->DataPropertyName = L"BKS";
				 this->bien_so->HeaderText = L"Biển số";
				 this->bien_so->Name = L"bien_so";
				 this->bien_so->ReadOnly = true;
				 this->bien_so->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				 // 
				 // time_in
				 // 
				 this->time_in->DataPropertyName = L"Thoigianvao";
				 this->time_in->HeaderText = L"Thời gian vào";
				 this->time_in->Name = L"time_in";
				 this->time_in->ReadOnly = true;
				 this->time_in->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				 // 
				 // time_out
				 // 
				 this->time_out->DataPropertyName = L"Thoigianra";
				 this->time_out->HeaderText = L"Thời gian ra";
				 this->time_out->Name = L"time_out";
				 this->time_out->ReadOnly = true;
				 this->time_out->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				 // 
				 // loai_xe
				 // 
				 this->loai_xe->DataPropertyName = L"Loaixe";
				 this->loai_xe->HeaderText = L"Loại xe";
				 this->loai_xe->Name = L"loai_xe";
				 this->loai_xe->ReadOnly = true;
				 this->loai_xe->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				 // 
				 // loai_gui
				 // 
				 this->loai_gui->DataPropertyName = L"Loaive";
				 this->loai_gui->HeaderText = L"Loại gửi";
				 this->loai_gui->Name = L"loai_gui";
				 this->loai_gui->ReadOnly = true;
				 this->loai_gui->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				 // 
				 // trang_thai
				 // 
				 this->trang_thai->DataPropertyName = L"Trangthai";
				 this->trang_thai->HeaderText = L"Trạng thái";
				 this->trang_thai->Name = L"trang_thai";
				 this->trang_thai->ReadOnly = true;
				 this->trang_thai->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				 // 
				 // tien
				 // 
				 this->tien->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
				 this->tien->DataPropertyName = L"Tongtien";
				 this->tien->HeaderText = L"Tiền";
				 this->tien->Name = L"tien";
				 this->tien->ReadOnly = true;
				 this->tien->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
				 // 
				 // frmThongKe
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackColor = System::Drawing::Color::White;
				 this->ClientSize = System::Drawing::Size(1083, 680);
				 this->Controls->Add(this->tbContainer);
				 this->Controls->Add(this->pnTitle);
				 this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
				 this->Name = L"frmThongKe";
				 this->Text = L"frmThongKe";
				 this->Load += gcnew System::EventHandler(this, &frmThongKe::frmThongKe_Load);
				 this->pnTitle->ResumeLayout(false);
				 this->pnTitle->PerformLayout();
				 this->tbContainer->ResumeLayout(false);
				 this->pnThong_Ke->ResumeLayout(false);
				 this->pnCenter->ResumeLayout(false);
				 this->pnCenter->PerformLayout();
				 this->pnInfo->ResumeLayout(false);
				 this->pnInfo->PerformLayout();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvThong_ke))->EndInit();
				 this->ResumeLayout(false);

			 }
#pragma endregion
	private: System::Void btnThongKe_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ date_t=dateTo->Value.ToString("yyyy-MM-dd");
				 String^ date_fr=dateFrom->Value.ToString("yyyy-MM-dd");	
				 String^ bks=txtSoVe->Text;
				 String^ loai_xe= cbLoaiXe->Text;
				 String^ trangthai=cbTrangThai->Text;

				 if (date_t !="" && date_fr!="" && bks->Equals("") && loai_xe->Equals(L"<-- Tất cả -->")&&trangthai->Equals(L"<-- Tất cả -->"))
					 b->Thongke_theo_ngay(dgvThong_ke,date_fr,date_t);
				 else if(bks!="" && loai_xe->Equals(L"<-- Tất cả -->")&&trangthai->Equals(L"<-- Tất cả -->"))
					 b->Thongke_theo_bks(dgvThong_ke,bks);
				 else if(!loai_xe->Equals(L"<-- Tất cả -->") && bks->Equals("") && trangthai->Equals(L"<-- Tất cả -->"))
					 b->Thongke_theo_loaixe(dgvThong_ke,loai_xe);
				 else if(!trangthai->Equals(L"<-- Tất cả -->") && bks->Equals("") && loai_xe->Equals(L"<-- Tất cả -->"))
					 b->Thongke_theo_trangthai(dgvThong_ke,trangthai);
				 else
					 b->Thongke_full_luachon(dgvThong_ke,date_fr,date_t,bks,loai_xe,trangthai);

			 }
	private: System::Void btnXuatExcel_Click(System::Object^  sender, System::EventArgs^  e) {
				 DBUtils::export_to_excel(dgvThong_ke);
			 }
	private: System::Void frmThongKe_Load(System::Object^  sender, System::EventArgs^  e) {
				 cbLoaiXe->SelectedIndex=0;
				 cbTrangThai->SelectedIndex=0;
				 loadData();
			 }
	private: System::Void loadData(){
				 String^ date_t=dateTo->Value.ToString("yyyy-MM-dd");
				 String^ date_fr=dateFrom->Value.ToString("yyyy-MM-dd");	
				 String^ sql=L"SELECT * FROM `thongke` WHERE Thoigianvao BETWEEN CAST('"+date_t+"' AS DATE) AND CAST('"+date_fr+"' AS DATE)";
				 DBUtils::loadDataSort(dgvThong_ke,sql);
				 showTongtien();
				 showTongxe();
			 }
	private:System::Void showTongtien(){
				int count=dgvThong_ke->RowCount;
				int sum=0,i;
				for (i=0;i<count;i++)
				{
					sum+=System::Convert::ToInt32(dgvThong_ke[7,i]->Value->ToString());
				}

				lbTongSoTien->Text=L"Tổng số tiền: "+sum;
			};
	private:System::Void showTongxe(){
				lbTongSoLuot->Text=L"Tổng số xe: "+dgvThong_ke->RowCount;
			};

	private:System::Void setNull(){
				txtSoVe->Clear();
				cbLoaiXe->Text="";
				cbTrangThai->Text="";
			}
	private: System::Void dgvThong_ke_DataBindingComplete(System::Object^  sender, System::Windows::Forms::DataGridViewBindingCompleteEventArgs^  e) {
				 dgvThong_ke->ClearSelection();
				 setNull();
			 }

	};
}
