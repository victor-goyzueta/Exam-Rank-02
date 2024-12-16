/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:47:50 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/16 15:38:58 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		while (argv[1][i] && !argv[2][1] && !argv[3][1])
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
