#include <iostream>
#include <vector>
#include <stack>
using namespace std;




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
