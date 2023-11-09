#include "libft.h"

char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    int i;
    char *new_str;

    i = 0;
    if (!s)
        return NULL;
    
    new_str = ft_calloc(len, sizeof(char));
    if (!new_str)
        return NULL;
    while (i < len)
        new_str[i++] = s[start++];
    new_str[i] = '\0';
    return new_str;
}