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

//char	**split_manager(int fd, char **split, buffer)

t_list	*list_init(char **split, int len)
{
	t_list	*list;
	t_list	*testa;
	int	i;

	i = 0;
	(void)split;
	(void)len;
	i++;
	list = (t_list *)malloc(sizeof(t_list) * 1);
	testa = (t_list *)malloc(sizeof(t_list) * 1);
	(void)list;
	//testa = &list;
	//list->next = NULL;
	//while (i < len)
	//{
	//
	//}
	return (testa);
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
		return ;
	}
	split = ft_split(buffer, '\n');
	//ft_one_arg(split);
	return (split);
}

int	main(int ac, char **av)
{
	char		**split;
	t_list		*list;
	
	dict_reader();
	// Controllo sugli argomenti
	if (ft_check_arg(av, ac))
	{
		ft_putstr("Error\n");
		return (0);
	}
	// Lettura del dict
	if (ac == 2)
	{
		split_init(split);
	}
	if (!split || split_check(split) == 1)
	{
		ft_putstr("DictError\n");
		return (0);
	}
	// Inizializzazione lista
	list = list_init(split, fd);
	// Close fd && free
	//free_matrix(split);
	close(fd);
	return (0);
}
