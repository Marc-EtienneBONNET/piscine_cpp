/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:22:51 by mbonnet           #+#    #+#             */
/*   Updated: 2022/03/06 20:01:33 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include "IMateriaSource.hpp"
# include "ICharacter.hpp"
# include "Cure.hpp"
# include "Ice.hpp"


class Character : public ICharacter
{
public:
	Character(void);
	virtual ~Character(void);
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
private : 
	std::string _name;
	AMateria	*_materia[4];
};
#endif