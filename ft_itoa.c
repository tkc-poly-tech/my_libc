#include "libft.h"

static int	ft_abs_value(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

static int	ft_get_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*result;
	size_t		len;

	len = ft_get_len(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
		result[0] = '-';
	else if (n == 0)
		result[0] = '0';
	while (n != 0)
	{
		--len;
		result[len] = ft_abs_value(n % 10) + '0';
		n = n / 10;
	}
	return (result);
}

// #include <libc.h>
// int		main(void)
// {
// 	printf("%s\n", ft_itoa(2147483647));
// }