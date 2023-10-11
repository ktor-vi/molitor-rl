/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:52:27 by vphilipp          #+#    #+#             */
/*   Updated: 2023/10/10 15:52:35 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb >= 1)
	{
		while (nb >= 2)
		{
			result *= nb - 1;
			nb--;
		}
		return (result);
	}
	else
		return (0);
}
