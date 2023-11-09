void *ft_memrchr(const void *s, int c, size_t n)
{
    if (!s)
        return NULL;
    while (s[n] && n> 0)
    {
        if (s[n] == c)
            return s + n;
        n--;
    }
    return NULL;
}