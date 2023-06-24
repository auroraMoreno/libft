/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno <aumoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:19:13 by aumoreno          #+#    #+#             */
/*   Updated: 2023/06/24 09:52:08 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	frm;

	if (!s)
		return (0);
	frm = start;
	i = 0;
	while (i < len && s[frm++])
	{
		i++;
	}
	substr = (char *) malloc(i + 1);
	i = 0;
	frm = start;
	if (!substr)
	{
		return (0);
	}
	while (i < len && frm < ft_strlen(s))
	{
		substr[i++] = s[frm++];
	}
	substr[i] = 0;
	return (substr);
}
