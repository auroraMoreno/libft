/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno <aumoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:41:37 by aumoreno          #+#    #+#             */
/*   Updated: 2022/09/25 10:41:37 by aumoreno         ###   ########.fr       */
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
    ft_bzero(str, (nmemb * size));
    return (str);
}