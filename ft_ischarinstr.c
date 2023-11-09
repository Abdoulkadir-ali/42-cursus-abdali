# include "libft.h"

int ft_ischarinstr(char *str, char c)
{
    size_t  i;

    i = 0;
    while (str[i])
    {
        if (c == str[i])
            return 1;
        i++;
    }
    return 0;
}