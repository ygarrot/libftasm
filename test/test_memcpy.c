/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 12:03:21 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/12 12:37:37 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libs_test.h"
#include <stdlib.h>

void test_memcpy(void)
{
	const char src[50] = "http://www.tutorialspoint.com";
	char dest[50];
	strcpy(dest,"Heloooo!!");
	printf("Before memcpy dest = %s\n", dest);
	printf("%s\n", ft_memcpy(dest, src, strlen(src)+1));
	printf("After memcpy dest = %s\n", dest);
}
