/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:52:42 by vphilipp          #+#    #+#             */
/*   Updated: 2023/10/11 12:28:57 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = nb;
	if (nb == 0)
	{
		return (1);
	}
	else if (nb == 1)
	{
		return (1);
	}
	else if (nb >= 1 && nb <= 12)
	{
		result *= ft_recursive_factorial(nb - 1);
	}
	else
	{
		return (0);
	}
	return (result);
}
