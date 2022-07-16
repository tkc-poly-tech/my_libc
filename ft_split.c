#include "libft.h"

static char	**ft_free(char **lst)
{
	size_t	i;

	i = 0;
	while (lst[i])
	{
		free(lst[i]);
		i++;
	}
	free(lst);
	return (0);
}

static size_t	ft_count(const char *s, char c)
{
	size_t	i;
	size_t	listsize;

	i = 0;
	listsize = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || \
		(s[i] == c && s[i + 1] != '\0' && s[i + 1] != c))
			listsize++;
		i++;
	}
	return (listsize);
}

char	**ft_split(const char *s, char c)
{
	char	**strlist;
	size_t	index_strlist;
	size_t	j;
	size_t	tmp_len;

	index_strlist = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	strlist = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (strlist == NULL)
		return (NULL);
	while (index_strlist < ft_count(s, c))
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		tmp_len = j;
		while (s[j] != '\0' && s[j] != c)
			j++;
		strlist[index_strlist] = ft_substr(s, tmp_len, j - tmp_len);
		if (strlist[index_strlist++] == NULL)
			return (ft_free(strlist));
	}
	strlist[index_strlist] = NULL;
	return (strlist);
}

// #include <libc.h>
// int				main(void)
// {
// 	char	**tab;
// 	unsigned int	i;

// 	i = 0;
// 	tab = ft_split("      one       two     three  !!", ' ');
// 	if (!tab[0])
// 		ft_putendl_fd("ok\n", 1);
// 	while (tab[i] != NULL)
// 	{
// 		ft_putendl_fd(tab[i], 1);
// 		i++;
// 	}
// }