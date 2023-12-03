#include<stdio.h>
#include<stdlib.h>

int	ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

int	ft_pow(int base, int exp)
{
	int	i;
	int	result;

	if (exp == 0)
		return (1);
	i = 0;
	result = 1;
	while (i < exp)
	{
		result *= base;
		i++;
	}
	return (result);
}

int	*string_to_int_ptr(char const *str)
{
	int	*ptr[3]; // num_ptr, dec_ptr, mul_ptr
	int	i;
	int	len;
	
	len = ft_strlen(str);
	ptr[0] = (int *)malloc(len * sizeof(int)); // num_ptr
	ptr[1] = (int *)malloc(len * sizeof(int)); // dec_ptr
	ptr[2] = (int *)malloc(len * sizeof(int)); // mul_ptr
	if (!ptr[0] || !ptr[1] || !ptr[2])
		return (NULL);
	i = 0;
	while (str[i] && ft_isdigit(str[i]))
		i++;
	*ptr[0] = ft_atoi(ft_strsub(str, 0, i)); // num_ptr
	*ptr[1] = ft_pow(10, i); // dec_ptr, calculate the power of 10 based on the index
	*ptr[2] = *ptr[0] * *ptr[1]; // mul_ptr
	return (ptr[2]);
}
