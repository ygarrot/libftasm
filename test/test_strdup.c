/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 12:52:13 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/13 11:49:31 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs_test.h"
#include <stdlib.h>
void test_strdup(void)
{
	char *str = ft_strdup("test strdup");
	(void)str;
	//return ;
	//printf("%c\n", str[0]);
	printf("%s\n", str);
	free(str);
}
