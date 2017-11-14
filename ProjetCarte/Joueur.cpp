#include <iostream>
#include "Joueur.h"

using namespace std;

//CLASSE JOUEUR

//CONSTRUCTEUR SURCHARGEE
Joueur::Joueur(string _nom, int _solde) : m_nom(_nom), m_vie(200), m_solde(_solde)
{
}

//DESTRUCTEUR
Joueur::~Joueur()
{
}
//FONCTION COLLECTION
void Joueur::set_coll(Carte add)
{
	collection.push_back(add);
}
//FONCTION AJOUT CARTE
void Joueur::ajout_carte(Carte new_carte)
{
	set_coll(new_carte);
}
//FONCTION AFFICHAGE COLLECTION
void Joueur::affichage_coll()
{
	for (int i = 0; i<collection.size(); i++)
	{
		collection[&i].affichage();
	}
}
