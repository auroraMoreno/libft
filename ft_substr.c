/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno <aumoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 13:19:13 by aumoreno          #+#    #+#             */
/*   Updated: 2022/12/31 13:33:43 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



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

PSEUDOCODIGO
-comprobar que s tiene contenido 
	si no returrn 0
-iniciar el contador a 0 

*/

#include "libft.h"


char *ft_substr(char const *s, unsigned int start,
size_t len)
{
	char *substr;
	size_t i;
	//start = (size_t)start;
	size_t frm;
	if(!s)
		return(0);
	
	frm = start;
	i = 0;
	while(i < len && s[frm++]){
		i++;
	}
	substr = (char *) malloc(i + 1);
	i = 0;
	frm = start;
	if(!substr){
		return(0);
	}
	while(i < len && frm < ft_strlen(s)){
		substr[i++] = s[frm++];
	}
	substr[i] = 0;
	return (substr);
}
/*
int main(void){
	
	char *st = ft_substr("hola que tal", 2, 5);
	printf("%s", st);
	free(st);
}
*/