#include "pch.h"
#include "CL_map_TB_Adresse.h"

NS_composants::CL_map_TB_Adresse::CL_map_TB_Adresse()
{
    setID_ADRESSE(0);
    setPays("");
    setCp(0);
    setRue("");
    setVille("");
}

String^ NS_composants::CL_map_TB_Adresse::SELECT()
{
    return "";
}

String^ NS_composants::CL_map_TB_Adresse::INSERT()
{
    return "";
}

String^ NS_composants::CL_map_TB_Adresse::UPDATE()
{
    return "";
}

String^ NS_composants::CL_map_TB_Adresse::DELETE()
{
    return "";
}

void NS_composants::CL_map_TB_Adresse::setID_ADRESSE(int ID_ADRESSE)
{
    if (ID_ADRESSE < 0)
        m_ID_ADRESSE = ID_ADRESSE;
    else
        m_ID_ADRESSE = 0;
}

void NS_composants::CL_map_TB_Adresse::setPays(String^ pays)
{
    m_pays = pays;
}

void NS_composants::CL_map_TB_Adresse::setVille(String^ ville)
{
    m_ville = ville;
}

void NS_composants::CL_map_TB_Adresse::setCp(int cp)
{
    m_cp = cp;
}

void NS_composants::CL_map_TB_Adresse::setRue(String^ rue)
{
    m_rue = rue;
}

int NS_composants::CL_map_TB_Adresse::getID_ADRESSE()
{
    return m_ID_ADRESSE;
}

String^ NS_composants::CL_map_TB_Adresse::getPays()
{
    return m_pays;
}

String^ NS_composants::CL_map_TB_Adresse::getVille()
{
    return m_ville;
}

int NS_composants::CL_map_TB_Adresse::setCp()
{
    return m_cp;
}

String^ NS_composants::CL_map_TB_Adresse::getRue()
{
    return m_rue;
}
