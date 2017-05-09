#include "StdAfx.h"
#include "DBUtils.h"

using namespace SmartParkingSystem;

DBUtils::DBUtils()
{
}

bool DBUtils::OpenConnection()
{
	bool is_connected = false;
	conn = connect::GetInstance()->getConnection();
	try {
		conn->Open();
		is_connected = true;
	}
	catch (Exception^) {
		is_connected = false;
	}
	return is_connected;
}

MySqlConnection ^ DBUtils::getConnection()
{
	return connect::GetInstance()->getConnection();
	// TODO: insert return statement here
}

void DBUtils::disConnect()
{
	if (conn != nullptr && conn->State == ConnectionState::Open)
		conn->Close();
}

DataTable ^ DBUtils::getDataTable(String ^ sql)
{
	OpenConnection();
	MySqlDataAdapter^ da = gcnew MySqlDataAdapter(sql, conn);
	DataTable^ dt = gcnew DataTable();
	da->Fill(dt);
	disConnect();
	return dt;
	// TODO: insert return statement here
}

void DBUtils::ExcuteNonQuery(String ^ sql)
{
	//throw gcnew Exception();
	OpenConnection();
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	cmd->ExecuteNonQuery();
	disConnect();
}
MySqlDataReader^ DBUtils::getDataReader(String ^ sql)
{
	OpenConnection();
	MySqlCommand^ cmd = gcnew MySqlCommand(sql, conn);
	MySqlDataReader^ dr = cmd->ExecuteReader();
	return dr;
	
}
void DBUtils::loadData(DataGridView ^dgv, String ^sql)
{
	DataView ^dv = gcnew DataView(DBUtils::getDataTable(sql));
	dgv->DataSource = dv;
}
void DBUtils::loadDataSort(DataGridView^ dgv, String^ sql){
	OpenConnection();
	MySqlCommand^ da = gcnew MySqlCommand(sql, conn);
	MySqlDataAdapter^ sda;
	try
	{
		sda=gcnew MySqlDataAdapter();
		sda->SelectCommand=da;
		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);
		BindingSource^ bSource=gcnew BindingSource();
		
		bSource->DataSource=dt;
		dgv->DataSource=bSource;
		sda->Update(dt);
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->Message);
	}finally{
		disConnect();
	}
}


void DBUtils::loadData_To_Collection(TextBox ^txt, String ^sql, String ^type)
{
	MySqlDataReader ^dr = DBUtils::getDataReader(sql);
	AutoCompleteStringCollection ^auto_str = gcnew AutoCompleteStringCollection();
	if (dr != nullptr) {
		while (dr->Read()) {
			auto_str->Add(dr[type]->ToString());
		}
	}
	txt->AutoCompleteMode = AutoCompleteMode::SuggestAppend;
	txt->AutoCompleteSource = AutoCompleteSource::CustomSource;
	txt->AutoCompleteCustomSource = auto_str;
	dr->Close();
}
