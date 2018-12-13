/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_cat.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 12:22:42 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/13 13:31:56 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libs_test.h"
#include <fcntl.h>

void test_cat(void)
{
	int fd = open("./cat", O_WRONLY);
	int read = -1;
	if (fd > 0)
		read = ft_cat(fd);
	printf("%s %d\n", "file descriptor : ", fd);
	if (read != -1)
		printf("%d\n", read);
}
