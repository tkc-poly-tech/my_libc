#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*tmp_s;

	i = 0;
	tmp_s = (char *)s;
	i = ft_strlen(s);
	if (c == '\0')
		return (&tmp_s[i]);
	while (0 < i)
	{
		if (s[i] == (char)c)
			return (&tmp_s[i]);
		i--;
	}
	if (s[0] == (char)c)
		return (&tmp_s[0]);
	return (NULL);
}

// #include <libc.h>
// int	main(void)
// {
// 	char str[] = "abcdefghijklc";
// 	char ft_str[] = "abcdefghijklc";
// 	char *p;
// 	char *ft_p;
// 	p = strrchr(str, 'k');
// 	ft_p = ft_strrchr(ft_str, 'k');
// 	printf("   result %s\n", p);
// 	printf("ft result %s\n", ft_p);
// 	return (0);
// }