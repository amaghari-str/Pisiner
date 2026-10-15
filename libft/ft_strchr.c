
char *ft_strchr(const char *str, int c)
{
    char d;
    int i;

    i = 0;
    d = (char)c;
    if (d == '\0')
        return ((char *)str);
    while(str[i])
    {
        if (str[i] == d)
            return ((char *)str + i);
        i++;
    }
    return (NULL);
}
