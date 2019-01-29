/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 14:03:59 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/29 18:13:42 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libs_test.h"
#include <fcntl.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>

int		ft_abs(int nb);

void test_min(void)
{
	printf("TEST MIN\n");
	int a, b;
	a = 1;
	b = 2;
	printf("IS MIN %d %d :%d\n", a, b, ft_min(a, b));
	a = 6;
	b = 3;
	printf("IS MIN %d %d :%d\n", a, b, ft_min(a, b));
}

void test_max(void)
{
	printf("TEST MAX\n");
	int a, b;
	a = 1;
	b = 2;
	printf("IS MAX %d %d :%d\n", a, b, ft_max(a, b));
	a = 6;
	b = 3;
	printf("IS MAX %d %d :%d\n", a, b, ft_max(a, b));
}

void test_abs(void)
{
	printf("TEST ABS: %d\n", ft_abs(-5));
	printf("TEST ABS: %d\n", ft_abs(5));
	printf("TEST ABS: %d\n", ft_abs(-500));
}

void test_strdup(void)
{
	printf("TEST STRDUP\n");
	char *str = ft_strdup("test strdup");
	(void)str;
	//return ;
	//printf("%c\n", str[0]);
	printf("%s\n", str);
	free(str);
}

void	test_memalloc(void)
{
	printf("TEST MEMALLOC\n");
	char *str = ft_memalloc(10);
	printf("avant : %s\n", str);
	strcpy(str, "salut");
	printf("apres: %s\n", str);

}

void test_cat(void)
{
	printf("TEST CAT\n");
	int fd = open("./test/cat", O_RDONLY);
	if (fd > 0)
		ft_cat(fd);
	ft_cat(-42);
	printf("%s %d\n", "file descriptor : ", fd);
}

void test_strlen(void)
{
	printf("TEST STRLEN\n");
	char *str = "test strlen";
	/* ft_strlen(NULL); */
	/* strlen(NULL); */
	printf("TEST : %s, MINE : %lu, TRUE : %lu\n",
			str, ft_strlen(str), strlen(str));
}

void test_memdel(void)
{
	printf("TEST MEMDEL\n");
	char *str = malloc(42);
	ft_memdel((void**)&str);
	if (!str)
		printf("string was freed\n");
	else
		printf("free has failed\n");
}

void test_strcat()
{
	//char src[50], dest[50];
	printf("TEST STRCAT\n");
	char *src = malloc(50);
	src[0] = 0;
	printf("%s\n", strcat(src, "test"));
	printf("Final destination string : |%s|\n",src);
	printf("%s\n", ft_strcat(src, "test"));
	printf("Final destination string : |%s|\n",src);

	src[0] = 0;
	printf("%s\n", strcat(src, "test"));
	printf("Final destination string : |%s|\n",src);
	src[0] = 0;
	printf("%s\n", ft_strcat(src, "test"));
	fflush(0);
	printf("Final destination string : |%s|\n",src);
	fflush(0);
	free(src);
}

void test_bzero()
{
	printf("TEST BZERO\n");
	char *str = strdup("let s go");
	int len = strlen (str);
	ft_bzero(str, len - 1);
	printf("%c\n", str[len]);
	fflush(0);
	printf("%*s, %lu\n", len, str,  strlen(str));
	fflush(0);
	free(str);
}

void test_memcpy(void)
{
	printf("TEST MEMCPY\n");
	const char src[50] = "http://www.tutorialspoint.com";
	char dest[50];
	strcpy(dest,"Heloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	fflush(0);
	printf("%s\n", ft_memcpy(dest, src, strlen(src)+1));
	printf("After memcpy dest = %s\n", dest);
	fflush(0);
}

void tputs(char *str)
{
	printf("Their puts: {");
	fflush(0);
	int t = puts(str);
	printf("}\nMy puts: {");
	fflush(0);
	int m = ft_puts(str);
	printf("}\nmine:%d their: %d\n", m, t);
	fflush(0);
}

void test_puts(void)
{
	printf("TEST PUTS\n");
	tputs("test");
	tputs("");
	tputs(NULL);
}

void test_memset(void)
{
	printf("TEST MEMSET\n");
	char *str1;
	str1 = strdup("salut");
	char c = 'o';
	int len = ft_strlen(str1);

	ft_memset(str1, c, len );
	printf("TEST MEMSET: %s\n", str1);
	/* memset(NULL, c, len ); */
	/* ft_memset(NULL, c, len ); */
	free(str1);
}

void test_isin(void)
{
	printf("TEST ISIN c  asca %d\n", ft_isin('c', "asca"));
	/* printf("%d\n", ft_isin(0, NULL)); */
}

int main()
{
	test_cat();
	/* test_isalpha(); */
	test_strlen();
	test_strdup();
	/* test_toupper(); */
	test_memset();
	test_puts();
	test_memcpy();
	test_memset();
	test_bzero();
	test_memalloc();
	test_memdel();
	test_isin();
	test_abs();
	test_min();
	test_max();
	test_strdup();
	test_puts();
	test_strcat();
	test_limit(0, 255, ft_tolower, tolower);
	printf("islower : \n");

	test_limit(0, 255, ft_islower, islower);
	printf("isupper : \n");
	test_limit(0, 255, ft_isupper, isupper);
	printf("isdigit : \n");
	test_limit(0, 255, ft_isdigit, isdigit);
	printf("isascii : \n");
	test_limit(0, 255, ft_isascii, isascii);
	printf("isalnum : \n");
	test_limit(0, 255, ft_isalnum, isalnum);
	printf("isprint : \n");
	test_limit(0, 255, ft_isprint, isprint);

	printf("test done\n");
}
