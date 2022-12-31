/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno <aumoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:38:17 by aumoreno          #+#    #+#             */
/*   Updated: 2022/12/31 13:32:27 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_isalpha(int c);

int ft_isdigit(int c);

int ft_isalnum(int c);

int ft_isascii(int c);

int ft_isprint(int c);

size_t ft_strlen(const char *s);

void *ft_memset(void *str, int c, size_t n);

void ft_bzero(void *s, size_t n);

void *ft_memcpy(void *dst, const void *src, size_t n);

void *ft_memmove(void *dst, const void *src, size_t n);

void *ft_memcpy(void *dst, const void *src, size_t n);

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int ft_toupper(int c);

int ft_tolower(int c);

char *ft_strchr(const char *s, int c);

char *ft_strrchr(const char *s, int c);

int ft_strncmp(const char *s1, const char *s2, size_t n);

void *ft_memchr(const void *s, int c, size_t n);

int ft_memcmp(const void *s1, const void *s2, size_t n);

char *ft_strnstr(const char	*big, const char *little, size_t len);

int ft_atoi(const char *str);

char *ft_substr(char const *s, unsigned int start,
size_t len);








