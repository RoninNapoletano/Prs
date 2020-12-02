#include "pch.h"
#include "CL_CAD.h"


using namespace NS_Composants;

NS_Composants::CL_CAD::CL_CAD(void)
{
	m_string_requete = "";
	m_string_connexion =
		"data source=" + "DESKTOP-2TU7MP2" + ";" //Nom BDD 
		"initial catalog=" + "PROJET_POO1" + ";"			 //Nom Server
		"integrated security = true" + ";"
		;
	m_objetConnection = gcnew SqlConnection(m_string_connexion);
	m_objetCommand = gcnew SqlCommand(m_string_requete, m_objetConnection);
	m_objetCommand->CommandType = CommandType::Text;
	m_DS = gcnew DataSet();

}



void NS_Composants::CL_CAD::setSQL(String^ string_requete)
{
	if (string_requete == "")
		m_string_requete = "";
	else
		m_string_requete = string_requete;

}



int NS_Composants::CL_CAD::actionRowsID(String^ string_requete)
{
	int ID;

	setSQL(string_requete);
	m_objetCommand->CommandText = m_string_requete;
	m_objetConnection->Open();
	ID = Convert::ToInt32(m_objetCommand->ExecuteScalar());
	m_objetConnection->Close();
	return ID;

}

void NS_Composants::CL_CAD::actionRows(String^ string_requete)
{
	setSQL(string_requete);
	m_objetCommand->CommandText = m_string_requete;
	m_objetConnection->Open();
	m_objetCommand->ExecuteNonQuery();
	m_objetConnection->Close();
}


DataSet^ NS_Composants::CL_CAD::getRows(String^ requete_sql, String^ dataTableName)
{
	m_DS->Clear();
	setSQL(requete_sql);
	m_objetData = gcnew SqlDataAdapter(m_objetCommand);
	m_objetCommand->CommandText = m_string_requete;

	m_objetData->Fill(m_DS, dataTableName);

	return m_DS;
}
