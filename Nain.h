#pragma once
#include <string>
#include "Membre.h"
class Nain : public Membre
{
	private:
		std::string nom;
public:
	Nain(std::string nom);
	std::string saluer() const override;
	std::string getRace() const override;
};

