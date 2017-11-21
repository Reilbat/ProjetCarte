#include "Menu.h"
#include <iostream>
#include <vector>
#include "Energie.h"
#include "Joueur.h"
#include "Creatures.h"
#include "Cartes.h"

using namespace Rac;



int main()
{
	//bool jeu=true;
	//declaration variables
	
	//Joueur* pJoueur = NULL; 
	//Joueur *lucas("lucas", 6000);
	//pJoueur->lucas;

	Creature VIH("VIH", "fleau", 12, 1,
		"suppresion de anticorps", "", 5, 1, 3,
		"sida", "", 5, 1, 8);
	Creature hepatite("hepatite", "", 5, 1,  //nom,description,pv,etat
		"nausee", "", 5, 1, 2,  //nom,description,cout,type,degat
		"jaunisse", "", 5, 1, 5);
	Energie gene("facteur genetique", "transmition hereditaire", 3, 15);

	int collecrand;
	uniform_int_distribution<int> distribution(minimum, maximum);
	std::default_random_engine generateur;
	const auto tirage = 20;
	for (auto i = 0; i < tirage; ++i) {
		collecrand = distribution(generateur);
		cout << collecrand << endl;
	}

		//nouvelle_collection(Joueur bob);
		affichage_menu_debut();
		//magasin(&lucas);
	
		

	/*appel aux fonctions pour tester code
	lucas.ajout_carte(&VIH);
	lucas.ajout_carte(&hepatite);
	lucas.ajout_carte(&gene);*/
	//lucas.affichage_coll(); 

	system("PAUSE");
	return 0;
}