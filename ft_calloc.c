# include "libft.h"

void * ft_calloc(size_t len, size_t element_size)
{
    void * ptr;

    ptr = (void*)malloc(len * element_size);
    if (!ptr)
        return NULL;
    ft_bzero(ptr,len);
    return (ptr);
}