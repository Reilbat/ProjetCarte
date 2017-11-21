

#include <iostream>
#include <vector>
#include "Energie.h"
#include "Joueur.h"
#include "Creature.h"
#include "Carte.h"

using namespace std;

void affichage_tab_joueur(vector<Joueur> tab_joueur)
  {
    for(int i=0;i<tab_joueur.size();i++)
    {
      cout<<i;
      tab_joueur[i].affichage();
    }
  }


int main()
{

bool ch1=false;
int choix_j1=-1;
int choix_j2=-1;
vector<Joueur> tab_joueur;
vector<Carte*> ref_carte;
    //declaration variables
Joueur lucas("lucas",6000);
Joueur ordi("ordi",5000);
tab_joueur.push_back(lucas);
tab_joueur.push_back(ordi);

Creature VIH(    "VIH","fleau",500,40,1,
                 "suppresion de anticorps","",5,1,3,
                 "sida","",5,1,8);
Creature hepatite("hepatite","",400,5,1,  //nom,description,prix,pv,etat
                  "nausee","",5,1,2,  //nom,description,cout,type,degat
                  "jaunisse","",5,1,5);
Creature ebola(   "ebola","maladie mortel",400,9,1,
                  "fievre ","...",5,4,4,
                  "perte sang","...",6,2,8);
Creature grippe("grippe","virus commun",50,2,1,
                  "fievre ","...",2,4,2,
                  "eternuement","...",1,4,1);
Energie gene("facteur genetique","transmition hereditaire",300,3,15);//nom,description,type,nbre de point
Energie sang("facteur sanguin","contagion par la mise en contact de 2 sang",300,2,15);
Energie mst("facteur sexuel","contagion par rapport sexuel",300,1,15);

    //appel aux fonctions pour tester code
lucas.ajout_carte(&ebola);
lucas.ajout_carte(&hepatite);
lucas.ajout_carte(&grippe);
lucas.ajout_carte(&gene);
lucas.ajout_carte(&sang);
lucas.ajout_carte(&gene);
lucas.ajout_carte(&mst);
lucas.affichage_coll();

        ///choix joueur

affichage_tab_joueur(tab_joueur);
cout<<"choix joueur"<<endl;
do{
    cin>>choix_j1;
    if(choix_j1>=0 && choix_j1<=tab_joueur.size())
    {
      ch1=true;
      cout<<"vous avez choisis "<<tab_joueur[choix_j1].get_name();
    }else{cout<<"essayer encore"<<endl;choix_j1=-1;}

  }while(ch1==false);



    return 0;
}
