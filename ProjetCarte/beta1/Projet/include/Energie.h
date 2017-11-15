#ifndef ENERGIE_H
#define ENERGIE_H
#include "Carte.h"


class Energie : public Carte
{
        private:
    int m_type;         //1-MST   2-SANG  3-GENETIQUE  4-SALIVE
    int m_nbre_pts;     //nombre de points d'energie de la cartes

        public:
    Energie(string _nom,string _description,int _type,int _nbre_pts);
    virtual ~Energie();
    int get_type()  const;
    int get_pts()   const;
    virtual void affichage();
    string type() const;
};
#endif // ENERGIE_H
