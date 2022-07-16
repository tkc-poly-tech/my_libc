#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c += 'a' - 'A');
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
// 	printf("tolower\t\t: %c\n", tolower(c));
// 	ed = clock();
// 	printf("official time : %lf sec\n", (double)(ed - st) / CLOCKS_PER_SEC);
// 	st = clock();
// 	printf("ft_tolower\t: %c\n", ft_tolower(c));
// 	ed = clock();
// 	printf("selfmade time : %lf sec\n", (double)(ed - st) / CLOCKS_PER_SEC);
// 	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
// 	assert(tolower(c) == ft_tolower(c));
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