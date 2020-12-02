#pragma once

#ifndef CL_MAP_TB_ADRESSE //ifnedf
#define CL_MAP_TB_ADRESSE

using namespace System;

namespace NS_composants {


	ref class CL_map_TB_Adresse
	{
	private:

		int m_ID_ADRESSE;
		String^ m_pays;
		String^ m_ville;
		int m_cp;
		String^ m_rue;

	public:
		CL_map_TB_Adresse();
		String^ SELECT();
		String^ INSERT();
		String^ UPDATE();
		String^ DELETE();

		void setID_ADRESSE(int ID_ADRESSE);
		void setPays(String^ pays);
		void setVille(String^ ville);
		void setCp(int cp);
		void setRue(String^ rue);

		int getID_ADRESSE();
		String^ getPays();
		String^ getVille();
		int setCp();
		String^ getRue();



	};

}
#endif