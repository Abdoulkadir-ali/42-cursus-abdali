char    *ft_strrchr(const char *s, int c)
{
    unsigned int i;
    char *last_occurence;
    
    if (!s)
        return NULL;
    i = ft_strlen(s) - 1;
    while (s[i])
    {
        if (s[i] == c)
            return (char*)(s + i);
        i--;
    }
    return NULL;
}
