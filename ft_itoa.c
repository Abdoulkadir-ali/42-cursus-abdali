# include "libft.h"

char    *ft_alloc_str(size_t n)
{
    size_t len;
    int neg;

    neg = 0;
    if (n < 0)
    {
        len = ft_magnitude(-n, 10)+3;
        neg = 1
    }
    else
        len = ft_magnitude(n, 10)+2;
    str = ft_calloc(len, sizeof(char));
    if (neg)
        str[0] = '-';
    return str;
}

char *ft_itoa(int n)
{
    char *str;
    size_t len;

    str = ft_alloc_str(n);
    if (!str)
        return 0;
    if n < 0
        n = -n;
    str[len-1] = '\0';
    while (n > 0)
    {
        magnitude = ft_power(10, (ft_magnitude(n, 10)));
        magnitude = magnitude * (n / magnitude);
        if (n > 10)
            str[len-2] = (n % magnitude) + '0';
        else
            str[len-2] = n + '0';
        n = n / 10;
        len--;
    }
    return str;
}