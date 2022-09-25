/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:54:34 by marvin            #+#    #+#             */
/*   Updated: 2022/09/23 19:54:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
coge varios bloques de memoria con el mismo tamaño;
como malloc pero dinámico;
nmemb => cantidad de bloques de memoria
size => tamaño de los bloques
*/
void *ft_calloc(size_t nmemb, size_t size)
{
    void *str;
    str = (void *)malloc(nmemb * size);
    if(str == 0)
        return (0);
    
    return (str);
}