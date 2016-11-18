/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:30:38 by valentin          #+#    #+#             */
/*   Updated: 2016/11/15 19:34:01 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int			ft_strlen(char *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

void 		ft_puterror(char *s)
{
	write(2, s, ft_strlen(s));
	write(2, "\n", 1);
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void 		ft_putstr(char *s)
{
	int		i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

void 		ft_putendl(char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
