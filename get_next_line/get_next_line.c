#include <stdlib.h>
#include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 100
#endif

static size_t  ft_strlen(char *s)
{
    size_t i = 0;

    if (!s)
        return (0);
    while (s[i])
        i++;
    return (i);
}

static char *ft_join(char *stash, char *buffer, size_t n)
{
    size_t  i;
    size_t  j;
    char    *new_stash;

    new_stash = malloc(ft_strlen(stash) + n + 1);
    if (!new_stash)
        return (free(stash), NULL);
    i = 0;
    while (stash && stash[i])
    {
        new_stash[i] = stash[i];
        i++;
    }
    j = 0;
    while (j < n)
        new_stash[i++] = buffer[j++];
    new_stash[i] = '\0';
    free(stash);
    return (new_stash);
}

static char *ft_extract_line(char *stash)
{
    size_t  i;
    char    *line;

    i = 0;
    while (stash[i] && stash[i] != '\n')
        i++;
    if (stash[i] == '\n')
        i++;
    line = malloc(i + 1);
    if (!line)
        return (NULL);
    i = 0;
    while (stash[i] && stash[i] != '\n')
    {
        line[i] = stash[i];
        i++;
    }
    if (stash[i] == '\n')
        line[i++] = '\n';
    line[i] = '\0';
    return (line);
}

static char *ft_save_rest(char *stash)
{
    size_t  i;
    size_t  j;
    char    *rest;

    i = 0;
    while (stash[i] && stash[i] != '\n')
        i++;
    if (!stash[i])
        return (free(stash), NULL);
    i++;
    if (!stash[i])
        return (free(stash), NULL);
    rest = malloc(ft_strlen(stash + i) + 1);
    if (!rest)
        return (free(stash), NULL);
    j = 0;
    while (stash[i])
        rest[j++] = stash[i++];
    rest[j] = '\0';
    free(stash);
    return (rest);
}

char *ft_get_next_line(int fd)
{
    static char *stash;
    char        buffer[BUFFER_SIZE];
    ssize_t     bytes_read;
    size_t      i;
    char        *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (NULL);
    while (1)
    {
        i = 0;
        while (stash && stash[i] && stash[i] != '\n')
            i++;
        if (stash && stash[i] == '\n')
            break ;
        bytes_read = read(fd, buffer, BUFFER_SIZE);
        if (bytes_read < 0)
            return (free(stash), stash = NULL, NULL);
        if (bytes_read == 0)
        {
            if (!stash || !stash[0])
                return (free(stash), stash = NULL, NULL);
            break ;
        }
        stash = ft_join(stash, buffer, bytes_read);
        if (!stash)
            return (NULL);
    }
    line = ft_extract_line(stash);
    if (!line)
        return (free(stash), stash = NULL, NULL);
    stash = ft_save_rest(stash);
    return (line);
}
