#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <libc.h>
// int main()
// {
// 	t_list *my_tlist = (t_list *)malloc(sizeof(t_list) * 5);
// 	char content[] = "First";
// 	t_list *linked_list_item1 = ft_lstnew((void *)content);
// 	char content2[] = "Second";
// 	t_list *linked_list_item2 = ft_lstnew((void *)content2);
// 	ft_lstadd_front(&my_tlist, linked_list_item1);
// 	ft_lstadd_front(&my_tlist, linked_list_item2);
// 	printf("The result is %s\n", (char *)my_tlist[0].content);
// 	printf("The result is %s\n", (char *)my_tlist[0].next->content);
// 	return 0;
// }