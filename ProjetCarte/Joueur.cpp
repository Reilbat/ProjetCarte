#include "Joueur.h"



Joueur::Joueur(string _nom, int _solde) : m_nom(_nom), m_vie(200), m_solde(_solde)
{
}
Joueur::~Joueur()
{
}

void Joueur::ajout_carte(Energie* new_carte)
{

	collection.push_back(new_carte);

	;
}
void Joueur::ajout_carte(Creature* new_carte)
{

	collection.push_back(new_carte);
	;
}
void Joueur::affichage_coll()
{
	for (int i = 0; i<collection.size(); i++)
	{
		collection[i]->affichage();
	}
}

void Joueur::affichage()
{
	cout << "-nom : " << get_name() << " (argent sur le compte : " << get_solde() << " grains d'ADN )" << endl;

}

//access
string Joueur::get_name() 
{
	return m_nom;
}
int Joueur::get_solde()      
{
	return m_solde;
}