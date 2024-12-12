/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:24:59 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/12 12:30:37 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	is_alpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

void	camel_to_snake(int c)
{
	if (is_alpha(c))
		if (c >= 'A' && c <= 'Z')
		{
			write(1, "_", 1);
			c += 32;
			write(1, &c, 1);
		}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] && (argv[1][0] >= 'a' && argv[1][0] <= 'z'))
		{
			if (is_alpha(argv[1][i]))
			{
				if ((argv[1][i] >= 'A') && (argv[1][i] <= 'Z'))
					camel_to_snake(argv[1][i]);
				else
					write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
