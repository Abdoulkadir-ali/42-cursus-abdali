# include "libft.h"

size_t ft_occurrences_str(char *str, char *sep)
{
    size_t i;
    int count;
    size_t sep_len;

    i = 0;
    count = 0;
    sep_len = ft_strlen(sep);
    while (str && str[i])
    {
        if (ft_strcmp((char *)(str + i), sep) == 0)
        {
            i += sep_len-1;
            count += 1;
        }
        i++;
    }
    return (count+1);
}

size_t ft_len_occurences_str(char *str, char *sep, size_t occurence_index)
{
    size_t i;
    size_t occurence;
    size_t occurence_len;
    size_t sep_len;
        
    
    i = 0;
    occurence = 0;
    occurence_len = 0;
    sep_len = ft_strlen(sep);
    while (str[i])
    {
        if (ft_strcmp((char *)(str + i), sep) != 0)
            i += sep_len-1;
        if (occurence == occurence_index)
            occurence_len += 1;
        i++;
    }
    return (occurence_len);
}

char **ft_alloc_split(char *str, char *sep)
{
    char **splitted;
    size_t  i;

    i = 0;
    splitted = ft_calloc(ft_occurrences_str(str,sep)+1, sizeof(char**));
    if (!splitted)
        return NULL;
    while (i++ < ft_occurrences_str(str,sep))
    {
        splitted[i-1] = ft_calloc(ft_len_occurences_str(str,sep,i-1)+1, sizeof(char));
        if (!splitted[i-1])
            return NULL;
    }
    return splitted;
}

char **ft_split(char *str, char *sep)
{
    char **splitted;
    size_t i;
    size_t y;
    size_t j;
    size_t sep_len;

    i = 0;
    y = 0;
    sep_len = ft_strlen(sep);
    splitted = ft_alloc_split(str, sep);
    if (!splitted)
        return NULL;
    while (splitted[i++] && str[y])
    {
        if (ft_strcmp((char*)(str + y), sep) == 0)
            y += sep_len;
        j = 0;
        while (str[y] && ft_strcmp((char*)(str + y), sep) !=0)
            splitted[i-1][j++] = str[y++];
    }
    return splitted;
}

/*
int main()
{
    size_t i = 0;
    
    char **splitted;
    splitted = ft_split("Hello world how are you doing", "world ");
    while (splitted[i++])
        printf("%s\n",splitted[i-1]);
    return 0;
}
*/
