/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapichec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 15:08:40 by mapichec          #+#    #+#             */
/*   Updated: 2023/11/22 18:45:57 by mapichec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	sign = 1;
	res = 0;
	while (*str != '\0')
	{
		while (*str == ' ' || (*str >= 7 && *str <= 13))
			str++;
		if (*str == '-')
			sign *= -1;
		else if (*str >= '0' && *str <= '9')
		{
			res += (*str - 48);
			if (*(str + 1) < '0' || *(str + 1) > '9')
				return (res * sign);
			else
				res *= 10;
		}
		str++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str[] = "+123+4ab567";
	printf("vera %d\n", atoi(str));
	printf("fake %d\n", ft_atoi(str));
	return 0;
}*/
