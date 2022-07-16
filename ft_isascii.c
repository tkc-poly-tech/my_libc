#include "libft.h"

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}

// #include <libc.h>
// #define _FF ((unsigned char) '\xff') /* '\xff' = 255 */
// #define _7F ((unsigned char) '\x7f') /* '\x7f' = 127 */
// int	main(void)
// {
// 	printf("ft_(a is %d)  = %d\n", 'a', ft_isascii('a'));
// 	printf("   (a is %d)  = %d\n", 'a', isascii('a'));
// 	printf("ft_(A is %d)  = %d\n", 'A', ft_isascii('A'));
// 	printf("   (A is %d)  = %d\n", 'A', isascii('A'));
// 	printf("ft_(' ' is %d)  = %d\n", ' ', ft_isascii(' '));
// 	printf("   (' ' is %d)  = %d\n", ' ', isascii(' '));
// 	printf("ft_(0 is %d)  = %d\n", '0', ft_isascii('0'));
// 	printf("   (0 is %d)  = %d\n", '0', isascii('0'));
// 	printf("ft_(^ is %d)  = %d\n", '^', ft_isascii('^'));
// 	printf("   (^ is %d)  = %d\n", '^', isascii('^'));
// 	printf("ft_(^ is %3d)  = %d\n", _FF, ft_isascii(_FF));
// 	printf("   (^ is %3d)  = %d\n", _FF, isascii(_FF));
// 	return 0;
// }