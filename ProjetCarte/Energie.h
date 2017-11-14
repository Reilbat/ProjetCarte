#pragma once
#include 'Cartes.h'
using namespace std;

class Energie : public Carte
{
private:
	int m_type; //1-MST 2-SANG 3-GENETIQUE 4-SALIVE
	int m_point; 

public:
	Energie();
	Energie(string _name,string _description,int _type, int _point);
	~Energie();
};