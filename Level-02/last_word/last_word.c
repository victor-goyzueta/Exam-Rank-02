/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:43:48 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/12 17:14:25 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	start = 0;
	end = 0;
	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i--;
		while ((argv[1][i] >= 9 && argv[1][i] <= 13) || argv[1][i] == 32)
			i--;
		end = i;
		while ((argv[1][i] < 9) || (argv[1][i] > 13) || (argv[1][i] == 32))
			i--;
		start = i + 1;
		while (start <= end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
