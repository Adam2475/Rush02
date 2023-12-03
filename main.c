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

/*void	ft_diff_arg(char **split, int ac, char *dict)
{
	int		fd;
	int		bytes_rd;
	char		*dict_path;
	char		buffer[BUFFER_SIZE];
	
	dict_path = dict;
	if (ac == 2)
	{
		fd = open("numbers.dict", O_RDONLY);
		bytes_rd = read(fd, buffer, BUFFER_SIZE - 1);
		ft_one_arg(split);
	}
	else if (ac == 3)
	{
		fd = open(dict_path, O_RDONLY);
		bytes_rd = read(fd, buffer, BUFFER_SIZE - 1);
		ft_two_arg(split);
	}
	if (fd == -1 || bytes_rd == -1)
	{
		ft_putstr("DictError\n");
		return ;
	}
}*/

t_list	*list_init(char **split)
{
	t_list	*list;
	int	i;
	int	len;
	
	if (!split)
		return (NULL);
	i = 0;
	len = ft_strlen((char *)split);
	list = ft_lstnewnum(ft_atoi(split[i]));
	while (i++ < ac -1)
	{
		ft_lstadd_backnum(&list, lst_newnum(ft_atoi(split[i])));
	}
	// Do checks on created list
	return (testa);
}

t_list	*split_init(char **split, t_list *list)
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
	// Inizializzazione lista
	list = list_init(split);
	close(fd);
	return (list);
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
		split_init(split, list);
	}
	if (!split || split_check(split) == 1)
	{
		ft_putstr("DictError\n");
		return (0);
	}
	//free_matrix(split);
	//free(list);
	return (0);
}
