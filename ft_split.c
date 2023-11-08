# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int ft_occurences(char *s1, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s1 && s1[i])
    {
        if (s1[i] == c)
        {
            while(s1[i]==c)
            {
                i++;
            }
            count += 1;
        }
        i++;
    }
    return (count+1);
}

int ft_len_occurences(char *str, char c, int occurence_index)
{
    int i;
    int occurence;
    int occurence_len;
    
    i = 0;
    occurence = 0;
    occurence_len = 0;
    while (str[i])
    {
        if (str[i] == c)
        {
            while (str[i] == c)
                i++;
        occurence +=1;
        }    
        if (occurence == occurence_index)
            occurence_len += 1;
        i++;
    }
    return (occurence_len);
}

void ft_strlcpy(char *src, char *dst, int len)
{
    int i;
    i = 0;
    while (i < len)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
}

#include <stdio.h>
char **ft_split(char *str, char c)
{
    char **splitted;
    int i;
    int y;
    int j;

    i = 0;
    splitted = (char **)malloc(sizeof(char**)*(ft_occurences(str,c)+1));
    splitted[ft_occurences(str,c)] = '\0';
    if (!splitted)
        return 0;
    while (i < ft_occurences(str,c))
    {
        splitted[i] = (char*)malloc(sizeof(char)*(ft_len_occurences(str,c,i)+1));
        i++;
    }
    i = 0;
    y = 0;
    while (splitted[i] && str[y])
    {
        j = 0;
        while (str[y] != c && str[y])
        {
            splitted[i][j] = str[y];
            y++;
            j++;
        }
        splitted[i][j] = '\0';
        while (str[y] == c && str[y])
            y++;
        i++;
    }
    return splitted;
}

void    ft_putchar(char c)
{
    write(1,&c,1);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    if (str)
    {
        while (str[i])
        {
            ft_putchar(str[i]);
            i++;
        }
    }
}

int main(int argc, char **argv)
{
    char **ptr;
    int i;

    ptr = ft_split(argv[1], argv[2][0]);
    while (ptr[i])
    {
        ft_putstr(ptr[i]);
        ft_putchar('\n');
        i++;
    }
    return 0;
}