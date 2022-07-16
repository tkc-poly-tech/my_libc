#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;

	if (dstsize == 0)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize < len_dst)
		return (len_src + dstsize);
	ft_strlcpy(dst + len_dst, src, dstsize - len_dst);
	return (len_dst + len_src);
}

// #include <libc.h>
// int	main(void)
// {
// 	// char test_src[12] = "World";
// 	// char test_dest[12] = "Hello ";
// 	// char ft_test_dest[12] = "Hello";
// 	// strlcat(test_dest, test_src, 12);
// 	// printf("   %s\n", test_dest);
// 	// strlcat(ft_test_dest, test_src, 12);
// 	// printf("ft_%s\n", ft_test_dest);
// 	// printf("%lu", strlcat(NULL, "", 0));
// 	// printf("%zu", ft_strlcat("Hello", "Hello", 6));
// 	printf("%zu", ft_strlcat(NULL, NULL, 0));
// 	return (0);
// }