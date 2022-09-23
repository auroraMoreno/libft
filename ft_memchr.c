/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:21:28 by marvin            #+#    #+#             */
/*   Updated: 2022/09/23 19:21:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    unsigned char *str = (unsigned char *)s;
    unsigned char j = (unsigned char)c;

    i = 0; 
    while(i < n)
    {
        if(str[i] == j)
            return ((void *)str + i);
        i++; 
    }

    return (0);
}

/*
int main(void)
{
    //devuelve el resto del string despues de 'o' 
    char *c = memchr("hola que tal", 'u', 7);
    char *ft_c = ft_memchr("hola que tal", 'u', 7);
    printf("%s", ft_c);
    printf("%s", c);
}
*/
