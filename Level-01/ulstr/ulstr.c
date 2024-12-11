/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:17:20 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/11 14:45:15 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

void	change_c(int c)
{
	if (is_alpha(c))
	{
		if (c >= 'a' && c <= 'z')
			c -= 32;
		else
			c += 32;
	}
	write(1, &c, 1);
}

int	main (int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
		while (argv[1][i])
		{
			change_c(argv[1][i]);
			i++;
		}
	write(1, "\n", 1);
	return (0);
}
