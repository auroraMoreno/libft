/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:15:00 by marvin            #+#    #+#             */
/*   Updated: 2022/09/17 19:15:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
        return (1);
    
    return (0);
}

int ft_isalnum(int c)
{
    if(ft_isalpha(c) == 1 || (ft_isdigit(c) == 1))
        return (1);
    return (0);
}

/*int main(void)
{
    printf("%d", ft_isalnum('6'));
}
*/

