/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:58:31 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/10 19:41:01 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	my_count(int c)
{
	int	count;
	int	i;
	char	*lower = "abcdefghijklmnopqrstuvwxyz";
	char	*upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	count = 1;
	i = 0;
	while ((c != lower[i] && c != upper[i]))
		i++;
	count = count * (i + 1);
	return (count);
}

int	main(int argc, char **argv)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (is_alpha(argv[1][i]))
			{
				count = my_count(argv[1][i]);
				while (count--)
					write (1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
