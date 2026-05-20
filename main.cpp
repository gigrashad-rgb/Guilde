#include <iostream>
#include "Membre.h"
#include "Guilde.h"
#include "Elfe.h"
#include "Nain.h"

int main()
{
	Guilde g("Multi");
	g.accueillir(new Nain("Veggi"));
	g.accueillir(new Nain("Guili"));
	g.accueillir(new Nain("youpi"));
	std::cout << g.sePresenter() << std::endl;
	g.limoger("Guili");
	try
	{
		g.limoger("Pala");
	}
	catch (std::runtime_error& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl << g.sePresenter() << std::endl;
	g.sauver();


	return 0;
}