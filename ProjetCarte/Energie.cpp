#include <iostream>
#include "Energie.h"

using namespace std;

Energie::Energie(string _nom, string _description, int _type, int _nbre_pts)
	:m_type(_type), m_nbre_pts(_nbre_pts), Carte(_nom, _description)
{

}
Energie::~Energie()
{

}
int Energie::get_type() const
{
	return m_type;
}
int Energie::get_pts()  const
{
	return m_nbre_pts;
}
string Energie::type() const
{
	string name_type;
	if (get_type() == 1) { name_type = "MST"; }
	if (get_type() == 2) { name_type = "sang"; }
	if (get_type() == 3) { name_type = "genetique"; }
	if (get_type() == 4) { name_type = "salive"; }
	return name_type;
}
void Energie::affichage() const
{
	Carte::affichage();
	cout << "ajoute " << get_pts() << " points d'energie " << type() << endl;
}
