/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:30:23 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/13 04:44:12 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class	Cat  : public Animal {

	public :
		
		Cat(void);
		Cat(Cat const & ref);
		Cat &operator=(Cat const & ref);
		virtual ~Cat(void);
		
		void	makeSound(void) const;
	
	protected :
	
	private :
		
		Brain	*_brain;
};

#endif
