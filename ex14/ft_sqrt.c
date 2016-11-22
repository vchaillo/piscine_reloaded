/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 20:44:50 by valentin          #+#    #+#             */
/*   Updated: 2016/11/22 21:20:12 by vchaillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int						ft_sqrt(int nb)
{
	int		res;

	if (nb <= 0)
		return (0);
	res = 1;
	while (res < 46340 && res * res < nb)
		res++;
	if (res * res == nb)
		return (res);
	else
		return (0);
}
