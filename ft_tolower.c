# include "libft.h"

char    ft_tolower(char c)
{
    if (ft_isupper(c))
        return c + -'A' + 'a';
    return c;
}