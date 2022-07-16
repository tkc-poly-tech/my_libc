#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*uc_s1;
	const unsigned char	*uc_s2;

	if (n == 0)
		return (0);
	i = 0;
	uc_s1 = (const unsigned char *)s1;
	uc_s2 = (const unsigned char *)s2;
	while (uc_s1[i] && uc_s2[i] && uc_s1[i] == uc_s2[i] && (i < n - 1))
		i++;
	return (uc_s1[i] - uc_s2[i]);
}

// why use uc* variables -> support the case n = 'a' + 256
// #include <libc.h>
// int	main(void)
// {
// 	char test1[] = "abc\0123";
// 	char test2[] = "abc\0def";
// 	if (strncmp(test1, test2, 5) == 0){
// 		printf("OK\n");
// 	} else {
// 		printf("NG\n");
// 	}
// 	if (ft_strncmp(test1, test2, 5) == 0){
// 		printf("OK\n");
// 	} else {
// 		printf("NG\n");
// 	}
// 	return (0);
// }