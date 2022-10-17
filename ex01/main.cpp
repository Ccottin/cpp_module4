/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 02:05:05 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/17 04:20:06 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <typeinfo>

void	ft_mandatory(void)
{
	Animal	*tab[8];
	int	i;

	for (i = 0; i < 4; i++)
		tab[i] = new Dog();
	for (i = 4; i < 8; i++)
		tab[i] = new Cat();
	tab[0]->makeSound();
	tab[4]->makeSound();
	
	for (i = 0; i < 8; i++)
		delete tab[i];
}

	/*	std::string s = typeid(j).name();			*/
	/*	std::cout << s << std::endl;				*/
	/*	typeid te permet de savoir de quel type		*/
	/*	est ta classe et a chercher un peu vu que	*/
	/*	c une classe quels sont les autres bailz	*/

int	main(void)
{
	{	
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		delete j;//should not create a leak
		delete i;

		std::cout << "main example" <<  std::endl;

		const Dog* h = new Dog();
		const Cat* g(new Cat());

		h->makeSound();
		std::cout << h->getType() << std::endl;
		std::cout << h->getIdea(80) << std::endl;
		g->makeSound();
		std::cout << g->getType() << std::endl;
		std::cout << g->getIdea(80) << std::endl;

		delete h;
		delete g;
	}
	std::cout <<  std::endl;
	ft_mandatory();

/*
	Dog* h = new Dog();
	Animal* g(new Cat());

	g->makeSound();
	std::cout << g->getType() << std::endl;
	delete g;
	g = (new Animal(*h));
	g->makeSound();
	std::cout << g->getType() << std::endl;

	delete h;
	std::cout <<  std::endl;
	delete g;
	std::cout <<  std::endl;
	
	std::cout <<  std::endl;
	std::cout <<  std::endl;
	std::cout <<  std::endl;
	std::cout <<  std::endl;
	return 0;
	*/
}//faire + e test avec constructeurs et destructeurs brain, faire des tableau pour les idees voilou
