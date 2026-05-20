#include "Nain.h"
#include <iostream>
#include <string>

Nain::Nain(std::string nom)
{ 
	this->nom = nom;
}
std::string Nain::saluer() const 
{
	return nom;
}
std::string Nain::getRace() const
{
	return "Nain";

}
