/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno <aumoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 12:03:30 by aumoreno          #+#    #+#             */
/*   Updated: 2023/01/14 12:04:29 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.

returns: 
*/

char **ft_split(char const *s, char c)
{
	char **str;
	int i;
	int j;
	size_t l;
	size_t space;
	
	if(!s || !c)
		return (0);

	i = 0;
	space = 0;
	/*contar las palabras*/
	while(s[i]){
		if(s[i] == 32)
		{
			space++;	
		}
	}

	l = space + ft_strlen(s);
	str = (char **) malloc(l + 1);
	
	if(!str)
		return(0);
	
	i = 0;
	j = 0;
	/*
		si es espacio hay que sustituirlo por el 
		delimitador
		contar palabras
		
	*/
	while(s[i])
	{
		if(s[i] == 32)
		{
			str[j] = c;
		}
 
		i++;
		j++;
	}

	return (str);
}

int main(void)
{
	char **str = ft_split("hello world split", ',');
	printf("%s",str);
	free(str);
}