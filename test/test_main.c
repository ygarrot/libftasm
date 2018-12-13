/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 14:03:59 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/13 17:05:44 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libs_test.h"
#include <ctype.h>
int main()
{
	/*test_strlen();
	  test_isalpha();
	  test_toupper();
	  test_memset();
	  test_strcat();
	  test_puts();
	  test_strdup();
	  test_memcpy();
	  test_cat();
	  */
	printf("islower : \n");
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
	test_bzero();
	printf("test done\n");
}
