#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (lst == NULL || *lst == NULL || del == NULL)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

// #include <libc.h>
// int	main()
// {
// 	t_list	**lst;
// 	t_list	*first;

// 	first = ft_lstnew(ft_strdup("test1"));
// 	lst = &first;
// 	ft_lstclear(lst, &free);
// 	printf("lst %p\n", &lst);
// }