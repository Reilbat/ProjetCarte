#pragma once
#include 'Cartes.h'

using namespace std;

class Creatures: public Carte
{
private:
	int m_HP; //point de vie
	int m_etat; //1-Deck 2-Cimetiere 3-En jeu 4-Pioche 5-collection
	//ATTAQUE 1 :
	string m_nom_att1;
	string m_description_att1;
	int m_cout_att1;
	int m_type_energie_att1;
	int m_degat_att1;

	//ATTAQUE 2 :

	string m_nom_att2;
	string m_description_att2;
	int m_cout_att2;
	int m_type_energie_att2;
	int m_degat_att2;

public:
	Creatures();
	~Creatures();
	Creatures(int _HP, int _etat, string _nom_att1, string _description_att1, int _cout_att1, int _type_energie_att1, int _degat_att1, string _nom_att2,
		string _description_att2, int _cout_att2, int _type_energie_att2, int _degat_att2);
};