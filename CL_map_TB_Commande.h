#pragma once

#ifdef CL_MAP_TB_COMMANDE //ifnedf
#define CL_MAP_TB_COMMANDE

using namespace System;

namespace NS_composants {

	ref class CL_map_TB_Commande
	{
		int m_ID_DATE_COMMANDE;
		int m_ID_DATE_EMISSION;
		int m_ID_ADRESSE_LIV;
		int m_ID_ADRESSE_FAC;

		int m_MONTANT_HT;
		int m_MONTANT_TVA;

	public:
		CL_map_TB_Commande();
		String^ SELECT();
		String^ INSERT();
		String^ UPDATE();
		String^ DELETE();

		void setID_DATE_COMMANDE(int ID_DATE_COMMANDE);
		void setID_DATE_EMISSION(int ID_DATE_EMISSION);
		void setID_ADRESSE_LIV(int ID_ADRESSE_LIV);
		void setID_ADRESSE_FAC(int ID_ADRESSE_FAC);
		void setMONTANT_HT(int MONTANT_HT);
		void setMONTANT_TVA(int MONTANT_TVA);
		
		int getID_ADRESSE();
		int getID_DATE_EMISSION();
		int getID_ADRESSE_LIV();
		int getID_ADRESSE_FAC();
		int getID_MONTANT_HT();
		int getID_MONTANT_TVA();

	};
}
#endif