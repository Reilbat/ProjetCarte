#ifndef JOUEUR_H
#define JOUEUR_H
#include "Cartes.h"
#include "Creatures.h"
#include "Energie.h"

class Joueur
{
private:
	string m_nom;
	int m_vie;            //vie du joueur en combat
	int m_solde;          //argent dans le portefeuille
	vector<Carte*> collection;    //collection de pointeurs de cartes
								  //important pour utiliser le polymorphisme
public:
	Joueur(string _nom, int _solde);
	~Joueur();
	void ajout_carte(Energie *add);   //ajout d'une carte energie
	void ajout_carte(Creature *add);  //ajout d'une carte creature

	void affichage();
	void affichage_coll();

	//accesseur
	string get_name();
	int get_solde();
};

#endif // JOUEUR_H
