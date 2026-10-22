#include "printf.h"

int ft_printf(const char *str, ...)
{
	va_list	arg;
	int	i;
	int	j;
	int 	count;

	va_start(arg, str);
	i = 0;
	count = 0;
	while(str[i])
	{
		j = 0;
		if (str[i] == '%')
		{
			j = tipe_detector(str[++i], arg);
			if (j > 0)
				count += j;
				
		}else{
			write(1, &str[i], 1);
		}
		i++;
	}
	count += i;
	return (count);
}
