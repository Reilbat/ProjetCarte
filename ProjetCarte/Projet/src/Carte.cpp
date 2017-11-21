#include "Carte.h"

using namespace std;

Carte::Carte(string _nom,string _description,int _prix):m_nom(_nom) , m_description(_description),m_prix(_prix)
{
}
Carte::Carte() : m_nom() , m_description(),m_prix(0)
{
}
Carte::~Carte()
{
}

string Carte::get_nom() const
  {
    return m_nom;
  }
string Carte::get_description() const
  {
    return m_description;
  }
int Carte::get_prix() const
  {
     return m_prix;
  }
void Carte::affichage()
  {
    cout<<"* nom : "<<get_nom()<<" ; description : "<<get_description()<<endl;
  }

