/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_rush.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:51:08 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/03 10:56:01 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_RUSH_H
# define LIB_RUSH_H

# define BUFFER_SIZE 1024
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct	s_list
{
<<<<<<< HEAD
	int		posix;
	char		*str;
	struct t_list	*next;
} 		t_list;
=======
	int	posix;
	char	*str;
	struct t_list	*next;
} 	t_list;

>>>>>>> 5c26a8ecd43be55ca2e65f39c5c5aed583e4389c
int     ft_strcmp(char *s1, char *s2);
int	ft_atoi(char *str);
int	ft_strlen(char *str);
void    ft_putstr(char *str);
char	**ft_split(char *str, char c);
int     ft_check_arg(char **av, int ac);
int	is_num(char *str);
char	**ft_split(char *s, char c)

#endif
