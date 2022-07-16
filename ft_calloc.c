#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	n;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (SIZE_MAX / count < size)
		return (NULL);
	n = count * size;
	p = malloc(n);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, n);
	return (p);
}

// #include <libc.h>
// int	main(void)
// {
// 	int *ptr, *p;
// 	int *ft_ptr, *ft_p;
// 	int i;
// 	ptr = (int *)calloc(100, 1);
// 	ft_ptr = (int *)ft_calloc(100, 1);
// 	if(ptr == NULL || ft_ptr == NULL) {
// 		printf("Failed\n");
// 		exit(EXIT_FAILURE);
// 	}
// 	p = ptr;
// 	ft_p = ft_ptr;
// 	printf("calloc\tft_calloc\n");
// 	for (i = 0; i < 100; i++)
// 	{
// 		*p = i;
// 		*ft_p = i;
// 		printf("%d\t", *p);
// 		printf("%d\n", *ft_p);
// 		p++;
// 		ft_p++;
// 	}
// 	free(ptr);
// 	free(ft_ptr);
// 	return (0);
// }