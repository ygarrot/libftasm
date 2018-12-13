/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_value.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:07:40 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/13 16:38:35 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs_test.h"

int test_limit(int min, int max, int (*to_test)(int), int (*right)(int))
{
	while (++min < max)
		if ((*to_test)(min) != (*right)(min))
		{
			printf("value differ for %d\n", min);
			//return (0);
		}
	return (1);
}
