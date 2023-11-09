# include "libft.h"

int ft_magnitude(int n, int base)
{
    int power;

    power = 0;
    if (n < 0)
        n = -n;
    while (n > base)
    {
        n = n / base;
        power++;
    }
    return power;
}