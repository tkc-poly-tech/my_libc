#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	if (fd < 0)
		return ;
	number = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number = -n;
	}
	if (10 <= number)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd((number % 10) + '0', fd);
}

// #include <libc.h>
// int main()
// {
// 	int nmb = -2147483648;
// 	ft_putnbr_fd(nmb, 1);
// 	ft_putchar_fd('\n', 1);
// 	return (0);
// }