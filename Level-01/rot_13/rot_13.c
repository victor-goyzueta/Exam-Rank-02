/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:28:11 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/10 21:17:31 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	mid(int c)
{
	int		i;
	char	*lower = "abcdefghijklmnopqrstuvwyxz";
	char	*upper = "ABCDEFGHIJKLMNOPQRSTUVWYXZ";

	i = 0;
	while (c != lower[i] && c != upper[i])
		i++;
	if (i < 13)
		return (c += 13);
	else
		return (c -= 13);
}


int	main(int argc, char **argv)
{
	int	i;
	int	rot;

	i = 0;
	if (argc == 2)
		while (argv[1][i])
		{
			rot = 0;
			if (is_alpha(argv[1][i]))
			{
				rot = mid(argv[1][i]);
				write(1, &rot, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	write (1, "\n", 1);
}
