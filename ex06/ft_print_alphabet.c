/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:27:41 by vphilipp          #+#    #+#             */
/*   Updated: 2023/10/09 15:46:21 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_print_alphabet(void)
{
	int		i;
	char	lett;

	lett = 'a';
	i = 0;
	while (lett < 123)
	{
		write(1, &lett, 1);
		lett++;
	}
}
