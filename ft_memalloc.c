# include "libft.h"
# include <stdlib.h>

void    *ft_memalloc(size_t size)
{
    void    *result;

    result = malloc(size + 1);
    if (result)
    {
        ft_memeset(result, '\0', size);
    }
    return
}