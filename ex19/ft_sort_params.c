/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 21:11:07 by valentin          #+#    #+#             */
/*   Updated: 2016/11/13 23:45:39 by valentin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void 		ft_putendl(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void		ft_print_params(char **av)
{
	int		i;

	i = 1;
	while (av[i])
	{
		ft_putendl(av[i]);
		i++;
	}
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (s1[i] - s2[i] > 0)
		return (1);
	else if (s1[i] - s2[i] == 0)
		return (0);
	else
		return (-1);
}

int			main(int ac, char **av)
{
	int		i;

	if (ac > 1)
	{
		i = 1;
		while (i < ac -1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				av[0] = av[i];
				av[i] = av[i + 1];
				av[i + 1] = av[0];
				i = 0;
			}
			i++;
		}
		ft_print_params(av);
	}
}
