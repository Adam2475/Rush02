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
	t_list	*list2;
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
	list2 = list;
	/*while (list2 != NULL)
	{
		printf("%d\t%s\n", list2->posix, list2->str);
		list2 = list2->next;
	}*/
	// Do checks on created list
	return (list);
}

char	**split_init(char **split)
{
	int		fd;
	int		bytes_rd;
	char		buffer[BUFFER_SIZE];
	
	fd = open("numbers.dict", O_RDONLY);
	bytes_rd = read(fd, buffer, BUFFER_SIZE - 1);
	//printf("%d\n%s\n", fd, buffer);
	if (fd == -1 || bytes_rd == -1)
	{
		ft_putstr("DictError\n");
		return NULL;
	}
	split = ft_split(buffer, '\n');
	//for (int i = 0; split[i] != NULL; i++)
	//	printf("%s\n", split[i]);
	// Inizializzazione lista
	close(fd);
	return (split);
}

int	main(int ac, char **av)
{
	char		**split;
	t_list		*list;
	int		*arr;
	
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
	list = list_init(split);
	//(void)list;
	if (!split || split_check(split) == 1)
	{
		//ft_putstr(split[0]);
		ft_putstr("DictErrorMerda\n");
		return (0);
	}
	// Solve function(list)
	//free_matrix(split);
	//free(list);
	return (0);
}
