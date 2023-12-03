#include "lib_rush.h"

void	ft_free_list(t_stack **lst)
{
	t_stack	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}

void	ft_lstadd_backnum(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
		new->next = NULL;
	}
	else
		*lst = new;
}

void	ft_lstadd_frontnum(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}


t_stack	*ft_lstnewnum(int num)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = num;
	new->next = NULL;
	return (new);
}
