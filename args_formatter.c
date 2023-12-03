/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_formatter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:35:25 by adapassa          #+#    #+#             */
/*   Updated: 2023/12/02 16:30:36 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_rush.h"

int	*format_args(char *str, int size)
{
	int	i;
	int	j;
	int	*tmp;
	
	tmp = NULL;
	i = 0;
	j = 0;
	(void)size;
	(void)str;
	while (str[i] != '\0')
	{
		i++;
		j++;
	}
	return (tmp);
} 

//conversione
