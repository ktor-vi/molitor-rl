/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:59:34 by vphilipp          #+#    #+#             */
/*   Updated: 2023/10/10 15:59:36 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		fd;
	char	buf[1];

	if (argc != 2)
	{
		if (argc == 1)
			write(1, "File name missing.\n", 19);
		else if (argc > 2)
			write(1, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(1, "Cannot read file.\n", 18);
		return (1);
	}
	while (read(fd, buf, 1) != 0)
		write(1, buf, 1);
	close(fd);
	return (0);
}
