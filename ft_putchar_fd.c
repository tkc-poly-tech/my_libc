#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

// #include <libc.h>
// int	main()
// {
// 	int n = 'a';
// 	int	num = INT32_MAX;
// 	ft_putchar_fd(n , 1);
// 	ft_putchar_fd('\n', 1);
// 	ft_putchar_fd(num, 1);
// 	return (0);
// }