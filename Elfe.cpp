#include "Elfe.h"

Elfe::Elfe(std::string nom)
{
	this->nom = nom;
}
std::string Elfe::saluer() const
{
	return nom;
}
std::string Elfe::getRace() const
{
	return "Elfe";

}
