# include <stdlib.h>
# include <stdio.h>

int ft_occurences(char *s1, char *set)
{
    int i;
    int y;
    int count;

    i = 0;
    count = 0;
    while (s1 && s1[i])
    {
        y = 0;
        while (set[y])
        {
            if (s1[i] == set[y])
            {
                count += 1;
                break;
            }
            y++;
        }
        i++;
    }
    return (i-count+1);
}

char *ft_write_occurences(char *s1, char *set, char *s2)
{
    int i;
    int y;
    int z;
    int occurences;
    
    i = 0;
    z = 0;
    while (s1[i])
    {
        y = 0;
        occurences = 0;
        while (set[y])
        {
            if (s1[i] == set[y])
            {
                occurences += 1;
                break;
            }
            y++;
        }
        if (occurences == 0)
        {
            s2[z] = s1[i];
            z++;
        }
        i++;
    }
    s2[z] = '\0';
    return s1;
}

char *ft_strtrim(char *s1, char *set)
{
    if (!s1)
        return 0;
    if (!set)
        return s1;
    char *s2;
    s2 = (char*)malloc(sizeof(char)*(ft_occurences(s1, set)));
    if (!s2)
        return 0;
    ft_write_occurences(s1, set,s2);
    printf("'%s' - '%s' = '%s'\n",s1,set,s2);
    return (s2);
}


int main(int argc, char **argv)
{
    ft_strtrim(argv[1], argv[2]);
    return 0;
}