/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:50:37 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/02 18:36:33 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_rush.h"

t_list	*list_init(char **split)
{
	t_list	*list;
	int	i;
	int	len;
	
	if (!split)
		return (NULL);
	i = 0;
	len = split_check(split);
	if (len < 32)
		return (NULL);
	list = ft_lstnew_node(split[i]);
	while (i++ < len -1)
	{
		ft_lstadd_backnode(&list, ft_lstnew_node(split[i]));
	}
	return (list);
}

char	**split_init(char **split)
{
	int		fd;
	int		bytes_rd;
	char		buffer[BUFFER_SIZE];
	
	fd = open("numbers.dict", O_RDONLY);
	bytes_rd = read(fd, buffer, BUFFER_SIZE - 1);
	if (fd == -1 || bytes_rd == -1)
	{
		ft_putstr("DictError\n");
		return NULL;
	}
	split = ft_split(buffer, '\n');
	close(fd);
	return (split);
}

void	solve_function(t_list *list, char *str)
{
	int		*arr;
	int		*mult;
	int		size;
	
	size = ft_strlen(str);
	arr = num_array(str, size);
	mult = mult_array(size);
	ft_solve_problem(list, arr, mult, size);
	return ;
}

void	ft_solve_problem(t_list *list, int *arr, int *mult, int size)
{	
	t_list	*node_clone;
	int	i;
	//char	**container;
	//int	j;

	node_clone = NULL;
	i = 0;
	//j = 0;
	while (i < size)
	{
		node_clone = ft_find_nums(list, arr[i] * mult[i]);
		if (!(arr[i] == 0 && i != 0))
			ft_putstr(node_clone->str);
		i++;
	}
}

t_list	*ft_find_nums(t_list *list, int target)
{
	t_list	*current;

	current = list;
	while (current != NULL)
	{
		if (current->posix == target)
			return (current);
		current = current->next;
	}
	return (NULL); // Value not found
}

int	main(int ac, char **av)
{
	char		**split;
	t_list		*list;

	split = NULL;
	list = NULL;
	// Controllo sugli argomenti
	if (ft_check_arg(av, ac))
	{
		ft_putstr("Error\n");
		return (0);
	}
	// Lettura del dict
	if (ac == 2)
	{
		split = split_init(split);
	}
	if (split)
		list = list_init(split);
	//(void)list;
	if (!split || split_check(split) == 1)
	{
		//ft_putstr(split[0]);
		ft_putstr("DictError\n");
		return (0);
	}
	if (ac == 2)
	{
		solve_function(list, av[1]);
	}
	//free_matrix(split);
	//free(list);
	return (0);
}
