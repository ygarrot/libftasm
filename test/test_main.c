/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 14:03:59 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/14 12:53:39 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libs_test.h"
#include <fcntl.h>
#include <stdlib.h>
#include <ctype.h>

void test_strdup(void)
{
	char *str = ft_strdup("test strdup");
	(void)str;
	//return ;
	//printf("%c\n", str[0]);
	printf("%s\n", str);
	free(str);
}

void	test_memalloc(void)
{
	char *str = ft_memalloc(10);
	printf("avant : %s\n", str);
	strcpy(str, "salut");
	printf("apres: %s\n", str);

}

void test_cat(void)
{
	int fd = open("./cat", O_RDONLY);
	if (fd > 0)
		ft_cat(1);
	printf("%s %d\n", "file descriptor : ", fd);
}

void test_strlen(void)
{
	char *str = "test strlen";
	printf("TEST : %s, MINE : %lu, TRUE : %lu\n",
			str, ft_strlen(str), strlen(str));
}

void test_memdel(void)
{
	char *str = malloc(42);
	ft_memdel(&str);
	if (!str)
		printf("string was freed\n");
	else
		printf("free has failed\n");
}

void test_strcat()
{
	char src[50], dest[50];

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");

	strcat(dest, src);
	printf("Final destination string : |%s|",
			dest);
}

void test_bzero()
{
	char *str = strdup("let s go");
	int len = strlen (str);
	ft_bzero(str, len - 1);
	printf("%c\n", str[len]);
	printf("%*s, %lu\n", len, str,  strlen(str));
}

void test_memcpy(void)
{
	const char src[50] = "http://www.tutorialspoint.com";
	char dest[50];
	strcpy(dest,"Heloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	printf("%s\n", ft_memcpy(dest, src, strlen(src)+1));
	printf("After memcpy dest = %s\n", dest);
}

void test_puts(void)
{
	ft_puts("wdwerwertest ft_puts");
	printf("\n");
}

void test_memset(void)
{
	char *str1;
	str1 = strdup("salut");
	char c = 'o';
	int len = ft_strlen(str1);

	ft_memset(str1, c, len );
	printf("%s\n", str1);
}

void test_isin(void)
{
	printf("%d\n", ft_isin('c', "salut les "));
}

int main()
{
	/*  test_isalpha();
	test_strlen();
	  test_toupper();
	  test_memset();
	  test_strcat();
	  test_puts();
	  test_memcpy();
	  test_cat();
		test_bzero();
	test_memalloc();
	test_memdel();
	  */
	test_isin();
	//	test_strdup();
		/*printf("islower : \n");
	
	test_limit(0, 128, ft_islower, islower);
	printf("isupper : \n");
	test_limit(0, 128, ft_isupper, isupper);
	printf("isdigit : \n");
	test_limit(0, 128, ft_isdigit, isdigit);
	printf("isascii : \n");
	test_limit(0, 128, ft_isascii, isascii);
	printf("isalnum : \n");
	test_limit(0, 128, ft_isalnum, isalnum);
	printf("isprint : \n");
	test_limit(0, 128, ft_isprint, isprint);

	printf("test done\n");*/
}
