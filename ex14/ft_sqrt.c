/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 20:44:50 by valentin          #+#    #+#             */
/*   Updated: 2016/11/13 20:44:50 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_sqrt(int nb)
{
	int		res;

	if (nb <= 0)
		return (0);
	res = 1;
	while(res * res < nb)
		res++;
	if (res == nb)
		return (res);
	else
		return (0);
}
