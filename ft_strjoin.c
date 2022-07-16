#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*new_string;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	if (s2_len == SIZE_MAX || s1_len > SIZE_MAX - s2_len - 1)
		return (NULL);
	new_string = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (new_string == NULL)
		return (NULL);
	ft_strlcpy(new_string, s1, s1_len + s2_len + 1);
	ft_strlcat(new_string, s2, s1_len + s2_len + 1);
	return (new_string);
}

// #include <libc.h>
// int	main(void)
// {
// 	// char *result1 = ft_strjoin("123", "abc");
// 	// char *null_result = ft_strjoin(NULL, "abc");
// 	char *null2_result = ft_strjoin(NULL, NULL);
// 	char *null3_result = ft_strjoin("", "");
// 	char *null4_result = ft_strjoin("", "42");
// 	char *null5_result = ft_strjoin("42", "");
// 	// printf("%s\n", result1);
// 	// printf("%s\n", null_result);
// 	printf("%s\n", null2_result);
// 	printf("%s\n", null3_result);
// 	printf("%s\n", null4_result);
// 	printf("%s\n", null5_result);
// 	return (0);
// }