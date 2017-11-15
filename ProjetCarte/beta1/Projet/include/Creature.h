#ifndef CREATURE_H
#define CREATURE_H
#include "Carte.h"


class Creature : public Carte
{
        private:
   int m_pv_base;
   int m_etat;
   //attaque 1
   string m_nom_attaque_1;
   string m_description_attaque_1;
   int    m_nbe_pt_attaque_1;
   int    m_nature_pt_attaque_1;
   int    m_degat_attaque_1;
   //attaque2
   string m_nom_attaque_2;
   string m_description_attaque_2;
   int    m_nbe_pt_attaque_2;
   int    m_nature_pt_attaque_2;
   int    m_degat_attaque_2;
        public:
   Creature();
   Creature(string _nom , string _description , int _pv_base ,int _etat,
            string _nom_attaque_1,string _description_attaque_1 , int _nbe_pt_attaque_1,int _nature_pt_attaque_1,int _degat_attaque_1,
            string _nom_attaque_2,string _description_attaque_2 , int _nbe_pt_attaque_2,int _nature_pt_attaque_2,int _degat_attaque_2);
   virtual ~Creature();
   virtual void affichage();
};
#endif // CREATURE_H
