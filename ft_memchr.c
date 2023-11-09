void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    if (!s)
        return NULL;
    while (s[i] && i < n)
    {
        if (s[i] == c)
            return s + i;
        i++;
    }
    return NULL;
}