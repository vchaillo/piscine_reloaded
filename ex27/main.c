/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:30:35 by valentin          #+#    #+#             */
/*   Updated: 2016/11/15 19:31:17 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int			main(int ac, char **av)
{
	if (ac == 1)
		ft_puterror("File name missing.");
	else if (ac > 2)
		ft_puterror("Too many arguments.");
	else
		ft_putendl(av[1]);
	return (0);
}
