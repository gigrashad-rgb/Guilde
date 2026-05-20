#pragma once
#include <string>
#include <iostream>
#include "Membre.h"
class Elfe :public Membre
{
private:
	std::string nom;
public:
	Elfe(std::string nom);
	std::string saluer() const override;
	std::string getRace() const override;
};

