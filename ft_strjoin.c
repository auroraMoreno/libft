/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno <aumoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:33:07 by aumoreno          #+#    #+#             */
/*   Updated: 2023/01/07 08:58:15 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str; 
	size_t len;
	int i;
	int j;
	size_t lens1; 
	size_t lens2;
	
	if(!s1 || !s2)
		return(0);
	
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	
	len = lens1 + lens2;
	str = (char *) malloc(len + 1);

	if(!str){
		return(0);
	}

	i = 0;
	while(s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	
	j = 0;
	while(s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	
	str[i] = 0;
	return (str);
	
}

/*
int main(void){
	char *st = ft_strjoin("hola que tal", "bien y tu?");
	printf("%s", st);
	free(st);
}
*/