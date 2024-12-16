/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 14:57:06 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/16 21:49:54 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	int		tmp_i;
	char	tmp_c;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while (argv[1][i] && argv[2][j])
		{
			while (argv[1][i] != argv[2][j])
			{
				j++;
			}
			if (argv[1][i] == argv[2][j])
			{
				tmp_c = argv[1][i];
				tmp_i = i + 1;
				while (argv[1][tmp_i] && tmp_c != argv[1][tmp_i])
				{
					tmp_i++;
				}
				if (tmp_i <= i && argv[1][tmp_i] == argv[1][i])
				{
					write(1, &tmp, 1);
					i++;
				}
				else
					i++;
			}
			else
				i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
