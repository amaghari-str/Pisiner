/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaghari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 15:44:59 by amaghari          #+#    #+#             */
/*   Updated: 2026/10/13 17:31:55 by amaghari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#define SIZE 1024

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	reading(char *file)
{
	int		fd;
	int		bytes;
	char	buffer[SIZE];

	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, buffer, SIZE);
	while (bytes > 0)
	{
		if (write(1, buffer, bytes) == -1)
		{
			close(fd);
			return (0);
		}
		bytes = read(fd, buffer, SIZE);
	}
	if (bytes == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putchar("File name missing.");
		return (0);
	}
	if (argc > 2)
	{
		ft_putchar("Too many arguments.");
		return (0);
	}
	if (!(reading(argv[1])))
	{
		ft_putchar("Cannot read file.");
		return (0);
	}
}
