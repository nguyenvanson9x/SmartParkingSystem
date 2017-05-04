#pragma once

namespace SmartParkingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmNhanXe
	/// </summary>
	public ref class frmNhanXe : public System::Windows::Forms::Form
	{
	public:
		frmNhanXe(void)
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
		~frmNhanXe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  pnTitle;
	private: System::Windows::Forms::Label^  lbTitle;
	private: System::Windows::Forms::TableLayoutPanel^  tbContainer;
	private: System::Windows::Forms::Panel^  pnCar;
	private: System::Windows::Forms::Panel^  pnCar_Info;
	private: System::Windows::Forms::Label^  lbCar;
	private: System::Windows::Forms::Label^  lbCar_Info;
	private: System::Windows::Forms::TextBox^  txtSearch;
	private: System::Windows::Forms::Button^  btnTimkiem;
	private: System::Windows::Forms::Button^  btnTrolai;


	private: System::Windows::Forms::Label^  lbSum;
	private: System::Windows::Forms::DataGridView^  dgvCar;
	private: System::Windows::Forms::Button^  btnHuy;
	private: System::Windows::Forms::Button^  btnXoa;
	private: System::Windows::Forms::Button^  btnCapnhat;
	private: System::Windows::Forms::Button^  btnThem;
	private: System::Windows::Forms::TextBox^  txtThoigianvao;
	private: System::Windows::Forms::TextBox^  txtBienso;
	private: System::Windows::Forms::TextBox^  txtSove;
	private: System::Windows::Forms::ComboBox^  cbLoaive;
	private: System::Windows::Forms::ComboBox^  cbVitri;
	private: System::Windows::Forms::ComboBox^  cbLoaixe;
	private: System::Windows::Forms::Label^  lbThoigianvao;
	private: System::Windows::Forms::Label^  lbLoaive;
	private: System::Windows::Forms::Label^  lbVitri;
	private: System::Windows::Forms::Label^  lbBienso;
	private: System::Windows::Forms::Label^  lbLoaixe;
	private: System::Windows::Forms::Label^  lbSove;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmNhanXe::typeid));
			this->pnTitle = (gcnew System::Windows::Forms::Panel());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->tbContainer = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pnCar = (gcnew System::Windows::Forms::Panel());
			this->dgvCar = (gcnew System::Windows::Forms::DataGridView());
			this->lbSum = (gcnew System::Windows::Forms::Label());
			this->btnTrolai = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnTimkiem = (gcnew System::Windows::Forms::Button());
			this->lbCar = (gcnew System::Windows::Forms::Label());
			this->pnCar_Info = (gcnew System::Windows::Forms::Panel());
			this->txtThoigianvao = (gcnew System::Windows::Forms::TextBox());
			this->txtBienso = (gcnew System::Windows::Forms::TextBox());
			this->txtSove = (gcnew System::Windows::Forms::TextBox());
			this->cbLoaive = (gcnew System::Windows::Forms::ComboBox());
			this->cbVitri = (gcnew System::Windows::Forms::ComboBox());
			this->cbLoaixe = (gcnew System::Windows::Forms::ComboBox());
			this->lbThoigianvao = (gcnew System::Windows::Forms::Label());
			this->lbLoaive = (gcnew System::Windows::Forms::Label());
			this->lbVitri = (gcnew System::Windows::Forms::Label());
			this->lbBienso = (gcnew System::Windows::Forms::Label());
			this->lbLoaixe = (gcnew System::Windows::Forms::Label());
			this->lbSove = (gcnew System::Windows::Forms::Label());
			this->btnThem = (gcnew System::Windows::Forms::Button());
			this->btnXoa = (gcnew System::Windows::Forms::Button());
			this->btnCapnhat = (gcnew System::Windows::Forms::Button());
			this->lbCar_Info = (gcnew System::Windows::Forms::Label());
			this->btnHuy = (gcnew System::Windows::Forms::Button());
			this->pnTitle->SuspendLayout();
			this->tbContainer->SuspendLayout();
			this->pnCar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvCar))->BeginInit();
			this->pnCar_Info->SuspendLayout();
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
			this->lbTitle->Size = System::Drawing::Size(205, 31);
			this->lbTitle->TabIndex = 0;
			this->lbTitle->Text = L"Quản lý Nhận Xe";
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
			this->tbContainer->Controls->Add(this->pnCar_Info, 1, 0);
			this->tbContainer->Location = System::Drawing::Point(0, 50);
			this->tbContainer->Margin = System::Windows::Forms::Padding(0);
			this->tbContainer->Name = L"tbContainer";
			this->tbContainer->RowCount = 1;
			this->tbContainer->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tbContainer->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tbContainer->Size = System::Drawing::Size(1083, 630);
			this->tbContainer->TabIndex = 1;
			// 
			// pnCar
			// 
			this->pnCar->BackColor = System::Drawing::Color::White;
			this->pnCar->Controls->Add(this->dgvCar);
			this->pnCar->Controls->Add(this->lbSum);
			this->pnCar->Controls->Add(this->btnTrolai);
			this->pnCar->Controls->Add(this->txtSearch);
			this->pnCar->Controls->Add(this->btnTimkiem);
			this->pnCar->Controls->Add(this->lbCar);
			this->pnCar->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnCar->Location = System::Drawing::Point(10, 10);
			this->pnCar->Margin = System::Windows::Forms::Padding(10, 10, 5, 10);
			this->pnCar->Name = L"pnCar";
			this->pnCar->Size = System::Drawing::Size(743, 610);
			this->pnCar->TabIndex = 0;
			// 
			// dgvCar
			// 
			this->dgvCar->AllowUserToAddRows = false;
			this->dgvCar->AllowUserToDeleteRows = false;
			this->dgvCar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dgvCar->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvCar->BackgroundColor = System::Drawing::Color::White;
			this->dgvCar->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvCar->Location = System::Drawing::Point(0, 118);
			this->dgvCar->Margin = System::Windows::Forms::Padding(0);
			this->dgvCar->Name = L"dgvCar";
			this->dgvCar->RowHeadersVisible = false;
			this->dgvCar->Size = System::Drawing::Size(743, 465);
			this->dgvCar->TabIndex = 4;
			this->dgvCar->RowEnter += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &frmNhanXe::dgvCar_RowEnter);
			// 
			// lbSum
			// 
			this->lbSum->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->lbSum->AutoSize = true;
			this->lbSum->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbSum->Location = System::Drawing::Point(0, 587);
			this->lbSum->Margin = System::Windows::Forms::Padding(0);
			this->lbSum->Name = L"lbSum";
			this->lbSum->Size = System::Drawing::Size(104, 21);
			this->lbSum->TabIndex = 0;
			this->lbSum->Text = L"Tổng số xe: ";
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
			this->btnTrolai->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnTrolai.Image")));
			this->btnTrolai->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnTrolai->Location = System::Drawing::Point(636, 60);
			this->btnTrolai->Name = L"btnTrolai";
			this->btnTrolai->Size = System::Drawing::Size(95, 33);
			this->btnTrolai->TabIndex = 3;
			this->btnTrolai->Text = L"Trở lại";
			this->btnTrolai->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnTrolai->UseVisualStyleBackColor = false;
			this->btnTrolai->Click += gcnew System::EventHandler(this, &frmNhanXe::btnTrolai_Click);
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
			this->btnTimkiem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnTimkiem.Image")));
			this->btnTimkiem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnTimkiem->Location = System::Drawing::Point(505, 60);
			this->btnTimkiem->Name = L"btnTimkiem";
			this->btnTimkiem->Size = System::Drawing::Size(125, 33);
			this->btnTimkiem->TabIndex = 2;
			this->btnTimkiem->Text = L"Tìm kiếm";
			this->btnTimkiem->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnTimkiem->UseVisualStyleBackColor = false;
			this->btnTimkiem->Click += gcnew System::EventHandler(this, &frmNhanXe::btnTimkiem_Click);
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
			this->lbCar->Text = L"Danh sách xe";
			this->lbCar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// pnCar_Info
			// 
			this->pnCar_Info->BackColor = System::Drawing::Color::White;
			this->pnCar_Info->Controls->Add(this->txtThoigianvao);
			this->pnCar_Info->Controls->Add(this->txtBienso);
			this->pnCar_Info->Controls->Add(this->txtSove);
			this->pnCar_Info->Controls->Add(this->cbLoaive);
			this->pnCar_Info->Controls->Add(this->cbVitri);
			this->pnCar_Info->Controls->Add(this->cbLoaixe);
			this->pnCar_Info->Controls->Add(this->lbThoigianvao);
			this->pnCar_Info->Controls->Add(this->lbLoaive);
			this->pnCar_Info->Controls->Add(this->lbVitri);
			this->pnCar_Info->Controls->Add(this->lbBienso);
			this->pnCar_Info->Controls->Add(this->lbLoaixe);
			this->pnCar_Info->Controls->Add(this->lbSove);
			this->pnCar_Info->Controls->Add(this->btnThem);
			this->pnCar_Info->Controls->Add(this->btnXoa);
			this->pnCar_Info->Controls->Add(this->btnCapnhat);
			this->pnCar_Info->Controls->Add(this->lbCar_Info);
			this->pnCar_Info->Controls->Add(this->btnHuy);
			this->pnCar_Info->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnCar_Info->Location = System::Drawing::Point(760, 10);
			this->pnCar_Info->Margin = System::Windows::Forms::Padding(2, 10, 10, 10);
			this->pnCar_Info->Name = L"pnCar_Info";
			this->pnCar_Info->Size = System::Drawing::Size(313, 610);
			this->pnCar_Info->TabIndex = 1;
			// 
			// txtThoigianvao
			// 
			this->txtThoigianvao->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtThoigianvao->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtThoigianvao->Location = System::Drawing::Point(123, 469);
			this->txtThoigianvao->Name = L"txtThoigianvao";
			this->txtThoigianvao->Size = System::Drawing::Size(170, 26);
			this->txtThoigianvao->TabIndex = 6;
			// 
			// txtBienso
			// 
			this->txtBienso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtBienso->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtBienso->Location = System::Drawing::Point(123, 229);
			this->txtBienso->Name = L"txtBienso";
			this->txtBienso->Size = System::Drawing::Size(170, 26);
			this->txtBienso->TabIndex = 3;
			// 
			// txtSove
			// 
			this->txtSove->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtSove->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->txtSove->Location = System::Drawing::Point(123, 69);
			this->txtSove->Name = L"txtSove";
			this->txtSove->Size = System::Drawing::Size(170, 26);
			this->txtSove->TabIndex = 1;
			// 
			// cbLoaive
			// 
			this->cbLoaive->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->cbLoaive->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cbLoaive->FormattingEnabled = true;
			this->cbLoaive->Location = System::Drawing::Point(123, 389);
			this->cbLoaive->Name = L"cbLoaive";
			this->cbLoaive->Size = System::Drawing::Size(170, 27);
			this->cbLoaive->TabIndex = 5;
			// 
			// cbVitri
			// 
			this->cbVitri->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->cbVitri->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cbVitri->FormattingEnabled = true;
			this->cbVitri->Location = System::Drawing::Point(123, 309);
			this->cbVitri->Name = L"cbVitri";
			this->cbVitri->Size = System::Drawing::Size(170, 27);
			this->cbVitri->TabIndex = 4;
			// 
			// cbLoaixe
			// 
			this->cbLoaixe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->cbLoaixe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->cbLoaixe->FormattingEnabled = true;
			this->cbLoaixe->Location = System::Drawing::Point(123, 149);
			this->cbLoaixe->Name = L"cbLoaixe";
			this->cbLoaixe->Size = System::Drawing::Size(170, 27);
			this->cbLoaixe->TabIndex = 2;
			// 
			// lbThoigianvao
			// 
			this->lbThoigianvao->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbThoigianvao->AutoSize = true;
			this->lbThoigianvao->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbThoigianvao->Location = System::Drawing::Point(20, 472);
			this->lbThoigianvao->Name = L"lbThoigianvao";
			this->lbThoigianvao->Size = System::Drawing::Size(90, 19);
			this->lbThoigianvao->TabIndex = 0;
			this->lbThoigianvao->Text = L"Thời gian vào";
			// 
			// lbLoaive
			// 
			this->lbLoaive->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbLoaive->AutoSize = true;
			this->lbLoaive->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbLoaive->Location = System::Drawing::Point(20, 392);
			this->lbLoaive->Name = L"lbLoaive";
			this->lbLoaive->Size = System::Drawing::Size(54, 19);
			this->lbLoaive->TabIndex = 0;
			this->lbLoaive->Text = L"Loại vé";
			// 
			// lbVitri
			// 
			this->lbVitri->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbVitri->AutoSize = true;
			this->lbVitri->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbVitri->Location = System::Drawing::Point(20, 312);
			this->lbVitri->Name = L"lbVitri";
			this->lbVitri->Size = System::Drawing::Size(39, 19);
			this->lbVitri->TabIndex = 0;
			this->lbVitri->Text = L"Vị trí";
			// 
			// lbBienso
			// 
			this->lbBienso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbBienso->AutoSize = true;
			this->lbBienso->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbBienso->Location = System::Drawing::Point(20, 232);
			this->lbBienso->Name = L"lbBienso";
			this->lbBienso->Size = System::Drawing::Size(54, 19);
			this->lbBienso->TabIndex = 0;
			this->lbBienso->Text = L"Biển số";
			// 
			// lbLoaixe
			// 
			this->lbLoaixe->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbLoaixe->AutoSize = true;
			this->lbLoaixe->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbLoaixe->Location = System::Drawing::Point(20, 152);
			this->lbLoaixe->Name = L"lbLoaixe";
			this->lbLoaixe->Size = System::Drawing::Size(54, 19);
			this->lbLoaixe->TabIndex = 0;
			this->lbLoaixe->Text = L"Loại xe";
			// 
			// lbSove
			// 
			this->lbSove->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbSove->AutoSize = true;
			this->lbSove->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbSove->Location = System::Drawing::Point(20, 72);
			this->lbSove->Name = L"lbSove";
			this->lbSove->Size = System::Drawing::Size(44, 19);
			this->lbSove->TabIndex = 0;
			this->lbSove->Text = L"Số vé";
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
			this->btnThem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnThem.Image")));
			this->btnThem->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnThem->Location = System::Drawing::Point(24, 518);
			this->btnThem->Name = L"btnThem";
			this->btnThem->Size = System::Drawing::Size(95, 33);
			this->btnThem->TabIndex = 7;
			this->btnThem->Text = L"Thêm";
			this->btnThem->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnThem->UseVisualStyleBackColor = false;
			this->btnThem->Click += gcnew System::EventHandler(this, &frmNhanXe::btnThem_Click);
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
			this->btnXoa->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnXoa.Image")));
			this->btnXoa->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnXoa->Location = System::Drawing::Point(158, 518);
			this->btnXoa->Name = L"btnXoa";
			this->btnXoa->Size = System::Drawing::Size(95, 33);
			this->btnXoa->TabIndex = 8;
			this->btnXoa->Text = L"Xóa";
			this->btnXoa->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnXoa->UseVisualStyleBackColor = false;
			this->btnXoa->Click += gcnew System::EventHandler(this, &frmNhanXe::btnXoa_Click);
			// 
			// btnCapnhat
			// 
			this->btnCapnhat->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
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
			this->btnCapnhat->Location = System::Drawing::Point(24, 564);
			this->btnCapnhat->Name = L"btnCapnhat";
			this->btnCapnhat->Size = System::Drawing::Size(95, 33);
			this->btnCapnhat->TabIndex = 9;
			this->btnCapnhat->Text = L"Sửa";
			this->btnCapnhat->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnCapnhat->UseVisualStyleBackColor = false;
			this->btnCapnhat->Click += gcnew System::EventHandler(this, &frmNhanXe::btnCapnhat_Click);
			// 
			// lbCar_Info
			// 
			this->lbCar_Info->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(248)), 
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->lbCar_Info->Dock = System::Windows::Forms::DockStyle::Top;
			this->lbCar_Info->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbCar_Info->Location = System::Drawing::Point(0, 0);
			this->lbCar_Info->Margin = System::Windows::Forms::Padding(0);
			this->lbCar_Info->Name = L"lbCar_Info";
			this->lbCar_Info->Size = System::Drawing::Size(313, 36);
			this->lbCar_Info->TabIndex = 1;
			this->lbCar_Info->Text = L"Thông tin xe";
			this->lbCar_Info->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
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
			this->btnHuy->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnHuy.Image")));
			this->btnHuy->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnHuy->Location = System::Drawing::Point(158, 564);
			this->btnHuy->Name = L"btnHuy";
			this->btnHuy->Size = System::Drawing::Size(95, 33);
			this->btnHuy->TabIndex = 10;
			this->btnHuy->Text = L"Hủy";
			this->btnHuy->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnHuy->UseVisualStyleBackColor = false;
			this->btnHuy->Click += gcnew System::EventHandler(this, &frmNhanXe::btnHuy_Click);
			// 
			// frmNhanXe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1083, 680);
			this->Controls->Add(this->tbContainer);
			this->Controls->Add(this->pnTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmNhanXe";
			this->Text = L"frmNhanXe";
			this->Load += gcnew System::EventHandler(this, &frmNhanXe::frmNhanXe_Load);
			this->pnTitle->ResumeLayout(false);
			this->pnTitle->PerformLayout();
			this->tbContainer->ResumeLayout(false);
			this->pnCar->ResumeLayout(false);
			this->pnCar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvCar))->EndInit();
			this->pnCar_Info->ResumeLayout(false);
			this->pnCar_Info->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnTimkiem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnTrolai_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void dgvCar_RowEnter(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	}
	private: System::Void btnThem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnXoa_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnCapnhat_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void btnHuy_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void frmNhanXe_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
