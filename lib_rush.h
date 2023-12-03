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
# include <fcntl.h>

typedef struct	s_list
{
	int	posix;
	char	*str;
	struct t_list	*next;
} 	t_list;

int     	ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void    	ft_putstr(char *str);
char		**ft_split(char *str, char c);
int     	ft_check_arg(char **av, int ac);
int		is_num(char *str);
char		**ft_split(char *s, char c);
void		ft_two_arg();
void		ft_one_arg();
int		split_check(char **split);
void		ft_free_list(t_stack **lst);
void		ft_lstadd_backnum(t_stack **lst, t_stack *new);
void		ft_lstadd_frontnum(t_stack **lst, t_stack *new);
t_list		*ft_lstnewnum(int num);

#endif
