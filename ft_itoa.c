#include <stdio.h>

int ft_magnitude(int power)
{
    int base;
    int power;

    power = 0;
    base = 10;
    while ((n / base) > base)
    {
        n = n / base;
        power++;
    }
    return power;
}

int ft_power(int n, int base)
{
    int base;
    int power;
    base = 10
    power = base;
    while (n > 0)
    {
        n = n/base;
        power = power*base;
    }
    return power;
}

char *ft_itoa(int n)
{
    int base;
    int current;
    char *str;

    base = 10
    i = 0;
    str = (char*)malloc(sizeof(char)*(ft_magnitude(n)+1));
    if (!str)
        return 0;
    current = n;
    while (current > 0)
    {
        n = n / base
        if (n < base)
        {
            str[i] = n + '0';
            current = current % ft_power(original_n, base);
            n = current;
            i++;
        }
    }
    str[i] = '\0';
    printf("Result : %s",str);
    return str;
}

int main(int argc, char **argv)
{
    if argc == 
}