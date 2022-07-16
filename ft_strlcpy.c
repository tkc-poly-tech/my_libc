#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (src_len);
	while (src[i] != '\0' && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// #include <libc.h>
// int	main(void){
// 	char *test_src ="XXXXXXXXXXX";
// 	char strlcpy[6] = "00000";
// 	char my_test_str[6] = "LLLLL";
// 	strlcpy(strlcpy, test_src, sizeof(strlcpy));
// 	ft_strlcpy(my_test_str, test_src, sizeof(my_test_str));
// 	printf("   %s\n", strlcpy);
// 	printf("ft %s\n", my_test_str);
// 	// strlcpy(NULL, test_src, sizeof(strlcpy));
// 	// ft_strlcpy(NULL, test_src, sizeof(my_test_str));
// 	// printf("   %s\n", strlcpy);
// 	// printf("ft %s\n", my_test_str);
// 	// strlcpy(strlcpy, NULL, sizeof(strlcpy));
// 	// ft_strlcpy(my_test_str, NULL, sizeof(my_test_str));
// 	// printf("   %s\n", strlcpy);
// 	// printf("ft %s\n", my_test_str);
// 	strlcpy(strlcpy, test_src, 0);
// 	ft_strlcpy(my_test_str, test_src, 0);
// 	printf("   %s\n", strlcpy);
// 	printf("ft %s\n", my_test_str);
// }