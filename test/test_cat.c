/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 12:22:42 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/13 17:06:01 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs_test.h"
#include <fcntl.h>

void test_cat(void)
{
	int fd = open("./cat", O_WRONLY);
	if (fd > 0)
		ft_cat(fd);
	printf("%s %d\n", "file descriptor : ", fd);
}
