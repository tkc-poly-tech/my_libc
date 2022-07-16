#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*converted_s;

	converted_s = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (converted_s[i] == (unsigned char)c)
		{
			return ((void *)(&converted_s[i]));
		}
		i++;
	}
	return (NULL);
}

// #include <libc.h>
// int	main(void)
// {
// 	char	buf[] = "ABCD5EFGH";
// 	char	*ch;
// 	char	*ft_ch;
// 	ch = (char *)memchr(buf, '5', sizeof(buf));
// 	if (ch != NULL) {
// 		printf("print -> %s\n", ch);
// 	} else {
// 		printf("not found");
// 	}
// 	ft_ch = (char *)ft_memchr(buf, '5', sizeof(buf));
// 	if (ft_ch != NULL) {
// 		printf("print -> %s\n", ft_ch);
// 	} else {
// 		printf("not found");
// 	}
// 	return (0);
// }