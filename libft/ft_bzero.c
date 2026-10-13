#include <stddef.h>
void ft_bzero(void *dest, size_t n)
{
    unsigned char *p;
    int i;

    i = 0;
    p = (unsigned char *)dest;
    while (i < n)
    {
        *p = '\0';
        i++;
    }
}
