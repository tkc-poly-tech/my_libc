#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*result;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len <= start || len == 0)
		return (ft_strdup(""));
	if (s_len < len + start)
		len = s_len - start;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

// #include <libc.h>
// int	main(void)
// {
// 	char *result1 = ft_substr("aiueo", 2, 2);
// 	char *null_result = ft_substr(NULL, 2, 2);
// 	char *over_result = ft_substr("aiueo", 10, 2);
// 	printf("%s\n", result1);
// 	printf("%s\n", null_result);
// 	printf("%s\n", over_result);
// 	return (0);
// }