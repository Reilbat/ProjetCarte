#pragma once
#include <vector>
#include <stack>

using namespace std;

class Joueur :
{
private:
	string m_name_Joueur;
	int m_hp_Joueur;
	vector<Carte>Collection;
	stack<Carte>Deck;
public:

	void ajout_carte(Carte add);
	void set_coll(Carte add);
	void affichage_coll();
	Joueur(string _nom, int _solde);
	~Joueur();

};