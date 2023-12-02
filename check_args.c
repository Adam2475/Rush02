/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:53:36 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/02 18:06:49 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_rush.h"

int	is_dict(char *str)
{
	char	*dict;
	int		i;

	dict = "numbers.dict";
	i = 0;
	while (str[i] != '\0' && dict[i] != '\0')
	{
		if (str[i] != dict[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_arg(char **av, int ac)
{
	int	i;

	i = 0;
	if (ac < 2 || ac > 3)
		return (1);
	if (strcmp("2147483647", av[1]) > 0)
		return (1);
	if (ac == 2)
	{
		if (is_num(av[1]))
			return (1);
	}
	if (ac == 3)
	{
		if (is_num(av[1]))
			return (1);
		if (is_dict(av[2]))
			return (1);
	}
	return (0);
}
