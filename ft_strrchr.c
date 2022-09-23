/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:22:20 by marvin            #+#    #+#             */
/*   Updated: 2022/09/23 19:22:20 by marvin           ###   ########.fr       */
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