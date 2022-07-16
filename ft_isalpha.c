#include "libft.h"

int	ft_isalpha(int c)
{
	return (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}

// #include <libc.h>
// int	main(void)
// {
// 	printf("ft_(a is %d)  = %d\n", 'a', ft_isalpha('a'));
// 	printf("   (a is %d)  = %d\n", 'a', isalpha('a'));
// 	printf("ft_(A is %d)  = %d\n", 'A', ft_isalpha('A'));
// 	printf("   (A is %d)  = %d\n", 'A', isalpha('A'));
// 	printf("ft_(' ' is %d)  = %d\n", ' ', ft_isalpha(' '));
// 	printf("   (' ' is %d)  = %d\n", ' ', isalpha(' '));
// 	printf("ft_(0 is %d)  = %d\n", '0', ft_isalpha('0'));
// 	printf("   (0 is %d)  = %d\n", '0', isalpha('0'));
// 	printf("ft_(^ is %d)  = %d\n", '^', ft_isalpha('^'));
// 	printf("   (^ is %d)  = %d\n", '^', isalpha('^'));
// 	return 0;
// }