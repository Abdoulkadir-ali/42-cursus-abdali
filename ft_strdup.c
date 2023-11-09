char *ft_strdup(const char *src)
{
    char *dst;
    size_t i;

    dst = ft_calloc(ft_strlen(src)+1, sizeof(*src));
    if (!dst)
        return NULL;
    i = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return dst;
}