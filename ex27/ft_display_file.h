/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: valentin <valentin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 19:30:41 by valentin          #+#    #+#             */
/*   Updated: 2016/11/18 14:14:55 by valentinchaillou89###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DISPLAY_FILE
# define FT_DISPLAY_FILE

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

# define BUFF_SIZE 1024

int			ft_strlen(char *s);
void 		ft_puterror(char *s);
void		ft_putchar(char c);
void 		ft_putstr(char *s);
void 		ft_putendl(char *s);

#endif
