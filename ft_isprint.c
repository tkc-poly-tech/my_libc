#include "libft.h"

int	ft_isprint(int c)
{
	return (' ' <= c && c <= '~');
}

// #include <libc.h>
// #define _FF ((unsigned char) '\xff') /* '\xff' = 255 */
// #define _7F ((unsigned char) '\x7f') /* '\x7f' = 127 */
// int	main(void)
// {
// 	printf("ft_(a is %d)  = %d\n", 'a', ft_isprint('a'));
// 	printf("   (a is %d)  = %d\n", 'a', isprint('a'));
// 	printf("ft_(A is %d)  = %d\n", 'A', ft_isprint('A'));
// 	printf("   (A is %d)  = %d\n", 'A', isprint('A'));
// 	printf("ft_(' ' is %d)  = %d\n", ' ', ft_isprint(' '));
// 	printf("   (' ' is %d)  = %d\n", ' ', isprint(' '));
// 	printf("ft_(0 is %d)  = %d\n", '0', ft_isprint('0'));
// 	printf("   (0 is %d)  = %d\n", '0', isprint('0'));
// 	printf("ft_(^ is %d)  = %d\n", '^', ft_isprint('^'));
// 	printf("   (^ is %d)  = %d\n", '^', isprint('^'));
// 	printf("ft_(^ is %3d)  = %d\n", _7F, ft_isprint(_7F));
// 	printf("   (^ is %3d)  = %d\n", _7F, isprint(_7F));
// 	printf("ft_(^ is %3d)  = %d\n", _FF, ft_isprint(_FF));
// 	printf("   (^ is %3d)  = %d\n", _FF, isprint(_FF));
// 	return 0;
// }