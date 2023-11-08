#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    i= 0;
    if (str)
    {
        while (str[i])
            i++;
    }
    return i;
}
char *ft_strjoin(char *s1, char *s2)
{   
    if (s1 || s2)
    {
        int l_s1;
        int l_s2;
        int i;
        char *s3;

        i = 0;
        l_s1 = ft_strlen(s1);
        l_s2 = ft_strlen(s2);
        printf("S1 len : %d\nS2 len : %d\n",l_s1,l_s2);
        s3 = (char*)malloc(sizeof(char)* (l_s1 + l_s2+1));
        if (!s3)
            return 0;
        printf("Successfull malloc\n");
        while (i < l_s1+l_s2)
        {
            if (i <l_s1)
                s3[i] = s1[i];
            else
                s3[i] = s2[i-l_s1];
            i++;
        }
        s3[i] = '\0';
        printf("'%s' + '%s' = %s\n",s1,s2,s3);
        return s3;
    }
    return 0;
}

int main(int argc, char **argv)
{
    if (argc >= 3)
    {
        ft_strjoin(argv[1], argv[2]);
    }
    return 0;
}