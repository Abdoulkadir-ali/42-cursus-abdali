strlcat(char *dst, const char *src, size_t size)
# include "libft.h"

void ft_strlcpy(char *src, char *dst, size_t l)
{
    size_t  i;

    i = l;
    if (l < 0)
    {
        while (src[l] && i < l - 1)
        {
            dst[i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    while (src[i])
            i++;
    return i;
}