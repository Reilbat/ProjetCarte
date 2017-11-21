#include "Creatures.h"


Creature::Creature(string _nom, string _description, int _pv_base, int _etat,
	string _nom_attaque_1, string _description_attaque_1, int _nbe_pt_attaque_1, int _nature_pt_attaque_1, int _degat_attaque_1,
	string _nom_attaque_2, string _description_attaque_2, int _nbe_pt_attaque_2, int _nature_pt_attaque_2, int _degat_attaque_2)
	:Carte(_nom, _description), m_pv_base(_pv_base), m_etat(_etat),
	m_nom_attaque_1(_nom_attaque_1), m_description_attaque_1(_description_attaque_1), m_nbe_pt_attaque_1(_nbe_pt_attaque_1), m_nature_pt_attaque_1(_nature_pt_attaque_1), m_degat_attaque_1(_degat_attaque_1),
	m_nom_attaque_2(_nom_attaque_2), m_description_attaque_2(_description_attaque_2), m_nbe_pt_attaque_2(_nbe_pt_attaque_2), m_nature_pt_attaque_2(_nature_pt_attaque_2), m_degat_attaque_2(_degat_attaque_2)
{
}
Creature::Creature() : Carte(), m_pv_base(0), m_etat(0),
m_nom_attaque_1(), m_description_attaque_1(), m_nbe_pt_attaque_1(0), m_nature_pt_attaque_1(0), m_degat_attaque_1(0),
m_nom_attaque_2(), m_description_attaque_2(), m_nbe_pt_attaque_2(0), m_nature_pt_attaque_2(0), m_degat_attaque_2(0)
{
}
Creature::~Creature()
{
}

//fonctions
void Creature::affichage()
{
	Carte::affichage();
	cout << "     pv :" << getPV() << endl;
	cout << "     att1 : " << get_nom_attaque_1() << " ; necessite " << get_nbe_pt_attaque_1() << " points d'energie " << type(get_nature_pt_attaque_1())
		<< " et inflige " << get_degat_attaque_1() << " points d'ataque" << endl;
	cout << "     att1 : " << get_nom_attaque_2() << " ; necessite " << get_nbe_pt_attaque_2() << " points d'energie " << type(get_nature_pt_attaque_2())
		<< " et inflige " << get_degat_attaque_2() << " points d'ataque" << endl;
}
string Creature::type(int numero_type) const
{
	string name_type;
	if (numero_type == 1) { name_type = "MST"; }
	if (numero_type == 2) { name_type = "sang"; }
	if (numero_type == 3) { name_type = "genetique"; }
	if (numero_type == 4) { name_type = "salive"; }
	return name_type;
}
//accesseur
int Creature::getPV()      const
{
	return m_pv_base;
}
int Creature::getEtat()    const
{
	return m_etat;
}
//accesseur attaque 1
string Creature::get_nom_attaque_1()             const
{
	return m_nom_attaque_1;
}
string Creature::get_description_attaque_1()     const
{
	return m_description_attaque_1;
}
int    Creature::get_nbe_pt_attaque_1()          const
{
	return m_nbe_pt_attaque_1;
}
int    Creature::get_nature_pt_attaque_1()       const
{
	return m_nature_pt_attaque_1;
}
int    Creature::get_degat_attaque_1()           const
{
	return m_degat_attaque_1;
}
//accesseur attaque 2

string Creature::get_nom_attaque_2()             const
{
	return m_nom_attaque_2;
}
string Creature::get_description_attaque_2()     const
{
	return m_description_attaque_2;
}
int    Creature::get_nbe_pt_attaque_2()          const
{
	return m_nbe_pt_attaque_2;
}
int    Creature::get_nature_pt_attaque_2()       const
{
	return m_nature_pt_attaque_2;
}
int    Creature::get_degat_attaque_2()           const
{
	return m_degat_attaque_2;
}