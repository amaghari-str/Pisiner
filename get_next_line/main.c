#include "get_next_line.c"
#include <stdio.h>
#include <fcntl.h>

int main (void)
{
	int	fd;
	char	*p;
	short	i = 0;

	fd = open("text.txt", O_RDONLY);
	p = ft_get_next_line(fd);
	while (p)
	{
		printf("%s", p);
		p = ft_get_next_line(fd);
		i++;
	}
	printf("%d\n", i);
	return 0;
}
