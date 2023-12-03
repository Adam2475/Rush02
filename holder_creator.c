#include "lib_rush.h"

int	*num_array(char *arr, int size)
{
	int	*tmp;
	int	i;
	
	i = 0;
	tmp = (int *)malloc(sizeof(int) * size);
	while (i < size)
	{
		tmp[i] = arr[i] - 48;
		i++;
	}	
	return (tmp);
}

int	*mult_array(int size)
{
	int	*tmp;
	int	end;
	int	i;
	
	tmp = (int *)malloc(sizeof(int) * size);
	i = size - 1;
	end = 1;
	tmp[size - 1] = end;
	i--;
	while (i >= 0)
	{
		tmp[i] = tmp[i + 1] * 10;
		end *= 10;
		i--;
	}
	return (tmp);
}
