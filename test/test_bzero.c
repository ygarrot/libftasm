/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 14:04:05 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/13 17:06:24 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs_test.h"

void test_bzero()
{
	char *str = strdup("let s go");
	int len = strlen (str);
	ft_bzero(str, len - 1);
	printf("%c\n", str[len]);
	printf("%*s, %lu\n", len, str,  strlen(str));
}
