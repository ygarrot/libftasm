/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libs_test.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 14:03:42 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/30 18:54:30 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBS_TEST_H
# define LIBS_TEST_H
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/* #include "../libft/includes/libft.h" */

void	ft_bzero(char *str, size_t len);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_isalnum(int c);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_min(int a, int b);
int		ft_max(int a, int b);
int		ft_tolower(int c);
int		ft_puts(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strdupto(const char *s1, const char c);
char	*ft_strndup(const char *s1, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strnlen(const char *s, size_t maxlen);
size_t	ft_strlento(const char *s, const char c);
char	*ft_strcat(const char *s1, const char *s2);
char	*ft_strcpy(char *s1, const char *s2);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memalloc(size_t size);
void	ft_cat(int fd);
int		ft_isin(char c, char *str);

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
void test_memalloc(void);
void test_cat(void);
int test_limit(int min, int max, int (*to_test)(int), int (*right)(int));
#endif
