/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/09 12:26:19 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/09 12:29:41 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs_test.h"

void test_strlen(void)
{
	char *str = "test strlen";
	printf("TEST : %s, MINE : %lu, TRUE : %lu\n", str, ft_strlen(str), strlen(str));
}
