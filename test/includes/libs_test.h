/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libs_test.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 14:03:42 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/13 15:06:57 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void	ft_bzero(char *str, size_t len);
int		ft_isalpha(int c);
int		ft_toupper(int c);
int		ft_puts(const char *s);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	*ft_strcat(const char *s1, const char *s2);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_cat(int fd);

void test_isalpha(void);
void test_isdigit(void);
void test_isprint(void);

void test_toupper(void);
void test_puts(void);
void test_strlen(void);
void test_strcat(void);
void test_strdup(void);

void test_bzero(void);
void test_memset(void);
void test_memcpy(void);

void test_cat(void);
