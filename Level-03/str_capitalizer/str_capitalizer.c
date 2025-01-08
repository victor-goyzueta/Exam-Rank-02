/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:03:58 by vgoyzuet          #+#    #+#             */
/*   Updated: 2025/01/08 12:35:55 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	is_space_tab(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
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

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	
	argc--;
	if (argc)
	{
		i = 1;
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if (is_space_tab(argv[i][j - 1]) || j == 0)
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
