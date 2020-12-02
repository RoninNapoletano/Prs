#ifndef CL_CAD_ //ifnedf
#define CL_CAD_

using namespace System::IO;
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Xml;

namespace NS_Composants
{
	ref class CL_CAD
	{
	private:
		String^ m_string_connexion;
		String^ m_string_requete;
		
		SqlConnection^ m_objetConnection;
		SqlCommand^ m_objetCommand;
		SqlDataAdapter^ m_objetData;
		DataSet^ m_DS;

		void setSQL(String^);


	public:
		CL_CAD(void);
		int actionRowsID(String^);
		void actionRows(String^);
		DataSet^ getRows(String^, String^);




	};
}

#endif