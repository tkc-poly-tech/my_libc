#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dst2;
	const unsigned char	*src2;

	if (dst == src || n == 0)
		return (dst);
	dst2 = (unsigned char *)dst;
	src2 = (const unsigned char *)src;
	if (dst < src)
	{
		return (ft_memcpy(dst, src, n));
	}
	else if (src < dst)
	{
		while (n--)
		{
			dst2[n] = src2[n];
		}
	}
	return (dst);
}

// #include <libc.h>
// int	main(void)
// {
// 	char ft_dst[] = "0123456789";
// 	char str[] = "0123456789";
// 	char src[] = "xxxxxxxxxx";
// 	ft_memmove(ft_dst, src, 5);
// 	memmove(str, src, 5);
// 	printf("ft %s\n", ft_dst);
// 	printf("   %s\n", str);
// }