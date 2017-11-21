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
public:
	Carte(string _nom, string _description);
	Carte();

	virtual ~Carte();            // "virtual" : utilisation du polymorphisme
	string get_nom() const;
	string get_description() const;
	virtual void affichage();
};
#endif
