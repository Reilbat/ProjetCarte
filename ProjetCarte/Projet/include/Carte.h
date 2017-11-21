#ifndef CARTE_H         //evite les erreurs pour l'inclusion multiples
#define CARTE_H
#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Carte
 {
        private:
   string m_nom;
   string m_description;
   int m_prix;
        public:
   Carte(string _nom,string _description,int _prix);
   Carte();

   virtual ~Carte();            // "virtual" : utilisation du polymorphisme
   string get_nom() const;
   string get_description() const;
   int    get_prix() const;
   virtual void affichage() ;
 };
#endif
