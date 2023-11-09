# include "libft.h"

size_t ft_occurrences_str(char *str, char *sep)
{
    size_t i;
    int count;

    i = 0;
    count = 0;
    while (str && str[i])
    {
        if (ft_ischarinstr(str[i], sep))
        {
            while(ft_ischarinstr(str[i], sep))
                i++;
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
    
    i = 0;
    occurence = 0;
    occurence_len = 0;
    while (str[i])
    {
        if (ft_ischarinstr(str[i], sep))
        {
            while(ft_ischarinstr(str[i], sep))
                i++;
            occurence +=1;
        }    
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

    i = 0;
    y = 0;
    splitted = ft_alloc_split(str, sep);
    if (!splitted)
        return NULL;
    while (splitted[i++] && str[y])
    {
        j = 0;
        while (ft_ischarinstr(str[y], sep)==0 && str[y])
        {
            splitted[i-1][j] = str[y++];
            j++;
        }
        splitted[i-1][j] = '\0';
        while (ft_ischarinstr(str[y], sep) && str[y])
            y++;
    }
    return splitted;
}

/*
int main()
{
    size_t i = 0;
    
    char **splitted;
    splitted = ft_split("Hello world how are you doing ?", "Hello ");
    while (splitted[i++])
        printf("%s\n",splitted[i-1]);
    return 0;
}
*/