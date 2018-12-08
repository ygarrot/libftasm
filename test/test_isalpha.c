/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 14:04:03 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/08 17:03:57 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libs_test.h"
#include <ctype.h>
void test_isalpha(void)
{
	int i = 64;
	while (++i < 123)
		printf("VALUE : %d , Mine : %d, TRUE : %d\n"
			, i, ft_isalpha(i), isalpha(i));
}
