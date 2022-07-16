#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	i;
	char	*result;

	len = ft_strlen(s1) + 1;
	result = (char *)malloc(sizeof(char) * len);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	char	*string = "This is a copy";
// 	char	*ft_string = "This is a copy";
// 	char	*newstr;
// 	char	*ft_newstr;
// 	if ((newstr = strdup(string)) != NULL)
// 		printf("The new    string is  :  %s\n", newstr);
// 	if ((ft_newstr = ft_strdup(ft_string)) != NULL)
// 		printf("The new ft_string is  :  %s\n", ft_newstr);
// 	return (0);
// }
