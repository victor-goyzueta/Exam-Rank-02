/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 18:02:28 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/18 21:32:10 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	
	if (argc == 3)
	{
		i = 0;
		j = 0;
		while (argv[2][i])
		{
			if (argv[1][j] == argv[2][i])
			{
				j++;
				if (!argv[1][j])
				{
					write(1, "1", 1);
					break ;
				}
			}
			i++;
		}
		if (!argv[2][i] && argv[1])
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
