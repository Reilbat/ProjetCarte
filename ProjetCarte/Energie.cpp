#include <iostream>
#include "Energie.h"

using namespace std;

Energie::Energie(string _nom, string _description, int _type, int _point)
	:m_type(_type), m_point(_point), Carte(_nom, _description)
{

}
Energie::~Energie()
{

}
int Energie::get_type() 
{
	return m_type;
}
int Energie::get_point()  
{
	return m_point;
}
string Energie::type() 
{
	string name_type;
	if (get_type() == 1) { name_type = "MST"; }
	if (get_type() == 2) { name_type = "sang"; }
	if (get_type() == 3) { name_type = "genetique"; }
	if (get_type() == 4) { name_type = "salive"; }
	return name_type;
}
void Energie::affichage() 
{
	Carte::affichage();
	//cout << "ajoute " << get_point() << " points d'energie " << type() << endl;
}
