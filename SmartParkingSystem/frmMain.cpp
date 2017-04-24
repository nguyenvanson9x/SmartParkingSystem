#include "stdafx.h"
#include "frmMain.h"
using namespace SmartParkingSystem;
void frmMain::keep_form(String ^form_name)
{
	Form ^f;
	for (int i = 0; i < Application::OpenForms->Count; ++i) {
		f = Application::OpenForms[i];
		if (f->Name != form_name && f->Name != "frmMain" && f->Name != "frmLogin") {
			f->Close();
		}
		else
			f->Show();
	}
}

void frmMain::add_form_to_panel(Form ^ f)
{
	this->pnSubSystem->Controls->Clear();
	f->TopLevel = false;
	f->Dock = DockStyle::Fill;
	this->pnSubSystem->Controls->Add(f);
	f->Show();
}
