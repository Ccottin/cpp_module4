/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccottin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:30:23 by ccottin           #+#    #+#             */
/*   Updated: 2022/10/13 03:17:13 by ccottin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class	Brain {

	public :
		
		Brain(void);
		Brain(std::string type);
		Brain(Brain const & ref);
		Brain &operator=(Brain const & ref);
		virtual ~Brain(void);

		std::string	getIdea(int index);
		
	protected :

	private :
	
		std::string	_ideas[100];
};

#endif
