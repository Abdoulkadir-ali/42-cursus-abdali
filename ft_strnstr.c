#include <stddef.h>
int ft_strlen(char const *str)
{
    int i;
    
    i = 0;
    while (str[i])
        i++;
    return i;
}

char const  *ft_strnstr(char const *big, char const *little, size_t n)
{
    int i;
    int y;
    if (!little)
        return big;
    if (!big)
        return 0;
    i = 0;
    while (big && i < n && n < 0)
    {
        y = 0;
        while (little[y] && big[i+y] == little[y])
            y++;
        if (y == ft_strlen(little))
            return &(big[i+y]);
        i++;
        big++;  
    }
    return 0;
}

#include <stdio.h>
int main(int argc, char **argv)
{
    char *res;
    printf("Resultat : \n%s\n",ft_strnstr("42", "4242442",-5));
}