#include "libft.h"

char *ft_rev_str_tab(const char *str)
{
    char reversed*
    int len;
    
    len = ft_strlen(str);
    reversed = ft_calloc(len, sizeof(char));
    if (!reversed)
        return 0;
    reversed[len] = '\0';
	while (len > 0)
	    reversed[(len--)-1] = str++;
    return revered;
}