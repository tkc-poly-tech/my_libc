#include "libft.h"

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}

// #include <libc.h>
// int	main(void)
// {
// 	printf("ft_(a is %d)  = %d\n", 'a', ft_isdigit('a'));
// 	printf("   (a is %d)  = %d\n", 'a', isdigit('a'));
// 	printf("ft_(A is %d)  = %d\n", 'A', ft_isdigit('A'));
// 	printf("   (A is %d)  = %d\n", 'A', isdigit('A'));
// 	printf("ft_(' ' is %d)  = %d\n", ' ', ft_isdigit(' '));
// 	printf("   (' ' is %d)  = %d\n", ' ', isdigit(' '));
// 	printf("ft_(0 is %d)  = %d\n", '0', ft_isdigit('0'));
// 	printf("   (0 is %d)  = %d\n", '0', isdigit('0'));
// 	printf("ft_(9 is %d)  = %d\n", '9', ft_isdigit('9'));
// 	printf("   (9 is %d)  = %d\n", '9', isdigit('9'));
// 	printf("ft_(^ is %d)  = %d\n", '^', ft_isdigit('^'));
// 	printf("   (^ is %d)  = %d\n", '^', isdigit('^'));
// 	return 0;
// }