/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbonnet <mbonnet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:14:08 by mbonnet           #+#    #+#             */
/*   Updated: 2022/02/15 07:48:45 by mbonnet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_DEFINE_INCLUDE_H
# define MY_DEFINE_INCLUDE_H
# include <iostream>
# include <string>

# define BLEU "\e[1;36m"
# define BLEU_2 "\e[1;34m"
# define ROUGE "\e[1;31m"
# define VERT "\e[1;32m"
# define JAUNE "\e[1;33m"
# define VIOLET "\e[1;35m"
# define BLANC "\e[0m"

class Karen;

struct t_message
{
	std::string		message;
	void			(Karen::*f)(void);
};

class Karen
{
public:
	Karen(std::string lvl_min);
	~Karen(void);
	void	complain(std::string level);
private:
	void		debug(void);
	void		info(void);
	void		warning(void);
	void		error(void);
	void		my_print(std::string message);
	std::string	_lvl_min;
	t_message	message[4];
	
};

#endif