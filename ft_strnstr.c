#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	j;

	index = 0;
	if ((char *)haystack == NULL && len == 0)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[index] != '\0' && index < len)
	{
		j = 0;
		while (haystack[index + j] == needle[j] && (index + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)haystack + index);
		}
		index++;
	}
	return (NULL);
}

// #include <libc.h>
// int	main(void)
// {
// 	// const char *haystack = "Foo Bar Baz";
// 	// const char *needle = "Bar";
// 	const char *haystack = "abbbcdefg";
// 	const char *needle = "bbc";
// 	char *ptr, *ft_ptr;
// 	ptr = strnstr(haystack, needle, 10);
// 	ft_ptr = ft_strnstr(haystack, needle, 10);
// 	printf("%s\n", ptr);
// 	printf("%s\n", ft_ptr);
// 	return (0);
// }