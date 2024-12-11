/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:29:04 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/11 13:44:15 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	rotone(int c)
{
	if (c == 'z' || c == 'Z')
		c -= 25;
	else
		c++;
	return (c);
}

int	main(int argc, char **argv)
{
	int	i;
	int	rot;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			rot = 0;
			if (is_alpha(argv[1][i]))
			{
				rot = rotone(argv[1][i]);
				write(1, &rot, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
