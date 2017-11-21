#include "Menu.h"
#include "Joueur.h"

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


Creature VIH("VIH", "fleau", 12, 1, 
	"suppresion de anticorps", "", 5, 1, 3,
	"sida", "", 5, 1, 8);
Creature hepatite("hepatite", "", 5, 1,  //nom,description,pv,etat
	"nausee", "", 5, 1, 2,  //nom,description,cout,type,degat
	"jaunisse", "", 5, 1, 5);
Energie gene("facteur genetique", "transmition hereditaire", 3, 15);

void nouvelle_collection(Joueur bob) //fonction qui alloue une collection 
{
	//vector<string> collection;

	int collecrand = 0;
	//srand(time(0));
	uniform_int_distribution<int> distribution(minimum, maximum);
	std::default_random_engine generateur;
	//const auto tirage = 20;
	//for (auto i = 0; i < tirage; ++i) {
		collecrand = distribution(generateur);
		//cout << collecrand << endl;
	//}
		string nomfichier = "test.txt";
		ofstream monFlux(nomfichier.c_str());

	if (collecrand == 1)
	{
		bob.ajout_carte(&VIH);
		monFlux << "VIH Hepatite Gene";
		bob.ajout_carte(&hepatite);
		bob.ajout_carte(&VIH);
		bob.ajout_carte(&gene);
		bob.affichage_coll();
		monFlux << endl;
	}
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
	}
	/*if (collecrand == 4)
	{
		collection.push_back(&VIH);
		collection.push_back(&gene);
		collection.push_back(&VIH);
		//collection.push_back(&VIH);
		for (int i = 0; i < 4; i++)
		{
			cout << collection[i] << endl;
		}
	}*/
}

void affiche_creerJoueur() //parametre du Joueur : nom, point de vie, 
{
	int choix(0);
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
	Joueur lucas(nomJoueur, solde);
	system("PAUSE");
	system("cls");
	cout << "Un deck vous a ete donne aleatoirement. Vous disposez des cartes suivantes :" << endl;
	nouvelle_collection(lucas);
	system("PAUSE");
	magasin(lucas);


	//Joueur poto(nomJoueur, solde);
	//magasin();
	//poto.affichage_coll();

	//creer joueur avec son nom avec class joueur
	//ensuite distribution de cartes et création d'un deck aléatoire
	//pas oublier d'afficher le deck et la collection avant de joueur et dans l'affichage
}

//hepatite
int fchoix1(bool confirmation, Joueur jou) 
{	
	string nomfichier = "test.txt";
	ofstream monFlux(nomfichier, ios::app);

	cout << "Vous souhaitez acheter Carte prem's a 500p ; confirmer ?" << endl;
	cout << "1. OUI " << endl;
	cout << "2. NON " << endl;
	cin >> confirmation;
	//Joueur lucas("lucas", 6000);
	if (confirmation == true)
	{
		cout << "Achat effectue " << endl; //transfert a faire
		jou.ajout_carte(&hepatite);
		monFlux << "Hepatite achete";
		jou.affichage_coll();
		return(false);
	}
	else 
		cout << "achat abandonne" << endl; // retour menu
		
	
} 

//VIH
int fchoix2(bool confirmation, Joueur jou)
{
	cout << "Vous souhaitez acheter Carte sec a 800p ; confirmer ?" << endl;
	cout << " 1. OUI" << endl;
	cout << " 2. NON" << endl;
	cin >> confirmation;
	if (confirmation == true)
	{
		cout << "Achat effectue " << endl;
		//poto.ajout_carte(&VIH);
		return(false);
	}
	else
		cout << "achat abandonne" << endl;
} 

//gene
int fchoix3(bool confirmation, Joueur jou)
{
	cout << "Vous souhaitez acheter Carte  a 700p ; confirmer ?" << endl;
	cout << " 1. OUI" << endl;
	cout << " 2. NON" << endl;
	cin >> confirmation;
	if (confirmation == true)
	{
		cout << "OK" << endl;
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

int affichage_menu_debut() //affichage des possibilité avec choix : 
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
		affiche_creerJoueur();
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