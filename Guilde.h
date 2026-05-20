#pragma once
#include <vector>
#include "Membre.h"
#include <iostream>
#include <string>
#include <fstream>
class Guilde
{
	private:
		std::string	nom;
		std::vector<Membre*> membre;

public:
	Guilde(std::string nom);
	void limoger(std::string nom);
	void accueillir(Membre* noob);
	std::string getNom() const;
	void setNom(std::string nom);
	std::string sePresenter() const;
	void sauver() const;

};

