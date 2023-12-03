/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:54:38 by adapassa          #+#    #+#             */
/*   Updated: 2023/11/29 20:33:37 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_rush.h"

static char	*secondary_filler(int *arr, char **strs, char *result)
{
	result[arr[2]] = strs[arr[1]][arr[0]];
	arr[0]++;
	arr[2]++;
	return (result);
}

static char	*core_filler(int size, char *sep, char **strs, char *result)
{
	int	arr[3];

	arr[0] = 0;
	arr[1] = 0;
	arr[2] = 0;
	while (arr[1] < size)
	{
		arr[0] = 0;
		while (strs[arr[1]][arr[0]] != '\0')
			secondary_filler(arr, strs, result);
		arr[1]++;
		arr[0] = 0;
		if (arr[1] < size)
		{
			while (sep[arr[0]] != '\0')
			{
				result[arr[2]] = sep[arr[0]];
				arr[2]++;
				arr[0]++;
			}
		}
	}
	result[arr[2]] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		sizenum;

	i = 0;
	sizenum = 0;
	while (i < size)
	{
		sizenum += ft_strlen(strs[i]);
		i++;
	}
	if (sep && size != 0)
		sizenum += (ft_strlen(sep) * (i - 1));
	result = (char *)malloc(sizeof(char) * sizenum + 1);
	if (size == 0)
	{
		*result = 0;
		return (result);
	}
	i = 0;
	core_filler(size, sep, strs, result);
	return (result);
}
/*int main()
{
    char *av[] = {"ciao", "merda", "hello"};
    char sep[] = ", ";
    char *arr;
    arr = ft_strjoin(3, av, sep);
    printf("%s\n", arr);
    return 0;
}*/
