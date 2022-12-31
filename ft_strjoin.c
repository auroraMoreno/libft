/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aumoreno <aumoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:33:07 by aumoreno          #+#    #+#             */
/*   Updated: 2022/12/31 15:09:16 by aumoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *str; 
	size_t len;
	size_t i;
	size_t lens1;
	size_t lens2;
	
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	
	len = lens1 + lens2;
	str = (char *) malloc(len);

	if(!str){
		return(0);
	}

	i = 0;
	while(i < lens1)
	{
		str[i] = s1[i];
	}
	
	
	
	return (str);
	
}

int main(void){
	
}