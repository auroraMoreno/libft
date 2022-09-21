/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 20:06:02 by marvin            #+#    #+#             */
/*   Updated: 2022/09/17 20:06:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char *tmp;
	char *d;

	tmp = (char *)src;
	d = (char *)dst;
	if (tmp < d)
	{
		while (n--)
			d[n] = tmp[n];
	}
	else
		ft_memcpy(d, tmp, n);
	return (dst);
}
