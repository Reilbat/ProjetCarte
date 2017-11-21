#include "Joueur.h"

//cons + destr
Joueur::Joueur(string _nom,int _solde) : m_nom(_nom),m_vie(200),m_solde(_solde)
  {
  }
Joueur::~Joueur()
  {
  }
//manip coll
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
   for(int i=0;i<collection.size();i++)
    {
      collection[i]->affichage();
    }
 }
void Joueur::creer_deck_alea()
    {

    }
//access
string Joueur::get_name()    const
  {
      return m_nom;
  }
int Joueur::get_solde()      const
  {
      return m_solde;
  }
//fonction
void Joueur::affichage()
  {
    cout<<"-nom : "<<get_name()<<" (argent sur le compte : "<<get_solde()<<" grains d'ADN )"<<endl;

  }
