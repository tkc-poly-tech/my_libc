#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// #include <libc.h>
// int	main(void)
// {
// 	char str1[] = "born2codefrom42Tokyo";
// 	int	ft_count = ft_strlen(str1);
// 	int	count = strlen(str1);
// 	printf("ft_strlen:%d\n", ft_count);
// 	printf("   strlen:%d\n", count);
// }