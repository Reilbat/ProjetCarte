#include "Menu.h"
#include "Joueur.h"
#include "bibliotheque.h"

using namespace Rac;


/*void affiche_Joueur()
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
			ok = true;
		}
		else
			c += 1;

	}
	affiche_ParamJoueur();
}*/


void affiche_creerJoueur(vector<Joueur> tab_joueur) //parametre du Joueur : nom, point de vie, 
{
	int choix(0);
	int taille(0);
	system("cls");
	string nomJoueur;
	cout << "Creer Joueur" << endl;
	cout << endl;
	//cout << endl;
	cout << "Votre nom sera : ";
	cin >> nomJoueur;
	system("PAUSE");
	system("cls");
	cout << " Votre nom est : " << nomJoueur << endl;
	cout << "Votre nombre de point de vie est : " << vieJoueur << endl;
	cout << "Votre solde est : " << solde << endl;

	tab_joueur.push_back(Joueur(nomJoueur, solde));
	taille = tab_joueur.size();

	system("PAUSE");
	system("cls");
	cout << "Un deck vous a ete donne aleatoirement. Vous disposez des cartes suivantes :" << endl;
	tab_joueur[taille].nouvelle_collection();
	system("PAUSE");
	//magasin(tab_joueur[taille]);

	//creer joueur avec son nom avec class joueur
	//ensuite distribution de cartes et création d'un deck aléatoire
	//pas oublier d'afficher le deck et la collection avant de joueur et dans l'affichage
}

//hepatite
int fchoix1(bool confirmation, Joueur jou) 
{	
	string nomfichier = "test.txt";
	ofstream monFlux(nomfichier, ios::app);
	int sold = 0;

	cout << "Vous souhaitez acheter Papillomavirus a 500p ; confirmer ?" << endl;
	cout << "1. OUI " << endl;
	cout << "2. NON " << endl;
	cin >> confirmation;
	//Joueur lucas("lucas", 6000);
	if (confirmation == true)
	{
		cout << "Achat effectue " << endl; //transfert a faire
		jou.ajout_carte(&papillomavirus);
		monFlux << "Papillomavirus achete";
		sold = jou.get_solde();
		sold = sold - 500;
		cout << "nouveau solde : "<<  sold << endl;
		jou.affichage_coll();
		return(false);
	}
	else 
		cout << "achat abandonne" << endl; // retour menu
		
	
} 

//VIH
int fchoix2(bool confirmation, Joueur jou)
{
	string nomfichier = "test.txt";
	ofstream monFlux(nomfichier, ios::app);
	int sold = 0;

	cout << "Vous souhaitez acheter Variolle a 800p ; confirmer ?" << endl;
	cout << " 1. OUI" << endl;
	cout << " 2. NON" << endl;
	cin >> confirmation;
	if (confirmation == true)
	{
		cout << "Achat effectue " << endl;
		jou.ajout_carte(&variolle);
		monFlux << "Variolle achete";
		sold = jou.get_solde();
		sold = sold - 800;
		cout << "nouveau solde : " << sold << endl;
		jou.affichage_coll();
		return(false);
	}
	else
		cout << "achat abandonne" << endl;
} 

//gene
int fchoix3(bool confirmation, Joueur jou)
{

	string nomfichier = "test.txt";
	ofstream monFlux(nomfichier, ios::app);
	int sold = 0;

	cout << "Vous souhaitez acheter Grippe a 700p ; confirmer ?" << endl;
	cout << " 1. OUI" << endl;
	cout << " 2. NON" << endl;
	cin >> confirmation;
	if (confirmation == true)
	{
		cout << "OK" << endl;
		jou.ajout_carte(&grippe);
		monFlux << "Grippe achete";
		sold = jou.get_solde();
		sold = sold - 700;
		cout << "nouveau solde : " << sold << endl;
		jou.affichage_coll();
		return(false);
	}
	else
		cout << "NON" << endl;
}

int magasin(Joueur jou) //permet l'achat de cartes
{
	int choix = 0;
	bool magasin = true; //sert a rien
	bool confirmation = false;

	
	system("cls");
	cout << "Bienvenue dans le Magasin !" << endl;
	cout << "Ici Acheter de nouvelles cartes pour votre deck " << endl;
	cout << endl;
	cout << " 1. Cartes prem's : 500p" << endl;
	cout << " 2. Cartes sec : 800p " << endl;
	cout << " 3. Cartes : 700p" << endl;
	cin >> choix; //erreur ici pour si non choix 1

	if (choix == 1) //modifier nom carte + faire le transfert
	{
		system("cls");
		magasin = fchoix1(confirmation, jou);
	}
	if (choix == 2)
	{
		system("cls");
		magasin = fchoix2(confirmation, jou);
	}
	if (choix == 3)
	{
		system("cls");
		magasin = fchoix3(confirmation, jou);
	}


	return 0;
}

int affichage_menu_debut(vector<Joueur> joueurs) //affichage des possibilité avec choix : 
{
	int choix(0);

	cout << "-------------- MENU ---------------" << endl;
	cout << "1. Joueur existant" << endl;
	cout << "2. Creer un joueur" << endl;
	//cout << "3. JOUER" << endl;
	//cout << "4. Magasin " << endl;
	//cout << "5. Quitter" << endl;
	cin >> choix;

	if (choix == 2)
	{
		affiche_creerJoueur(joueurs);
	}
	
	//if (choix == 4)
	//{
	//	magasin(jou);
	//}
	/*
	if (choix == 1)
	{
		//affiche_joueur();
	}
	if (choix == 3)
	{
		//JOUEUR();
	}*/
	else
		return 0;

}