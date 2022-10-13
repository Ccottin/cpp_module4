/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:30:23 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/13 04:12:00 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class	Animal {

	public :
		
		Animal(void);
		Animal(std::string type);
		Animal(Animal const & ref);
		Animal &operator=(Animal const & ref);
		virtual ~Animal(void);

		void			setType(std::string type);
		std::string const	getType(void) const;
		virtual void		makeSound(void) const;
	
	protected :

		std::string	type_;

	private :
	
};

#endif
