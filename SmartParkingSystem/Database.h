#pragma once
namespace SmartParkingSystem {
	public ref class Database
	{
	private:
		static String ^dataSource, ^port, ^database, ^username, ^password;
	public:
		Database();

		void setUsername(String ^user)
		{
			username = user;
		}
		void setPassword(String ^pass)
		{
			password = pass;
		}
		void setPort(String ^port)
		{
			port = port;
		}
		void setDataSource(String ^source)
		{
			dataSource = source;
		}
		void setDatabase(String ^db_name)
		{
			database = db_name;
		}

		String^ getHost() {
			return dataSource;
		}
		String^ getPort() {
			return port;
		}
		String^ getDatabase() {
			return database;
		}
		String^ getUsername() {
			return username;
		}
		String^ getPassword() {
			return password;
		}
	};
}


