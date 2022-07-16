#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	size_counter;

	size_counter = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size_counter++;
	}
	return (size_counter);
}
