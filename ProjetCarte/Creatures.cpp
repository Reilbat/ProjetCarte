#include <iostream>
#include "Creatures.h"
#include <string>

using namespace std;

//CLASSE CREATURE

//CONSTRUCTEUR SURCHARGE
Creature::Creature(string _nom, string _description, int _HP, int _etat,
	string _nom_attaque_1, string _description_attaque_1, int _nbe_pt_attaque_1, int _nature_pt_attaque_1, int _degat_attaque_1,
	string _nom_attaque_2, string _description_attaque_2, int _nbe_pt_attaque_2, int _nature_pt_attaque_2, int _degat_attaque_2)
	:Carte(_nom, _description), m_HP(_HP), m_etat(_etat),
	m_nom_attaque_1(_nom_attaque_1), m_description_attaque_1(_description_attaque_1), m_nbe_pt_attaque_1(_nbe_pt_attaque_1), m_nature_pt_attaque_1(_nature_pt_attaque_1), m_degat_attaque_1(_degat_attaque_1),
	m_nom_attaque_2(_nom_attaque_2), m_description_attaque_2(_description_attaque_2), m_nbe_pt_attaque_2(_nbe_pt_attaque_2), m_nature_pt_attaque_2(_nature_pt_attaque_2), m_degat_attaque_2(_degat_attaque_2)
{
}

//CONSTRUCTEUR PAR DEFAUT
Creature::Creature() :Carte(), m_HP(0), m_etat(0),
m_nom_attaque_1(), m_description_attaque_1(), m_nbe_pt_attaque_1(0), m_nature_pt_attaque_1(0), m_degat_attaque_1(0),
m_nom_attaque_2(), m_description_attaque_2(), m_nbe_pt_attaque_2(0), m_nature_pt_attaque_2(0), m_degat_attaque_2(0)
{
}

//DESTRUCTEUR
Creature::~Creature()
{
}