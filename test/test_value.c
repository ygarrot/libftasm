/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_value.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:07:40 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/13 17:05:58 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs_test.h"

int test_limit(int min, int max, int (*to_test)(int), int (*right)(int))
{
	int right_result;
	int tested_result;
	while (++min < max)
	{
		tested_result = (*to_test)(min);
		right_result = (*right)(min);
		if ( right_result != tested_result)
		{
			printf("value differ for %d\n", min);
			printf("tested function : %d, true function :%d\n", tested_result, right_result);
			//return (0);
		}
	}
	return (1);
}
