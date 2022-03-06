/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 10:23:18 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 12:04:55 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Cat : public Animal
{
public : 
	Cat(void);
	~Cat(void);
	virtual void	printType(void);
	virtual void	makeSound(void);
private :
};