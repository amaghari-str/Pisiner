#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *p = malloc(len + 1);
    ft_strncpy(p, &s[start], len);
    return (p);
}
