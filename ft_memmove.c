# include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t n)
{
    void *tmp;
    int i;

    if (!dst || !src)
        return NULL;
    tmp = ft_calloc(n, sizeof(char));
    if (!tmp)
        return NULL;
    ft_strcopy(src, tmp);
    ft_strcopy(tmp,dst);
    return dst;
}