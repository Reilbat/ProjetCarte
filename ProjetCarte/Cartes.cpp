#include <iostream>
#include "Cartes.h"
#include <string>

using namespace std;

Carte::Carte(string _nom, string _description) :m_nom(_nom), m_description(_description)
{
}
Carte::Carte() : m_nom(), m_description()
{
}
Carte::~Carte()
{
}
string Carte::get_nom() 
{
	return m_nom;
}
string Carte::get_description() 
{
	return m_description;
}
void Carte::affichage() 
{
	cout << "nom : " << get_nom() << " ; description : " << get_description() << endl;
}