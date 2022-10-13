/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:28:32 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/13 05:26:42 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : AAnimal("Dog")
{
	std::cout << "Default Dog Constructor called" << std::endl;
	_brain = new Brain("Dog");
}

Dog::Dog(Dog const & ref)
{
	std::cout << "Copy Dog Constructor called" << std::endl;
	*this = ref;
}

Dog	&Dog::operator=(Dog const & ref)
{
	std::cout << "Operator Constructor Dog called" << std::endl;
	if (this != &ref)
	{
		this->type_ = ref.type_;
		this->_brain = new Brain(*ref._brain);
	}
	return (*this);
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Destructor Dog called" << std::endl;
}

void		Dog::makeSound(void) const
{
	std::cout << "Bark!" << std::endl;
}


