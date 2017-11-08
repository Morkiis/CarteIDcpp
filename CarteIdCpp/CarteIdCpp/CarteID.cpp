#include "CarteID.h"

mCarteID::mCarteID()
{
	setID(0);
}

mCarteID::~mCarteID()
{
}

int mCarteID::getID()
{
	return ID;
}

string mCarteID::getnom()
{
	return string(nom);
}

string mCarteID::getprenom()
{
	return string(prenom);
}

string mCarteID::getadresse()
{
	return string(adresse);
}

string mCarteID::getCP()
{
	return string(CP);
}

string mCarteID::getville()
{
	return string(ville);
}

void mCarteID::setID(int ID)
{
	this->ID = ID;
}

void mCarteID::setnom(string nom)
{
	this->nom = nom;
}

void mCarteID::setprenom(string prenom)
{
	this->prenom = prenom;
}

void mCarteID::setadresse(string adresse)
{
	this->adresse = adresse;
}

void mCarteID::setCP(string CP)
{
	this->CP = CP;
}

void mCarteID::setville(string ville)
{
	this->ville = ville;
}

void mCarteID::affiche()
{
	cout << "ID: " << getID() << endl;
	cout << "Nom: " << getnom() << endl;
	cout << "Prenom: " << getprenom() << endl;
	cout << "Adresse: " << getadresse() << endl;
	cout << "CP: " << getCP() << endl;
	cout << "Ville: " << getville() << endl;

}

void mCarteID::suppression()
{
	setID(0);
	setadresse("");
	setCP("");
	setnom("");
	setprenom("");
	setville("");
}
