#include <stdlib.h>

char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    if (s)
    {
        int i;
        i = 0;
        new_str = (char*)malloc(sizeof(char)* len);
        if (new_str)
        {
            while (start < start+len)
            {
                new_str[i] = s[start]
                start++;
                i++;
            }
        }
        /*
        else
            #malloc failure
        */
    }
    return void *;
}