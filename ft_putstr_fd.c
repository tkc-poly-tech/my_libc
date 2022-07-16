#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	s_len;

	if (s == NULL || fd < 0)
		return ;
	s_len = ft_strlen(s);
	while (INT_MAX < s_len)
	{
		write(fd, s, INT_MAX);
		s_len -= INT_MAX;
		s += INT_MAX;
	}
	write(fd, s, s_len);
}
