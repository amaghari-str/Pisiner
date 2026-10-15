#include <stdlib.h>

void *ft_calloc(size_t n, size_t l)
{
	size_t	res;
	unsigned char		*p;
	
	res = n * l;
	p = malloc(res);
	while (res > 0)
	{
		res--;
		p[res] = (unsigned char) '\n';
	}
	return ((void *)p);
}
/*
#include <stdio.h>

int main (void)
{
	char *p = ft_calloc(3, 3);
	int i = 0;
	while (i != 9)
	{
		printf("%c", *p);
		p++;
		i++;
	}
	printf("end");
	return 0;
}
*/
