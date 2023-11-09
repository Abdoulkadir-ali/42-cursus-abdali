#include "libft.h"

char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    int i;

    i = 0;
    if (!s)
        return NULL;
    
    new_str = (char*)malloc(sizeof(char)* len);
    if (!new_str)
        return NULL;
    {
        while (start < start+len)
        {
            new_str[i] = s[start]
            start++;
            i++;
        }
    return void *;
}