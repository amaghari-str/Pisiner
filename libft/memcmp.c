int ft_memcmp(const void *cont, const void *data, size_t n)
{
    const unsigned char *s1;
    const unsigned char *s2;
    int i;

   	if (n == 0)
		return (0);
    s1 = (const unsigned char *)cont;
    s2 = (const unsigned char *)data;
    i = 0;
    while (i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}
