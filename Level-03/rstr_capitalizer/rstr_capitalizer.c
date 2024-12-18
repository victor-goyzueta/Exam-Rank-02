/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:57:11 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/18 21:36:21 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	is_lower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_upper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	is_space_tab(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	argc--;
	if (argc)
	{
		i++;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (is_space_tab(argv[i][j + 1]) || !argv[i][j + 1])
				{
					if (is_lower(argv[i][j]))
						argv[i][j] -= 32;
				}
				else if (is_upper(argv[i][j]))
					argv[i][j] += 32;
				ft_putchar(argv[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
