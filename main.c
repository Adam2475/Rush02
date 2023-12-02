/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:50:37 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/02 14:25:46 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_rush.h"

void	ft_diff_arg(char **split, int ac)
{
	if (ac == 2)
		ft_one_arg(split);
	else
		ft_two_arg(split);
}

int	main(int ac, char **av)
{
	char	**split;
	char	*buffer[BUFFER_SIZE];
	int		fd;
	int		bytes_rd;

	if (ft_check_arg )
	{
		ft_putstr("Error\n");
		return (0);
	}
	fd = open("numbers.dict", O_RDONLY);
	bytes_rd = read(fd, buffer, BUFFER_SIZE - 1);
	split = ft_split(buffer, '\n');
	if (!split)
	{
		ft_putstr("Error\n");
		return (0);
	}
	close(fd);
	if (ac == 2 || ac == 3)
		ft_diff_arg(split, ac);
}
