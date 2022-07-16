#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
	return ;
}

// #include <libc.h>
// int main(void)
// {
// 	char str[50];
// 	strlcpy(str, "Like everything else, Fletcher. Practice.", 42);
// 	puts(str);
// 	ft_bzero(str, 2);
// 	puts(str);
// 	return (0);
// }