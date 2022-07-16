#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*converted_b;
	size_t			i;

	converted_b = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		converted_b[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// #include <libc.h>
// int	main(void){
// 	char ft_buff[] = "5555555555";
// 	char buff[] = "5555555555";
// 	ft_memset(ft_buff, 'z', 3);
// 	memset(buff, 'o', 3);
// 	printf("ft : %s\n", ft_buff);
// 	printf("     %s\n", buff);
// 	return (0);
// }