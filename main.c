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

void	ft_diff_arg(char **split, int ac) //puo' essere sostituito da un if
{
	if (ac == 2) //prende di default il dizionario
		ft_one_arg(split); 
	else //prende quello dato
		ft_two_arg(split);
}

int	split_check(char **split)
{
	int	i;

	i = 0;
	while (split[i] != NULL)
		i++;
	if (i <= 32)
		return (1);
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
        int     i;

	i = 0;
	while (s1[i] == s2[i] && s2[i] != '\0')
	{
		i++;
	}
	if (s2[i] == '\0')
		i--;
	return (s1[i] - s2[i]);
}

t_list	*list_split(char **split, int len)
{
	t_list	*list;
	t_list	*testa;
	int	i;

	i = 0;
	list = (t_list *)malloc(sizeof(t_list) * 1);
	testa = &list;
	list->next = NULL;
	while (i < len)
	{

	}
	return (testa);
}

int	main(int ac, char **av)
{
	char	**split;
	t_list	*list;
	char	*buffer[BUFFER_SIZE];
	int		fd;
	int		bytes_rd;

	t_list->next = NULL;
	if (ft_check_argi(av, ac))
	{
		ft_putstr("Error\n");
		return (0);
	}
	fd = open("numbers.dict", O_RDONLY);
	bytes_rd = read(fd, buffer, BUFFER_SIZE - 1);
	if (fd == -1 || bytes_rd == -1)
	{
		ft_putstr("DictError\n");
		return (0);
	}
	split = ft_split(buffer, '\n');
	fd = split_check(split);
	if (!split || fd == 1)
	{
		ft_putstr("DictError\n");
		return (0);
	}
	t_list = list_split(split, fd);
	close(fd);
	if (ac == 2 || ac == 3)
		ft_diff_arg(split, ac);
	return (0);
}
