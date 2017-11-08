#pragma once
#include <iostream>
#include <string>

using  namespace std;

class mCarteID
{
	int ID;
	string nom;
	string prenom;
	string adresse;
	string CP;
	string ville;

	//Public

public:
	mCarteID();
	~mCarteID();

	int getID();
	string getnom();
	string getprenom();
	string getadresse();
	string getCP();
	string getville();

	void setID(int ID);
	void setnom(string nom);
	void setprenom(string prenom);
	void setadresse(string adresse);
	void setCP(string CP);
	void setville(string ville);
	
	void affiche();//fonction d'affichage d'une carte
	void suppression();//fonction de suppression d'une carte
};