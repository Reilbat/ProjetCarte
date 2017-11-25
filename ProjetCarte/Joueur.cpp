#include "Joueur.h"
#include <random>
#include <fstream>
#include <ctime>


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
void nouvelle_collection() //fonction qui alloue une collection 
{

	int collecrand = 0;
	//string bob = tab_joueur[taille].get_name();

	uniform_int_distribution<int> distribution(1, 4);
	std::default_random_engine generateur;
	collecrand = distribution(generateur);
	string nomfichier = "test.txt";
	ofstream monFlux(nomfichier.c_str());

	if (collecrand == 1)
	{
		ajout_carte(&VIH);
		monFlux << "VIH Hepatite Gene";
		ajout_carte(&hepatite);
		ajout_carte(&VIH);
		ajout_carte(&gene);
		affichage_coll();
		monFlux << endl;
	}/*
	if (collecrand == 2)
	{
		bob.ajout_carte(&gene);
		monFlux << "gene Hepatite VIH gene";
		bob.ajout_carte(&hepatite);
		bob.ajout_carte(&VIH);
		bob.ajout_carte(&gene);
		bob.affichage_coll();
		monFlux << endl;
	}
	if (collecrand == 3)
	{
		bob.ajout_carte(&gene);
		monFlux << "gene Hepatite VIH VIH";
		bob.ajout_carte(&hepatite);
		bob.ajout_carte(&VIH);
		bob.ajout_carte(&VIH);
		bob.affichage_coll();
		monFlux << endl;
	}*/
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