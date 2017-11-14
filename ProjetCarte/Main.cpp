#include "Joueur.h"

int main()
{
	Joueur lucas("lucas", 6000);
	Creature VIH("VIH", "fleau", 12, 1,
		"suppresion de anticorps", "", 5, 1, 3,
		"sida", "", 5, 1, 8);
	Creature hepatite("hepatite", "", 5, 1,  //nom,description,pv,etat
		"nausee", "", 5, 1, 2,  //nom,description,cout,type,degat
		"jaunisse", "", 5, 1, 5);
	Energie gene("facteur genetique", "transmition hereditaire", 3, 15);
	lucas.ajout_carte(VIH);
	lucas.ajout_carte(hepatite);
	lucas.ajout_carte(gene);
	lucas.affichage_coll();
	return 0;
}