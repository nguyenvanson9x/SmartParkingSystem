#pragma once
#define Excel  Microsoft::Office::Interop::Excel
#include "connect.h"
namespace SmartParkingSystem {
	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class DBUtils
	{
		static MySqlConnection^ conn;
	public:
		DBUtils();
		static bool OpenConnection(); //Mở kết nối tới csdl
		static MySqlConnection^ getConnection(); // Lấy đối tượng MysqlConnection
		static void disConnect(); // Ngắt kế nối
		static DataTable^ getDataTable(String^ sql); // Đưa dữ liệu từ csdl vào DataTable
		static void ExcuteNonQuery(String^ sql); // Thực hiện các câu lệnh Thêm, sửa, xóa, cập nhật
		static MySqlDataReader^ getDataReader(String^ sql); // Lấy dữ liệu từ csdl
		static void loadData(DataGridView^, String^); // Đưa dữ liệu từ csdl vào bảng DataGridView
		static void loadData_To_Collection(TextBox^, String^, String^); // Gợi ý khi nhập cho Textbox
		static void loadDataSort(DataGridView^, String^);
		static void export_to_excel(DataGridView^, String^);
	};
}


