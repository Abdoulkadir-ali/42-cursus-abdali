#include libft.h

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *new_s:
    unsigned int i;
    
    i = 0;
    if (!s || !f)
        return NULL;
    new_s = ft_calloc(ft_strlen(s), sizeof(char));
    if (!new_s)
        return NULL;
    while (*s)
        *new_s++ = (*f)(*s++, );
    *new_s = '\0';
    return new_s;
}

