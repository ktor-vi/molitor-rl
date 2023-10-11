/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_params.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vphilipp <vphilipp@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:57:35 by vphilipp          #+#    #+#             */
/*   Updated: 2023/10/10 15:57:54 by vphilipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s2[i] - s1[i]);
}

void	ft_swap(char **tab, int pos1, int pos2)
{
	char	*temp;

	temp = tab[pos2];
	tab[pos2] = tab[pos1];
	tab[pos1] = temp;
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 1;
	k = 1;
	while (j < argc)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) < 0)
				ft_swap(argv, i, i + 1);
			i++;
		}
		i = 1;
		j++;
	}
	while (k < argc)
	{
		ft_putstr(argv[k]);
		ft_putchar('\n');
		k++;
	}
}
