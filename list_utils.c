#include "lib_rush.h"
#include <string.h>

void	ft_free_list(t_list **lst)
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_backnode(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
		new->next = NULL;
	}
	else
		*lst = new;
}

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (src[size])
		++size;
	if (!(new = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char	*ft_trim(char *str)
{
	int	i;
	int	j;
	int	x;
	char	*tmp;

	i = 0;
	while (((str[i] == 32) || (str[i] >= 9 && str[i] <= 13)))
		i++;
	j = 0;
	x = i;
	while (str[x] != '\0')
	{
		if (str[x] >= 33 && str[x] <= 126)
			j++;
		x++;
	}
	tmp = (char *)malloc(sizeof(char) * ((count_words(str, 32) - 1) + j));
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 33 && str[i] <= 126)
		{
			tmp[j] = str[i];
			j++;
			if (((str[i + 1] == 32) || (str[i + 1] >= 9 && str[i + 1] <= 13)))
			{
				tmp[j] = str[i + 1];
				j++;
			}
		}
		i++;
	}
	return (tmp);
}

t_list	*ft_lstnew_node(char *split)
{
	t_list	*new;
	char	**str;
	
	str = ft_split(split, ':');
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	// Assegnazione valori
	new->posix = ft_atoi(str[0]);
	new->str = ft_strdup(ft_trim(str[1]));
	new->next = NULL;
	free(str[0]);
	free(str[1]);
	return (new);
}
