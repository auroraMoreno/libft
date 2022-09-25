/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno <aumoreno@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:39:52 by aumoreno          #+#    #+#             */
/*   Updated: 2022/09/25 10:39:52 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
char *ft_strchr(const char *s, int c)
{
	char *aux = (char *)s;
	while(*aux != c)
	{
		if(*aux == '\0')
		{
			return (0);
		}
		aux++;
	}
	return (aux);
}

/*int main(void)
{
	printf("%s", ft_strchr("hola", 'i'));
	printf("%s", strchr("hola", 'i'));
}*/