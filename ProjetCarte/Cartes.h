#pragma once

using namespace std;

class Carte :
{
private:
	string m_name;
	string m_description;

public:
	Carte(); //constructeur par d�faut
	Carte(string _name, string _description); //surcharg� 
	~Carte(); //destructeur
};