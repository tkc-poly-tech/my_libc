#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char)c)
	{
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

// #include <libc.h>
// int	main(void)
// {
// 	char test[20] = "abcdefghijk";
// 	char *p, *ft_p;
// 	p = strchr(test, 'g');
// 	ft_p = ft_strchr(test, 'g');
// 	printf("   %s\n", p);
// 	printf("ft_%s\n", ft_p);
// 	return (0);
// }