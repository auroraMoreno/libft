/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno <aumoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:39:14 by aumoreno          #+#    #+#             */
/*   Updated: 2022/09/25 10:39:14 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	const char *aux;
	int len;

	aux = s;
	len = ft_strlen(aux);
	s += len;
	while (s != aux && c != *s)
		s--;
	if((unsigned char)c == (unsigned char)*s)
		return ((char *)s);
	return (0);
}
/*
int main(void)
{
	printf("%s",ft_strrchr("holaquetal", 'a'));
	printf("%s",strrchr("holaquetal", 'a'));
}
*/