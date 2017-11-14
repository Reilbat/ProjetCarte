#include <iostream>
#include <vector>
#include <stack>
using namespace std;



class Carte
 {
        private:
   string m_nom;
   string m_description;
        public:
   Carte(string _nom,string _description);
   Carte();
   virtual ~Carte();
   string get_nom() const;
   string get_description() const;
   virtual void affichage() const;
 };
Carte::Carte(string _nom,string _description):m_nom(_nom) , m_description(_description)
{
}
Carte::Carte() : m_nom() , m_description()
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
void Carte::affichage() const
  {
    cout<<"nom : "<<get_nom()<<" ; description : "<<get_description()<<endl;
  }
class Energie : public Carte
{
        private:
    int m_type; //1-MST   2-SANG  3-GENETIQUE  4-SALIVE
    int m_nbre_pts;

        public:
    Energie(string _nom,string _description,int _type,int _nbre_pts);
    ~Energie();
    int get_type()  const;
    int get_pts()   const;
    void affichage() const;
    string type() const;
};
Energie::Energie(string _nom,string _description,int _type,int _nbre_pts)
        :m_type(_type),m_nbre_pts(_nbre_pts),Carte(_nom,_description)
 {

 }
Energie::~Energie()
{

}
int Energie::get_type() const
  {
    return m_type;
  }
int Energie::get_pts()  const
  {
    return m_nbre_pts;
  }
string Energie::type() const
  { string name_type;
    if(get_type()==1){name_type="MST";}
    if(get_type()==2){name_type="sang";}
    if(get_type()==3){name_type="genetique";}
    if(get_type()==4){name_type="salive";}
    return name_type;
  }
void Energie::affichage() const
  {
    Carte::affichage();
    cout<<"ajoute "<<get_pts()<<" points d'energie "<<type()<<endl;
  }


//CLASSE CREATURE

//CONSTRUCTEUR SURCHARGE
Creature::Creature(string _nom , string _description ,int _pv_base ,int _etat,
                   string _nom_attaque_1,string _description_attaque_1 , int _nbe_pt_attaque_1,int _nature_pt_attaque_1,int _degat_attaque_1,
                   string _nom_attaque_2,string _description_attaque_2 , int _nbe_pt_attaque_2,int _nature_pt_attaque_2,int _degat_attaque_2)
         :Carte(_nom,_description),m_pv_base(_pv_base),m_etat(_etat),
          m_nom_attaque_1(_nom_attaque_1), m_description_attaque_1(_description_attaque_1), m_nbe_pt_attaque_1(_nbe_pt_attaque_1), m_nature_pt_attaque_1(_nature_pt_attaque_1), m_degat_attaque_1(_degat_attaque_1),
          m_nom_attaque_2(_nom_attaque_2), m_description_attaque_2(_description_attaque_2), m_nbe_pt_attaque_2(_nbe_pt_attaque_2), m_nature_pt_attaque_2(_nature_pt_attaque_2), m_degat_attaque_2(_degat_attaque_2)
{
}

//CONSTRUCTEUR PAR DEFAUT
Creature::Creature() :Carte(), m_pv_base(0),m_etat(0),
         m_nom_attaque_1(), m_description_attaque_1(), m_nbe_pt_attaque_1(0), m_nature_pt_attaque_1(0), m_degat_attaque_1(0),
         m_nom_attaque_2(), m_description_attaque_2(), m_nbe_pt_attaque_2(0), m_nature_pt_attaque_2(0), m_degat_attaque_2(0)
{
}

//DESTRUCTEUR
Creature::~Creature()
{
}

//CLASSE JOUEUR

//CONSTRUCTEUR SURCHARGEE
Joueur::Joueur(string _nom,int _solde) : m_nom(_nom),m_vie(200),m_solde(_solde)
  {
  }

//DESTRUCTEUR
Joueur::~Joueur()
  {
  }
//FONCTION COLLECTION
void Joueur::set_coll(Carte add)
  {
    collection.push_back(add);
  }
//FONCTION AJOUT CARTE
void Joueur::ajout_carte(Carte new_carte)
  {
    set_coll(new_carte);
  }
//FONCTION AFFICHAGE COLLECTION
void Joueur::affichage_coll()
 {
   for(int i=0;i<collection.size();i++)
    {
      collection[&i].affichage();
    }
 }


