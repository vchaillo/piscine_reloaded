/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_count_if.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 16:01:01 by valentin          #+#    #+#             */
/*   Updated: 2016/11/15 16:01:23 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int			ft_count_if(char **tab, int(*f)(char*));

int			ft_len_is_two(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	if (len == 2)
		return (1);
	else
		return (0);
}

int		main(int ac, char **av)
{
	if (ac > 1)
		printf("ret = %d\n", ft_count_if(av, &ft_len_is_two));
	return (0);
}
