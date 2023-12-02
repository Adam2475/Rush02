/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_rush.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:51:08 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/02 15:49:55 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_RUSH_H
# define LIB_RUSH_H

# define BUFFER_SIZE 1024
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int	ft_atoi(char *str);
int	ft_strlen(char *str);
void    ft_putstr(char *str);
char	**ft_split(char *str, char c);
int     ft_check_arg(char **av, int av);
int is_num(char *str);
char	**ft_split(char *s, char c)

#endif
