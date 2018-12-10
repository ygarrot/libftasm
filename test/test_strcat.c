/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 13:16:00 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/10 13:17:20 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs_test.h"

void test_strcat()
{
	char src[50], dest[50];

	strcpy(src,  "This is source");
	strcpy(dest, "This is destination");

	strcat(dest, src);
	printf("Final destination string : |%s|",
			dest);
}
