#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// #include <libc.h>
// int		main(void)
// {
// 	char	str[] = "test";
// 	t_list	*elem1;
// 	t_list	*elem2;
// 	t_list	*elem3;
// 	t_list	*ret;
// 	if(!(elem1 = malloc(sizeof(t_list))))
// 		return (0);
// 	if(!(elem2 = malloc(sizeof(t_list))))
// 		return (0);
// 	if(!(elem3 = malloc(sizeof(t_list))))
// 		return (0);
// 	elem1->next = elem2;
// 	elem2->next = elem3;
// 	elem3->next = NULL;
// 	elem3->content = (void *)str;
// 	ret = ft_lstlast(elem1);
// 	printf("%s\n", (char *)ret->content);
// }