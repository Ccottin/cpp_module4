/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:28:32 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/12 05:15:13 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default Animal Constructor called" << std::endl;
}
Animal::Animal(std::string type) : type_(type)
{
	std::cout << "Animal Constructor called with string type "
	<< type << std::endl;
}

Animal::Animal(Animal const & ref)
{
	std::cout << "Copy Animal Constructor called" << std::endl;
	*this = ref;
}

Animal	&Animal::operator=(Animal const & ref)
{
	std::cout << "Operator Constructor called" << std::endl;
	if (this != &ref)
		this->type_ = ref.getType();
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Destructor called" << std::endl;
}

void		Animal::setType(std::string type)
{
	type_ = type;
}

std::string const	Animal::getType(void) const
{
	return (type_);
}
	
void			Animal::makeSound(void) const
{
	std::cout << "*Animal noises*" << std::endl;
}

