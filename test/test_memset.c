/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 14:12:16 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/12 11:58:34 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libs_test.h"
void test_memset(void)
{
	char *str1;
	str1 = strdup("salut");
	char c = 'o';
	int len = ft_strlen(str1);

	ft_memset(str1, c, len );
	printf("%s\n", str1);
}
