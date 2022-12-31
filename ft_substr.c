/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno <aumoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:19:13 by aumoreno          #+#    #+#             */
/*   Updated: 2022/12/31 11:03:15 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
s: The string from which to create the substring.
start: The start index of the substring in the
string ’s’.
len: The maximum length of the substring.

Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.

una funcion que le llega: 
s=> el string inicial
start=> el entero que indica en que letra empezar 
len => cuantas letras tiene que cortar 

*/

char *ft_substr(char const *s, unsigned int start,
size_t len)
{
	void *substr;
	substr = (char *) malloc(3 * sizeof(len));
	while(len >= 0){
		substr = ft_strchr(s, start);
	}
	return substr;
}

int main(void){
	
	char *s = ft_substr("hola que tal", 2, 5);
	printf("%s",s);
	free(s);
}