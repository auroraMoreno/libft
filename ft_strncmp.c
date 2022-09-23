#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

    i = 0;
    while((s1)[i] != '\0' && s2[i] != '\0' && i < n)
    {
        if(((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
            return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
        i++;
    }

    if(i != n)
        return(((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
    
    return (0);
}

int main(void)
{
    printf("%d", ft_strncmp("hola que tal", "hola que haces", 7));
    printf("%d", strncmp("hola que tal", "hola que haces", 7));
}