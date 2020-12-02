#include "pch.h"
#include "CL_map_TB_Client.h"

NS_composants::CL_map_TB_Client::CL_map_TB_Client()
{
    setID_ADRESSE_FAC(0);
    setID_ADRESSE_LIV(0);
    setID_CLIENT(0);
    setID_DATE_NAISSANCE(0);
    setNom("");
    setPrenom("");
}

String^ NS_composants::CL_map_TB_Client::SELECT()
{
    return "SELECT ID_CLIENT, Prenom, Nom, ID_DATE_NAISSANCE, ID_ADRESSE_LIV, ID_ADRESSE_FAC FROM TB_CLIENT";
}

String^ NS_composants::CL_map_TB_Client::INSERT()
{
    return "SELECT INTO TB_CLIENT (Prenom, Nom) VALUES (";
}

String^ NS_composants::CL_map_TB_Client::UPDATE()
{
    return "BLABLA";
}

String^ NS_composants::CL_map_TB_Client::DELETE()
{
    return "Blabla";
}

void NS_composants::CL_map_TB_Client::setID_CLIENT(int ID_CLIENT)
{
    if (ID_CLIENT < 0)
        m_ID_CLIENT = 0;
    else
        m_ID_CLIENT = ID_CLIENT;
}

void NS_composants::CL_map_TB_Client::setID_DATE_NAISSANCE(int ID_DATE_NAISSANCE)
{
    if (ID_DATE_NAISSANCE < 0)
        m_ID_DATE_NAISSANCE = 0;
    else
        m_ID_DATE_NAISSANCE = ID_DATE_NAISSANCE;
}

void NS_composants::CL_map_TB_Client::setID_ADRESSE_LIV(int ID_ADRESSE_LIV)
{
    if (ID_ADRESSE_LIV < 0)
        m_ID_ADRESSE_LIV = 0;
    else
        m_ID_ADRESSE_LIV = ID_ADRESSE_LIV;
}

void NS_composants::CL_map_TB_Client::setID_ADRESSE_FAC(int ID_ADRESSE_FAC)
{
    if (ID_ADRESSE_FAC < 0)
        m_ID_ADRESSE_FAC = 0;
    else
        m_ID_ADRESSE_FAC = ID_ADRESSE_FAC;
}

void NS_composants::CL_map_TB_Client::setNom(String^ nom)
{
    m_nom = nom;
}

void NS_composants::CL_map_TB_Client::setPrenom(String^ prenom)
{
    m_prenom = prenom;
}

int NS_composants::CL_map_TB_Client::getID_CLIENT()
{
    return m_ID_CLIENT;
}

int NS_composants::CL_map_TB_Client::getID_DATE_NAISSANCE()
{
    return m_ID_DATE_NAISSANCE;
}

int NS_composants::CL_map_TB_Client::getID_ADRESSE_LIV()
{
    return m_ID_ADRESSE_LIV;
}

int NS_composants::CL_map_TB_Client::getID_ADRESSE_FAC()
{
    return m_ID_ADRESSE_FAC;
}

String^ NS_composants::CL_map_TB_Client::getNom()
{
    return m_nom;
}

String^ NS_composants::CL_map_TB_Client::getPrenom()
{
    return m_prenom;
}
