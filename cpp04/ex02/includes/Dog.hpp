/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:23:21 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 17:11:33 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Dog : public Animal
{
public : 
	Dog(void);
	~Dog(void);
	virtual void	printType(void);
	virtual void	makeSound(void);
private :
	Brain *cerveau;
};