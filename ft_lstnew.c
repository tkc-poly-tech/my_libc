#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = NULL;
	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

// #include <libc.h>
// int		main(void)
// {
// 	char	str[] = "hello from 42Tokyo !";
// 	t_list	*elem;
// 	elem = ft_lstnew((void *)str);
// 	printf("%s\n", elem->content);
// }