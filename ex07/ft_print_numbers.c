/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:46:49 by vphilipp          #+#    #+#             */
/*   Updated: 2023/10/10 19:24:19 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int		i;
	char	numb;

	numb = '0';
	i = 0;
	while (numb < 58)
	{
		ft_putchar(numb);
		numb++;
	}
}
