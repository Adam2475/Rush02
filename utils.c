/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:02:28 by mapichec          #+#    #+#             */
/*   Updated: 2023/12/02 17:45:20 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_rush.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_num(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (1);
		i++;
	}
	if (i > 10)
		return (1);
	return (0);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
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
