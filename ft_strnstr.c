#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t n)
{
    int i;
    int y;
    if (!little)
        return ((char *)big);
    if (!big)
        return NULL;
    i = 0;
    while (big[i] && i < n)
    {
        y = 0;
        while (big[i+y] && little[y] && big[i+y] == little[y])
            y++;
        if (!little[y])
            return ((char*)(big + i + y));
        i++;
    }
    return NULL;
}
