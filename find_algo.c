#include "lib_rush.h"

int	find_digits(char *nbr)
{
	return (ft_strlen(nbr));
}

int	select_magnitude(char *nb)
{
	int caso;
	else if (digits == 3)
		return (caso = 3);
	else if (digits == 4)
		return (caso = 4);
	else if (digits == 5)
		return (caso = 5);
	else if (digits == 6)
		return (caso = 6);
	else if (digits == 7)
		return (caso = 7);
	else if (digits == 8)
		return (caso = 8);
	else if (digits == 9)
		return (caso = 9);
	else if (digits == 10)
		return (caso = 10);
}

void	find_cases(t_dict *dict, char *nb, int num)
{
	int	size;
	int	magnitude;
	size = find_digits(nb);
	
	if (num < 20)
		execute_case_teen(dict, nb, num);
	else
	{
		magnitude = select_case(nb);
		execute_case_full(nb, dict, num, magnitude);
	}
}

void	execute_case_teen(int num, t_list)
{
	while (t_list)
	{
		if (list->posix == num)
			print(list->value);
	}
}

void	execute_case_full(char *nb, t_dict *dict, int num, int magnitude)
{
	if (magnitude == 2)
}



