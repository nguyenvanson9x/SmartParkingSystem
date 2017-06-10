#pragma once

namespace SmartParkingSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmGioiThieu
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
	private: System::Windows::Forms::Panel^  panelGioithieu;
	private: System::Windows::Forms::Panel^  panelContact;


	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::SplitContainer^  splitContainerLoad;
	private: System::Windows::Forms::Label^  lbHinhanh;
	private: System::Windows::Forms::Label^  lbGioithieu;
	private: System::Windows::Forms::Label^  lbNguoiphattrien;

	private: System::Windows::Forms::Button^  btnBackimg;
	private: System::Windows::Forms::Button^  btnNextimg;
	private: System::Windows::Forms::Panel^  panelLoadimg;
	private: System::Windows::Forms::Label^  lbMailVu;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  lbMailSon;

	private: System::Windows::Forms::Label^  lbContact;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  lbVu;
	private: System::Windows::Forms::Label^  lbSon;
	private: System::Windows::Forms::Label^  label8;



	private: System::Windows::Forms::Label^  label1;



	protected:



	protected:
		
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		static int back=6;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frmGioiThieu::typeid));
			this->pnTitle = (gcnew System::Windows::Forms::Panel());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->panelGioithieu = (gcnew System::Windows::Forms::Panel());
			this->lbGioithieu = (gcnew System::Windows::Forms::Label());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->panelContact = (gcnew System::Windows::Forms::Panel());
			this->lbMailVu = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->lbMailSon = (gcnew System::Windows::Forms::Label());
			this->lbContact = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbVu = (gcnew System::Windows::Forms::Label());
			this->lbSon = (gcnew System::Windows::Forms::Label());
			this->lbNguoiphattrien = (gcnew System::Windows::Forms::Label());
			this->splitContainerLoad = (gcnew System::Windows::Forms::SplitContainer());
			this->btnBackimg = (gcnew System::Windows::Forms::Button());
			this->btnNextimg = (gcnew System::Windows::Forms::Button());
			this->panelLoadimg = (gcnew System::Windows::Forms::Panel());
			this->lbHinhanh = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pnTitle->SuspendLayout();
			this->panelGioithieu->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->SuspendLayout();
			this->panelContact->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainerLoad))->BeginInit();
			this->splitContainerLoad->Panel1->SuspendLayout();
			this->splitContainerLoad->Panel2->SuspendLayout();
			this->splitContainerLoad->SuspendLayout();
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
			// panelGioithieu
			// 
			this->panelGioithieu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelGioithieu->BackColor = System::Drawing::Color::White;
			this->panelGioithieu->Controls->Add(this->lbGioithieu);
			this->panelGioithieu->Controls->Add(this->splitContainer1);
			this->panelGioithieu->Location = System::Drawing::Point(12, 62);
			this->panelGioithieu->Margin = System::Windows::Forms::Padding(0);
			this->panelGioithieu->Name = L"panelGioithieu";
			this->panelGioithieu->Size = System::Drawing::Size(1059, 62);
			this->panelGioithieu->TabIndex = 1;
			// 
			// lbGioithieu
			// 
			this->lbGioithieu->BackColor = System::Drawing::Color::Transparent;
			this->lbGioithieu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(163)));
			this->lbGioithieu->Location = System::Drawing::Point(61, 16);
			this->lbGioithieu->Name = L"lbGioithieu";
			this->lbGioithieu->Size = System::Drawing::Size(937, 30);
			this->lbGioithieu->TabIndex = 4;
			this->lbGioithieu->Text = L"Xin chào mừng bạn đến với hệ thống bãi gửi xe thông minh SPS của chúng tôi";
			this->lbGioithieu->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Location = System::Drawing::Point(0, 100);
			this->splitContainer1->Margin = System::Windows::Forms::Padding(0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Size = System::Drawing::Size(1083, 391);
			this->splitContainer1->SplitterDistance = 361;
			this->splitContainer1->TabIndex = 3;
			// 
			// panelContact
			// 
			this->panelContact->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelContact->BackColor = System::Drawing::Color::White;
			this->panelContact->Controls->Add(this->lbMailVu);
			this->panelContact->Controls->Add(this->label5);
			this->panelContact->Controls->Add(this->lbMailSon);
			this->panelContact->Controls->Add(this->lbContact);
			this->panelContact->Controls->Add(this->label4);
			this->panelContact->Controls->Add(this->lbVu);
			this->panelContact->Controls->Add(this->lbSon);
			this->panelContact->Controls->Add(this->lbNguoiphattrien);
			this->panelContact->Location = System::Drawing::Point(12, 553);
			this->panelContact->Margin = System::Windows::Forms::Padding(0);
			this->panelContact->Name = L"panelContact";
			this->panelContact->Size = System::Drawing::Size(1059, 118);
			this->panelContact->TabIndex = 2;
			// 
			// lbMailVu
			// 
			this->lbMailVu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbMailVu->AutoSize = true;
			this->lbMailVu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(163)));
			this->lbMailVu->Location = System::Drawing::Point(850, 65);
			this->lbMailVu->Name = L"lbMailVu";
			this->lbMailVu->Size = System::Drawing::Size(175, 15);
			this->lbMailVu->TabIndex = 7;
			this->lbMailVu->Text = L"Nguyenduyvu_t59@hus.edu.vn";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(163)));
			this->label5->Location = System::Drawing::Point(824, 65);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(20, 15);
			this->label5->TabIndex = 6;
			this->label5->Text = L"or";
			// 
			// lbMailSon
			// 
			this->lbMailSon->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbMailSon->AutoSize = true;
			this->lbMailSon->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lbMailSon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(163)));
			this->lbMailSon->Location = System::Drawing::Point(850, 41);
			this->lbMailSon->Name = L"lbMailSon";
			this->lbMailSon->Size = System::Drawing::Size(183, 15);
			this->lbMailSon->TabIndex = 5;
			this->lbMailSon->Text = L"Nguyenvanson_t59@hus.edu.vn";
			// 
			// lbContact
			// 
			this->lbContact->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->lbContact->AutoSize = true;
			this->lbContact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(163)));
			this->lbContact->Location = System::Drawing::Point(717, 15);
			this->lbContact->Name = L"lbContact";
			this->lbContact->Size = System::Drawing::Size(319, 16);
			this->lbContact->TabIndex = 4;
			this->lbContact->Text = L"Có thắc mắc xin vui lòng liên hệ với chúng tôi:";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(163)));
			this->label4->Location = System::Drawing::Point(71, 84);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 15);
			this->label4->TabIndex = 3;
			this->label4->Text = L"- Nguyễn Ngọc Phương\r\n";
			// 
			// lbVu
			// 
			this->lbVu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->lbVu->AutoSize = true;
			this->lbVu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(163)));
			this->lbVu->Location = System::Drawing::Point(71, 59);
			this->lbVu->Name = L"lbVu";
			this->lbVu->Size = System::Drawing::Size(97, 15);
			this->lbVu->TabIndex = 2;
			this->lbVu->Text = L"- Nguyễn Duy Vũ";
			// 
			// lbSon
			// 
			this->lbSon->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->lbSon->AutoSize = true;
			this->lbSon->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(163)));
			this->lbSon->Location = System::Drawing::Point(71, 35);
			this->lbSon->Name = L"lbSon";
			this->lbSon->Size = System::Drawing::Size(105, 15);
			this->lbSon->TabIndex = 1;
			this->lbSon->Text = L"- Nguyễn Văn Sơn";
			// 
			// lbNguoiphattrien
			// 
			this->lbNguoiphattrien->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left));
			this->lbNguoiphattrien->AutoSize = true;
			this->lbNguoiphattrien->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(163)));
			this->lbNguoiphattrien->Location = System::Drawing::Point(15, 11);
			this->lbNguoiphattrien->Name = L"lbNguoiphattrien";
			this->lbNguoiphattrien->Size = System::Drawing::Size(206, 16);
			this->lbNguoiphattrien->TabIndex = 0;
			this->lbNguoiphattrien->Text = L"Hệ thống được phát triển bởi:";
			// 
			// splitContainerLoad
			// 
			this->splitContainerLoad->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainerLoad->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->splitContainerLoad->Location = System::Drawing::Point(12, 133);
			this->splitContainerLoad->Name = L"splitContainerLoad";
			// 
			// splitContainerLoad.Panel1
			// 
			this->splitContainerLoad->Panel1->AllowDrop = true;
			this->splitContainerLoad->Panel1->BackColor = System::Drawing::Color::White;
			this->splitContainerLoad->Panel1->Controls->Add(this->btnBackimg);
			this->splitContainerLoad->Panel1->Controls->Add(this->btnNextimg);
			this->splitContainerLoad->Panel1->Controls->Add(this->panelLoadimg);
			this->splitContainerLoad->Panel1->Controls->Add(this->lbHinhanh);
			// 
			// splitContainerLoad.Panel2
			// 
			this->splitContainerLoad->Panel2->BackColor = System::Drawing::Color::White;
			this->splitContainerLoad->Panel2->Controls->Add(this->label1);
			this->splitContainerLoad->Panel2->Controls->Add(this->label8);
			this->splitContainerLoad->Size = System::Drawing::Size(1059, 411);
			this->splitContainerLoad->SplitterDistance = 714;
			this->splitContainerLoad->TabIndex = 3;
			// 
			// btnBackimg
			// 
			this->btnBackimg->BackColor = System::Drawing::Color::Gainsboro;
			this->btnBackimg->FlatAppearance->BorderSize = 0;
			this->btnBackimg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBackimg->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnBackimg.Image")));
			this->btnBackimg->Location = System::Drawing::Point(24, 189);
			this->btnBackimg->Name = L"btnBackimg";
			this->btnBackimg->Size = System::Drawing::Size(32, 32);
			this->btnBackimg->TabIndex = 0;
			this->btnBackimg->UseVisualStyleBackColor = false;
			this->btnBackimg->Click += gcnew System::EventHandler(this, &frmGioiThieu::btnBackimg_Click);
			// 
			// btnNextimg
			// 
			this->btnNextimg->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnNextimg->BackColor = System::Drawing::Color::Gainsboro;
			this->btnNextimg->FlatAppearance->BorderSize = 0;
			this->btnNextimg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNextimg->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnNextimg.Image")));
			this->btnNextimg->Location = System::Drawing::Point(646, 189);
			this->btnNextimg->Name = L"btnNextimg";
			this->btnNextimg->Size = System::Drawing::Size(32, 32);
			this->btnNextimg->TabIndex = 2;
			this->btnNextimg->UseVisualStyleBackColor = false;
			this->btnNextimg->Click += gcnew System::EventHandler(this, &frmGioiThieu::btnNextimg_Click);
			// 
			// panelLoadimg
			// 
			this->panelLoadimg->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelLoadimg->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panelLoadimg.BackgroundImage")));
			this->panelLoadimg->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panelLoadimg->Location = System::Drawing::Point(92, 48);
			this->panelLoadimg->Name = L"panelLoadimg";
			this->panelLoadimg->Size = System::Drawing::Size(521, 326);
			this->panelLoadimg->TabIndex = 1;
			// 
			// lbHinhanh
			// 
			this->lbHinhanh->AutoSize = true;
			this->lbHinhanh->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(163)));
			this->lbHinhanh->Location = System::Drawing::Point(152, 9);
			this->lbHinhanh->Name = L"lbHinhanh";
			this->lbHinhanh->Size = System::Drawing::Size(389, 24);
			this->lbHinhanh->TabIndex = 0;
			this->lbHinhanh->Text = L"Một số hình ảnh về Hệ thống của chúng tôi";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(163)));
			this->label1->Location = System::Drawing::Point(7, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(323, 330);
			this->label1->TabIndex = 2;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(163)));
			this->label8->Location = System::Drawing::Point(12, 17);
			this->label8->Margin = System::Windows::Forms::Padding(0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(317, 28);
			this->label8->TabIndex = 1;
			this->label8->Text = L"HỆ THỐNG QUẢN LÝ BÃI GIỮ XE SPS";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// frmGioiThieu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(230)), static_cast<System::Int32>(static_cast<System::Byte>(230)), 
				static_cast<System::Int32>(static_cast<System::Byte>(230)));
			this->ClientSize = System::Drawing::Size(1083, 680);
			this->Controls->Add(this->splitContainerLoad);
			this->Controls->Add(this->panelContact);
			this->Controls->Add(this->panelGioithieu);
			this->Controls->Add(this->pnTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frmGioiThieu";
			this->Text = L"frmGioiThieu";
			this->pnTitle->ResumeLayout(false);
			this->pnTitle->PerformLayout();
			this->panelGioithieu->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->panelContact->ResumeLayout(false);
			this->panelContact->PerformLayout();
			this->splitContainerLoad->Panel1->ResumeLayout(false);
			this->splitContainerLoad->Panel1->PerformLayout();
			this->splitContainerLoad->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainerLoad))->EndInit();
			this->splitContainerLoad->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void btnNextimg_Click(System::Object^  sender, System::EventArgs^  e) {
				if (back<6)
				{
					back++;
					String^ im=L"step"+back;
					img(im);
				}
				 
			 }
	private: System::Void btnBackimg_Click(System::Object^  sender, System::EventArgs^  e) {
				if (back>1)
				{
					back=back-1;
					String^ im=L"step"+back;
					img(im);
				}
				 
			 }
	private: System::Void img(String^ i){
			panelLoadimg->BackgroundImage = Image::FromFile(L"image/"+i +L".png");
			 }
};
}
