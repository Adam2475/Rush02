/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_rush.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:51:08 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/03 18:57:15 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_RUSH_H
# define LIB_RUSH_H

# define BUFFER_SIZE 1024
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct	s_list
{
	int	posix;
	char	*str;
	struct	s_list	*next;
} 	t_list;

int     	ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
void    	ft_putstr(char *str);
char		**ft_split(char *s, char c);
int     	ft_check_arg(char **av, int ac);
int		is_num(char *str);
char		**ft_split(char *s, char c);
void		ft_two_arg();
void		ft_one_arg();
int		split_check(char **split);
void		ft_free_list(t_list **lst);
void		ft_lstadd_backnode(t_list **lst, t_list *new);
t_list		*ft_lstnew_node(char *split);
t_list		*ft_lstlast(t_list *lst);
int		count_words(const char *str, char c);
int		*mult_array(int size);
int		*num_array(char *arr, int size);
void		solve_function(t_list *list, char *str);
void		ft_solve_problem(t_list *list, int *arr, int *mult, int size);
t_list		*ft_find_nums(t_list *list, int target);
char		*ft_strjoin(int size, char **strs, char *sep);

#endif
