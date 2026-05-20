#include "Guilde.h"
#include <iostream>
#include <string>
#include <vector>
#include<stdexcept>


Guilde::Guilde(std::string nom)
	:nom(nom)
{

}
void Guilde::limoger(std::string nom)
{
	for (int a = 0; a < membre.size(); a++) {
		if(nom == (*membre[a]).saluer()) {
			membre.erase(membre.begin() + a);
			return;
		}

	}
	throw std::runtime_error(nom + " n'est pas la pour information.");
}

void Guilde::accueillir(Membre* noob)
{
	for (int a = 0; a < membre.size(); a++) {
		if ((*noob).saluer() == (*membre[a]).saluer()) {
			std::cout << "Ce nom est deja pris" << std::endl;
			return;
		}
		
	
}
	membre.push_back(noob);
}
std::string Guilde::getNom() const 
{
	return nom;
}
void Guilde::setNom(std::string nom)
{
	this ->nom = nom;
}
std::string Guilde::sePresenter() const
{
	std::string liste = "";
	for (int i = 0; i < membre.size(); i++)

	{
		liste += (*membre[i]).saluer() + "\n";
	}
	return liste;
}

void Guilde::sauver() const
{
	std::ofstream fichier("sauver.txt");
	if (fichier.is_open()) {
		fichier << nom << std::endl;
		for (int i = 0; i < membre.size(); i++) {
			fichier << (*membre[i]).getRace() << " " << (*membre[i]).saluer() << std::endl;
		}
		fichier.close();
	}
	else {
		std::cout << "Impossible d'ouvrir le fichier." << std::endl;
	}
}

