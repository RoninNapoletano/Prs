#pragma once

#ifndef CL_MAP_TB_CLIENT //ifnedf
#define CL_MAP_TB_CLIENT

using namespace System;

namespace NS_composants {


	ref class CL_map_TB_Client
	{
	private:
		int m_ID_CLIENT;
		int m_ID_DATE_NAISSANCE;
		int m_ID_ADRESSE_LIV;
		int m_ID_ADRESSE_FAC;

		String^ m_nom;
		String^ m_prenom;

	public:
		CL_map_TB_Client();
		String^ SELECT();
		String^ INSERT();
		String^ UPDATE();
		String^ DELETE();

		void setID_CLIENT(int ID_CLIENT);
		void setID_DATE_NAISSANCE(int ID_DATE_NAISSANCE);
		void setID_ADRESSE_LIV(int ID_ADRESSE_LIV);
		void setID_ADRESSE_FAC(int ID_ADRESSE_FAC);
		void setNom(String^ nom);
		void setPrenom(String^ prenom);

		int getID_CLIENT();
		int getID_DATE_NAISSANCE();
		int getID_ADRESSE_LIV();
		int getID_ADRESSE_FAC();
		String^ getNom();
		String^ getPrenom();

	};


};

#endif