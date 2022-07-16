#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*dst2;
	const unsigned char		*src2;

	if (dst == src || n == 0)
		return (dst);
	dst2 = (unsigned char *)dst;
	src2 = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}

// #include <libc.h>
// int	main(void)
// {
// 	char buff1[] = "XXXXXXXXXXXXXXXX";
// 	char buff2[] = "XXXXXXXXXXXXXXXX";
// 	char buff3[] = "OOOOOOOOOOOOOOOO";
// 	ft_memcpy(buff1, buff3, 5);
// 	memcpy(buff2, buff3, 5);
// 	printf("ft_result : %s\n", buff1);
// 	printf("   result : %s\n", buff2);
// }