/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 16:53:36 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/08 17:42:52 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs_test.h"
#include <ctype.h>
void test_toupper(void)
{
	int i = 64;
	while (++i < 123)
		printf("VALUE : %c, Mine : %c, TRUE : %c\n"
			, i, ft_toupper(i), toupper(i));
}
