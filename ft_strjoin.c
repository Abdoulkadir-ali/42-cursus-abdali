#include "libft.h"

char *ft_strjoin(char *s1, char *s2)
{   
    size_t  l_s1;
    size_t  l_s2;
    size_t  i;
    char    *s3;


    l_s1 = ft_strlen(s1);
    l_s2 = ft_strlen(s2);
    i = 0;
    s3 = ft_calloc((l_s1 + l_s2 + 1), sizeof(char));
    if (!s3)
        return 0;
    while (i < l_s1+l_s2)
    {
        if (i <l_s1)
            s3[i] = s1[i];
        else
            s3[i] = s2[i-l_s1];
        i++;
    }
    s3[i] = '\0';
    return s3;
}
