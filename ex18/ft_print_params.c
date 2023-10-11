/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_params.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:53:38 by vphilipp          #+#    #+#             */
/*   Updated: 2023/10/10 15:53:41 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int	main(int argc, char **argv)
{
	int	k;

	k = 1;
	while (k < argc)
	{
		ft_putstr(argv[k]);
		ft_putchar('\n');
		k++;
	}
}
