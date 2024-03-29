/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 09:58:56 by vipereir          #+#    #+#             */
/*   Updated: 2023/06/29 13:36:26 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H
# include <iostream>

class	Animal {

		public:
			Animal();
			Animal(const Animal& other);
			Animal& operator=(const Animal& other);
			virtual ~Animal();

			std::string getType() const;
			virtual	void makeSound(void) const;
		
		protected:
			std::string type;
};


#endif