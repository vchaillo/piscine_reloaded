/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:30:35 by valentin          #+#    #+#             */
/*   Updated: 2016/11/22 15:53:45 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int			main(int ac, char **av)
{
	int		fd;
	int		ret;
	char	buf[BUFF_SIZE + 1];

	if (ac == 1)
		ft_puterror("File name missing.");
	else if (ac > 2)
		ft_puterror("Too many arguments.");
	else
	{
		if ((fd = open(av[1], O_RDONLY)) == -1)
			return (0);
		else
		{
			while ((ret = read(fd, buf, BUFF_SIZE)))
			{
				buf[ret] = '\0';
				ft_putstr(buf);
			}
		}
		close(fd);
	}
	return (0);
}
