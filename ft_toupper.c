#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c -= ('a' - 'A'));
	return (c);
}

// #include <stdio.h>
// #include <time.h>
// #include <ctype.h>
// #include <assert.h>
// static void test(int c)
// {
// 	clock_t st, ed;
// 	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	printf("In\t\t: %c\n", c);
// 	printf("Out\t\t:\n");
// 	st = clock();
// 	printf("toupper\t\t: %c\n", toupper(c));
// 	ed = clock();
// 	printf("official time   : %lf sec\n", (double)(ed - st) / CLOCKS_PER_SEC);
// 	st = clock();
// 	printf("ft_toupper\t: %c\n", ft_toupper(c));
// 	ed = clock();
// 	printf("selfmade time   : %lf sec\n", (double)(ed - st) / CLOCKS_PER_SEC);
// 	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	assert(toupper(c) == ft_toupper(c));
// }
// int main()
// {
// 	test('e');
// 	test('g');
// 	test('E');
// 	test('G');
// 	test(-1);
// 	test(0);
// 	test(1);
// 	test('1');
// 	return (0);
// }