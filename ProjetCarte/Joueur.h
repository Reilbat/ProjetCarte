#pragma once
#include <vector>
#include <stack>
#include "Cartes.h"

using namespace std;

class Joueur 
{
private:
	string m_nom_Joueur;
	int m_hp_Joueur;
	int m_solde;
	vector<Carte> collection;
	//stack<Carte>Deck;
public:

	void ajout_carte(Carte add);
	void set_coll(Carte add);
	void affichage_coll();
	void affichage();
	Joueur(string _nom, int _solde);
	~Joueur();

};