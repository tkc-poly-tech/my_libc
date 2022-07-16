#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

// #include <libc.h>
// int	main(void)
// {
// 	char buf[] = "ABCD5EFGH";
// 	char buf2[] = "ABC123456";
// 	if (memcmp(buf, buf2, 3) == 0) {
// 		printf("      OK!\n");
// 	} else {
// 		printf("NG!");
// 	}
// 	if (ft_memcmp(buf, buf2, 3) == 0) {
// 		printf("ft is OK!\n");
// 	} else {
// 		printf("NG!");
// 	}
// 	return (0);
// }