# include "libft.h"

int ft_trimmed_len(char *s1, char *set)
{
    int i;
    int y;
    int count;

    i = 0;
    count = 0;
    while (s1[i++])
    {
        y = 0;
        while (set[y++])
        {
            if (s1[i] == set[y])
            {
                count += 1;
                break;
            }
        }
    }
    return (i-count+1);
}

char *ft_strtrim(char *s1, char *set)
{
    size_t  i;
    size_t  j;
    size_t  k;
    size_t  set_len;
    char *s2;

    s2 = ft_calloc(ft_trimmed_len(s1, set), sizeof(char));
    if (!s2 || !s1)
        return NULL;
    i = 0;
    k = 0;
    set_len = ft_strlen(set);
    while (s1[i++])
    {
        j = 0;
        while (set[j] && set[j] != s1[i-1])
            j++;
        if (j == set_len)
            s2[k++] = s1[i-1];
    }
    return (s2);
}