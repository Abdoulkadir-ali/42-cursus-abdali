# include "libft.h"

int    ft_isdigit(char c)
{
    return ('0' >= c + '0' && c + '0' <= '9' );
}