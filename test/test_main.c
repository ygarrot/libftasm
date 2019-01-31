/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 14:03:59 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/31 11:37:39 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs_test.h"
#include <fcntl.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>

void test_min(void)
{
	printf("*****************************  TEST MIN\n");
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
	printf("*****************************  TEST MAX\n");
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
	printf("*****************************  TEST ABS\n");
	printf("-5 %d\n", ft_abs(-5));
	printf("5 %d\n", ft_abs(5));
	printf("-500 %d\n", ft_abs(-500));
}

void test_strndup(void)
{
	printf("*****************************  TEST STRNDUP\n");
	char *str = ft_strndup("test strdup", 1);
	if (!str)
		return;
	printf("{%s}\n", str);
	free(str);
	/* str = strndup(NULL, 5); */
	str = ft_strndup("12345", 5);
	printf("{%s}\n", str);
	free(str);
	str = ft_strndup("", 5);
	printf("{%s}\n", str);
	free(str);
}

void test_strdupto(void)
{
	printf("*****************************  TEST STRDUPTO\n");
	char *str = ft_strdupto("test strdup", 'u');
	printf("{%s}\n", str);
	free(str);
	str = ft_strdupto("", 'c');
	printf("{%s}\n", str);
	free(str);
}

void test_strdup(void)
{
	printf("*****************************  TEST STRDUP\n");
	/* strdup(NULL); */
	char *str = ft_strdup("test strdup");
	printf("{%s}\n", str);
	free(str);
	str = ft_strdup("");
	printf("{%s}\n", str);
	free(str);
}

void	test_memalloc(void)
{
	printf("*****************************  TEST MEMALLOC\n");
	char *str = ft_memalloc(10);
	printf("avant : %s\n", str);
	strcpy(str, "salut");
	printf("apres: %s\n", str);
}

void cat(char *str)
{
	int fd = open(str, O_RDONLY);
	if (fd > 0)
		ft_cat(fd);
	ft_cat(-42);
	printf("%s %d\n", "file descriptor : ", fd);
	close(fd);
}

void test_cat(void)
{
	printf("*****************************  TEST CAT\n");
	/* cat("/dev/random"); */
	/* cat("/dev/random"); */
	cat("./test/test_value.c");
}

void test_strnlen(void)
{
	printf("*****************************  TEST STRNLEN\n");
	char *str = "test strnlen";
	/* ft_strlen(NULL); */
	/* strlen(NULL); */
	printf("TEST : %s, MINE : %lu, TRUE : %lu\n",
			str, ft_strnlen(str, 5), strnlen(str, 5));
	printf("TEST : %s, MINE : %lu, TRUE : %lu\n",
			str, ft_strnlen("", 5), strnlen("", 5));
	printf("TEST : %s, MINE : %lu, TRUE : %lu\n",
			str, ft_strnlen("awaw", 1), strnlen("awaw", 1));
	printf("TEST : %s, MINE : %lu, TRUE : %lu\n",
			str, ft_strnlen("awaw", 0), strnlen("awaw", 0));
	printf("TEST : %s, MINE : %lu, TRUE : %lu\n",
			str, ft_strnlen("1", 5), strnlen("1", 5));
}


void test_strlento(void)
{
	printf("*****************************  TEST STRLENTO\n");
	printf("%d\n", (int)ft_strlento("petitponeys", 'y'));
	printf("%d\n", (int)ft_strlento("", 'y'));
	printf("%d\n", (int)ft_strlento("ry", 'y'));
	printf("%d\n", (int)ft_strlento("y", 'y'));
}

void test_strlen(void)
{
	printf("*****************************  TEST STRLEN\n");
	char *str = "test strlen";
	/* ft_strlen(NULL); */
	/* strlen(NULL); */
	printf("TEST : %s, MINE : %lu, TRUE : %lu\n",
			str, ft_strlen(str), strlen(str));
	printf("TEST : %s, MINE : %lu, TRUE : %lu\n",
			str, ft_strlen(""), strlen(""));
}

void test_strcat()
{
	//char src[50], dest[50];
	printf("*****************************  TEST STRCAT\n");
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

void test_strcpy()
{
	char str1[10]= "awesome";
	char str2[10];
	char str3[20];

	printf("*****************************  TEST STRCPY\n");
	printf("%s %s\n", ft_strcpy(str2, str1), ft_strcpy(str2, str1));
	printf("%s %s\n", ft_strcpy(str3, "well"), ft_strcpy(str3, "well"));
	/* ft_strcpy(str3, str2); */
	printf("%s\n", str2);
	printf("%s\n", str3);
}

void test_bzero()
{
	printf("*****************************  TEST BZERO\n");
	char *str = strdup("let s go");
	int len = strlen (str);
	ft_bzero(str, len - 1);
	printf("%c\n", str[len]);
	fflush(0);
	printf("{%*s}, %lu\n", len, str,  strlen(str));
	fflush(0);
	free(str);
}

void test_memcpy(void)
{
	memcpy(NULL, NULL, 12);
	ft_memcpy(NULL, NULL, 12);
	printf("*****************************  TEST MEMCPY\n");
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
	printf("*****************************  TEST PUTS\n");
	tputs("test");
	tputs("");
	tputs(NULL);
}

void test_memset(void)
{
	printf("*****************************  TEST MEMSET\n");
	char *str1;
	str1 = strdup("salut");
	char c = 'o';
	int len = ft_strlen(str1);

	
	printf("true:{%s} false:{%s}\n", ft_memset(str1, c, len ), memset(str1, c, len));
	free(str1);
}

void test_isin(void)
{
	printf("*****************************  TEST ISIN\n");
	printf("c  asca %d\n", ft_isin('c', "asca"));
	printf("x  asca %d\n", ft_isin('x', "asca"));
	printf("x  \"\" %d\n", ft_isin('x', ""));
	printf("u  \"u\" asca %d\n", ft_isin('u', "u"));
}

int main()
{
	test_strlen();
	test_strnlen();
	test_strlento();

	test_strdup();
	test_strndup();
	test_strdupto();

	test_strcpy();
	test_strcat();
	test_memcpy();
	test_memset();

	test_puts();
	test_bzero();
	test_memalloc();
	test_isin();
	test_abs();
	test_min();
	test_max();

	printf("tolower : \n");
	test_limit(0, 255, ft_tolower, tolower);
	printf("toupper : \n");
	test_limit(0, 255, ft_toupper, toupper);
	printf("isalpha : \n");
	test_limit(0, 255, ft_isalpha, isalpha);
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

	test_cat();

	printf("test done\n");
}
