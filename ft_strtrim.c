#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	front_str;
	size_t	end_str;
	char	*trim_str;

	if (s1 == NULL || set == NULL)
		return (NULL);
	front_str = 0;
	while (s1[front_str] != '\0' && ft_strchr(set, s1[front_str]) != NULL)
	{
		front_str++;
	}
	end_str = ft_strlen(s1) - 1;
	while (s1[end_str] != '\0' && ft_strchr(set, s1[end_str]) != NULL && \
			front_str < end_str)
	{
		end_str--;
	}
	end_str += 1;
	trim_str = (char *)malloc(sizeof(char) * (end_str - front_str + 1));
	if (trim_str == NULL)
		return (NULL);
	// if (trim_str != NULL)
		ft_strlcpy(trim_str, &s1[front_str], (end_str - front_str + 1));
	return (trim_str);
}

// #include <libc.h>
// int	main(void)
// {
// 	char *result1 = ft_strtrim("XXXX123XXX123XXX123", "X");
// 	char *result2 = ft_strtrim("XXXX123XXX123XXX123", "3");
// 	char *result3 = ft_strtrim("XXXX123XXX123XXX123", "z");
// 	printf("%s\n", result1);
// 	printf("%s\n", result2);
// 	printf("%s\n", result3);
// 	return (0);
// }