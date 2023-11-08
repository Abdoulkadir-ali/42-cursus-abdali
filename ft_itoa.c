# include <stdio.h>
# include <stdlib.h>

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

int ft_power(int n, int power)
{
    int orig_n;

    orig_n = n;
    if (power == 0)
        return 1;
    while (power > 1)
    {
        n *= orig_n;
        power--;
    }
    return n;
}

char *ft_itoa(int n)
{
    char *str;
    int magnitude;
    int len;

    if (n < 0)
    {
        len = ft_magnitude(n, 10)+3;
        n = -n;
    }
    else
        len = ft_magnitude(n, 10)+2;
    str = (char*)malloc(sizeof(char)*(len));
    if (!str)
        return 0;
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
    if (str[0] == 0)
        str[0] = '-';
    return str;
}

int main(int argc, char **argv)
{
    int n;

    n = -59;
    printf("%d is '%s' in ascii\n",n, ft_itoa(n));
}