/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:57:06 by vgoyzuet          #+#    #+#             */
/*   Updated: 2025/01/13 14:24:56 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		tmp_i;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			j = 0;
			while (argv[2][j] != '\0' && argv[1][i] != argv[2][j])
			{
				j++;
			}
			if (argv[1][i] == argv[2][j])
			{
				tmp_i = 0;
				while (tmp_i < i && argv[1][tmp_i] != argv[1][i])
				{
					tmp_i++;
				}
				if (tmp_i == i)
				{
					write(1, &argv[1][i], 1);
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
