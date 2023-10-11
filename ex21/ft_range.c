/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:58:14 by vphilipp          #+#    #+#             */
/*   Updated: 2023/10/10 15:58:15 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	else
	{
		range = malloc((max - min) * sizeof(int));
		i = 0;
		while (min < max)
		{
			range[i] = min;
			i++;
			min++;
		}
		return (range);
	}
}
