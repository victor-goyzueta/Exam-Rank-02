/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:13:11 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/18 21:17:35 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str[i])
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	p;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				i++;
				j++;
			}
			else
				j++;
			if (!argv[1][i])
			{
				p = 0;
				while (p < i)
				{
					write(1, &argv[1][p], 1);
					p++;
				}
				write(1, "\n", 1);
				return (0);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
