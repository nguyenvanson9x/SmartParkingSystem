#pragma once
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
	public ref class frmGioiThieu : public System::Windows::Forms::Form
	{
	public:
		frmGioiThieu(void)
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
		~frmGioiThieu()
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
	private: System::Windows::Forms::Label^  lbCar;

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
			this->pnTitle = (gcnew System::Windows::Forms::Panel());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->tbContainer = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pnTicketInfo = (gcnew System::Windows::Forms::Panel());
			this->lbCar = (gcnew System::Windows::Forms::Label());
			this->pnTitle->SuspendLayout();
			this->tbContainer->SuspendLayout();
			this->pnTicketInfo->SuspendLayout();
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
			this->lbTitle->Size = System::Drawing::Size(123, 31);
			this->lbTitle->TabIndex = 0;
			this->lbTitle->Text = L"Giới thiệu";
			// 
			// tbContainer
			// 
			this->tbContainer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbContainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->tbContainer->ColumnCount = 1;
			this->tbContainer->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 70)));
			this->tbContainer->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 30)));
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
			// pnTicketInfo
			// 
			this->pnTicketInfo->BackColor = System::Drawing::Color::White;
			this->pnTicketInfo->Controls->Add(this->lbCar);
			this->pnTicketInfo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnTicketInfo->Location = System::Drawing::Point(10, 10);
			this->pnTicketInfo->Margin = System::Windows::Forms::Padding(10);
			this->pnTicketInfo->Name = L"pnTicketInfo";
			this->pnTicketInfo->Size = System::Drawing::Size(1063, 612);
			this->pnTicketInfo->TabIndex = 1;
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
			this->lbCar->Size = System::Drawing::Size(1063, 36);
			this->lbCar->TabIndex = 1;
			this->lbCar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// frmGioiThieu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1083, 680);
			this->Controls->Add(this->tbContainer);
			this->Controls->Add(this->pnTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmGioiThieu";
			this->Text = L"frmVeThang";
			this->pnTitle->ResumeLayout(false);
			this->pnTitle->PerformLayout();
			this->tbContainer->ResumeLayout(false);
			this->pnTicketInfo->ResumeLayout(false);
			this->ResumeLayout(false);

		}

	};
}
