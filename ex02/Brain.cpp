/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:28:32 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/13 04:43:05 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain Constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "I got an Idea!";
}

Brain::Brain(std::string type)
{
	std::cout << "Default Brain Constructor called for "
	<< type << " type" << std::endl;
	
	std::string	tab[2] = {
				"Cat",
				"Dog"
				};
	int	c;
	
	for (c = 0; c < 2; c++)
	{
		if (!tab[c].compare(type))
			break;
	}
	switch (c)
	{
		case 0 :
			for (int i = 0; i < 100; i++)
				_ideas[i] = "I'm not sure if"
				"I would rather sleep or eat";
			break ;

		case 1 :
			for (int i = 0; i < 100; i++)
				_ideas[i] = "I Worship Hoomans"
				"! Hoomans is my God!";
			break ;
		default :
			for (int i = 0; i < 100; i++)
				_ideas[i] = "I got an Idea!";
	}
}

Brain::Brain(Brain const & ref)
{
	std::cout << "Copy Brain Constructor called" << std::endl;
	*this = ref;
}

Brain	&Brain::operator=(Brain const & ref)
{
	std::cout << "Operator Constructor Brain called" << std::endl;
	if (this != &ref)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = ref._ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Destructor Brain called" << std::endl;
}

std::string	Brain::getIdea(int index)
{
	return (_ideas[index]);
}
