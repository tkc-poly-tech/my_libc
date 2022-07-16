#include "libft.h"

static int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || \
		c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

static int	ft_check_sign(const char *str, size_t i, int *sign)
{
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = -1;
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	number;
	size_t				i;

	sign = 1;
	number = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	i = ft_check_sign(str, i, &sign);
	while (ft_isdigit(str[i]))
	{
		number = (number * 10) + (str[i] - '0');
		if (number > LONG_MAX)
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		i++;
	}
	return (number * sign);
}

// #include <libc.h>
// int	main(int argc, char **argv)
// {
// 	argc = 0;
// 	const	char *str = argv[1];
// 	printf("   %s -> %d\n", str, atoi(str));
// 	printf("ft_%s -> %d\n", str, ft_atoi(str));
// 	return (0);
// }