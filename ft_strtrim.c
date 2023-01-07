/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno <aumoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 08:09:35 by aumoreno          #+#    #+#             */
/*   Updated: 2023/01/07 11:44:56 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

/*
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
esta funcionn quita tanto del principio como del final; 
es decir:
"hello world!"
trim("held!")
=> o Wor
porque la h y la e están al principio pero la 
l está tanto al principio como al final 
entonces hay que comprobar  que esté al princpio y al final,
si no es el ultimo o el primero esq no se tiene que quitar 

PSEUDOCODGIO
	metodo trim 
	metedo para comprobar que el charact ersta o o está en lel sstr:
		pasarle el charaacter en el que está y el set, recorrer el set
		devolver 1 si está 
	
*/

int ft_checking_char(char c, char const *set)
{
	int i;

	i = 0; 
	while(set[i])
	{
		if(set[i] == c)
			return(1);
		i++;
	}

	return (0);
}



char *ft_strtrim(char const *s1, char const *set)
{
	char *str;
	size_t start;
	size_t end;
	int i;
	
	
	if(!s1 || !set)
		return (0);
	
	start = 0;
	end = ft_strlen(s1); 

		/*
		si s1[start] == alguno de los chars de set 
			pasar sin copiar
			la j solo tiene que pasarse si se ha encontrado, para que pase 
			al siguiente char
		si no 
			copiar
			i++;

		**********
		mientras s1[start] y está en el set
			start++
		mientras end > start y esté en el set
			end-- (vamos restado porque estamos empezando desde el final
			es "pasar sin copiar" pero emppezamos por el final 
			)
		
		
	*/
	while(s1[start] && ft_checking_char(s1[start], set))
		start++;
	while(end > start && ft_checking_char(s1[end - 1], set))
		end--;

	str = (char *) malloc(((end - start) + 1)); 
	
	if(!str)
		return (0);
	
	i = 0;
	while(start < end)
	{
		str[i] = s1[start];
		i++;
		start++;
	}

	str[i] = 0;
	return (str);
}
/*
int main(void)
{
	char *st = ft_strtrim("hello world!", "held!");
	printf("%s", st);
	free(st);
}
*/
