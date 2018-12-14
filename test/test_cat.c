/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 12:22:42 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/14 11:04:52 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs_test.h"
#include <fcntl.h>

void test_cat(void)
{
	int fd = open("./cat", O_RDONLY);
	if (fd > 0)
		ft_cat(1);
	printf("%s %d\n", "file descriptor : ", fd);
}
