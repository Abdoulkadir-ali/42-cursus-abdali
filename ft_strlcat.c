char *ft_strlcat(char *dest, const char *src, size_t l)
{
    size_t  i;
    size_t start;

    start = ft_strlen(dest);
    while (i < l)
        dest[start + i++] = src[i++];
    dest[start + i] = '\0';
    return dest;
}