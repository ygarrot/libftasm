/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libs_test.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 14:03:42 by ygarrot           #+#    #+#             */
/*   Updated: 2018/12/09 16:08:32 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void ft_bzero(char *str, size_t len);
int ft_isalpha(int c);
int ft_toupper(int c);
int ft_puts(const char *s);
size_t ft_strlen(const char *s);
char *ft_strcat(const char *s1, const char *s2);

void test_isalpha(void);
void test_bzero(void);
void test_toupper(void);
void test_puts(void);
void test_strlen(void);
void test_strcat(void);
