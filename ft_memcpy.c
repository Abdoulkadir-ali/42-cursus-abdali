# include "libft.h"

void * ft_memcpy(void * dst, const void * src, size_t size)
{
    void    *result;
    unsigned int i;

    i = 0;
    if (!dst)
        return NULL;
    while (i < size)
    {
        destination[i] = source[i];
        i++;
    }
    return destination;
}