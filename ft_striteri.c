#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

// #include <libc.h>
// void my_func(unsigned int i, char *str)
// {
// 	printf("My inner function: index = %d and string is -> %s\n", i, str);
// }
// int main()
// {
// 	char str[10] = "Hello42!";
// 	printf("The result is %s\n", str);
// 	ft_striteri(str, my_func);
// 	printf("The result is %s\n", str);
// 	return 0;
// }