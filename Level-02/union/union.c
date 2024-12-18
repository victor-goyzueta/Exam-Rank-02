/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:45:45 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/18 19:15:40 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int j;
	int tmp_i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			tmp_i = 0;
			while (tmp_i < i && argv[1][i] != argv[1][tmp_i])
				tmp_i++;
			if (tmp_i == i)
				write(1, &argv[1][i], 1);
			i++;
		}
		j = 0;
		while (argv[2][j])
		{
			i = 0;
			while (argv[1][i] && argv[1][i] != argv[2][j])
				i++;
			if (argv[1][i] == argv[2][j])
				j++;
			else
			{
				tmp_i = 0;
				while (tmp_i < j && argv[2][j] != argv[2][tmp_i])
					tmp_i++;
				if (tmp_i == j)
					write(1, &argv[2][j], 1);
				j++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}