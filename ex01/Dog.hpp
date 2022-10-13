/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:30:23 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/13 04:28:20 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal {

	public :
		
		Dog(void);
		Dog(Dog const & ref);
		Dog &operator=(Dog const & ref);
		virtual ~Dog(void);
		
		void	makeSound(void) const;

	protected :

	private :

		Brain	*_brain;
};

#endif
