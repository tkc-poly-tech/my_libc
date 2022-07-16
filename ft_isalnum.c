#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <libc.h>
// int	main(void)
// {
// 	printf("ft_(a is %d)  = %d\n", 'a', ft_isalnum('a'));
// 	printf("   (a is %d)  = %d\n", 'a', isalnum('a'));
// 	printf("ft_(A is %d)  = %d\n", 'A', ft_isalnum('A'));
// 	printf("   (A is %d)  = %d\n", 'A', isalnum('A'));
// 	printf("ft_(' ' is %d)  = %d\n", ' ', ft_isalnum(' '));
// 	printf("   (' ' is %d)  = %d\n", ' ', isalnum(' '));
// 	printf("ft_(0 is %d)  = %d\n", '0', ft_isalnum('0'));
// 	printf("   (0 is %d)  = %d\n", '0', isalnum('0'));
// 	printf("ft_(9 is %d)  = %d\n", '9', ft_isalnum('9'));
// 	printf("   (9 is %d)  = %d\n", '9', isalnum('9'));
// 	printf("ft_(^ is %d)  = %d\n", '^', ft_isalnum('^'));
// 	printf("   (^ is %d)  = %d\n", '^', isalnum('^'));
// 	return 0;
// }