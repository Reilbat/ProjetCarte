#include <iostream>
#include <string>
#include "Creatures.h"
#include "Energie.h"
#include "Cartes.h"
#include "Joueur.h"
#include <random>
#include <fstream>
#include <ctime>

namespace Rac
{

	using namespace std;

	const int vieJoueur = 15;
	const int solde = 2000;
	const int minimum = 1;
	const int maximum = 4;
	


	//string choix1 = "Vous souhaitez acheter Carte prem's a 500p ; confirmer ?";
	//string choix2 = "Vous souhaitez acheter Carte prem's a 500p ; confirmer ?";
	//string choix3 = "Vous souhaitez acheter Carte prem's a 500p ; confirmer ?";

	/*
	void affichage_menu_debut();
	void affiche_Joueur();
	void affiche_creerJoueur();
	void affiche_ParamJoueur();



	void affiche_Joueur()
	{
		int nbJoueur(1);
		int choix(0);
		bool ok(false);
		int c(0);
		//recuperer liste des joueurs ds le fichier et les affiches
		//nbJoueur = nomvector.length();
		for (int i = 0; i < nbJoueur; i++)
		{
			cout << i;
			cout << ". ";
			//cout << nom lu à la ieme ligne;
		}
		cin >> choix;

		while ((c < nbJoueur) || (ok != true))
		{
			if (choix == c)
			{
				//ouvrir le fichier de sauvegarde du joueur
				ok=true;
			}
			else
				c += 1;
			
		}
		affiche_ParamJoueur();
	}
	
	void affiche_creerJoueur()
	{
		int choix(0);
		string nomJoueur;
		cout << "Creer Joueur" << endl;
		cout << endl;
		cout << endl;
		cout << "Votre nom sera : " << endl;
		cin >> nomJoueur;

		//creer joueur avec son nom avec class joueur
		//ensuite distribution de cartes et création d'un deck aléatoire
		//pas oublier d'afficher le deck et la collection avant de joueur et dans l'affichage
	}


	void affichage_menu_debut() //affichage des possibilité avec choix : 
	{
		int choix(0);

		cout << "menu" << endl;
		cout << "1. Joueur existant" << endl;
		cout << "2. Creer un joueur" << endl;
		cout << "3. Joueur" << endl;
		cout << "4. Quitter" << endl;
		cin >> choix;

		if (choix == 2)
		{
			affiche_creerJoueur();
		}
		if (choix == 1)
		{
			//affiche_joueur();
		}
		if (choix == 3)
		{
			//joueur();
		}
		//else
			//return(0);

	}*/

}