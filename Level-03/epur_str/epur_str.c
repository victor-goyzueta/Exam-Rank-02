/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 18:45:41 by vgoyzuet          #+#    #+#             */
/*   Updated: 2025/01/07 19:42:46 by vgoyzuet         ###   ########.fr       */
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

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	start;
	int	end;
	
	if (argc == 2)
	{
		start = 0;
		end = ft_strlen(argv[1]) - 1;
		while (is_space_tab(argv[1][start]))
			start++;
		while (is_space_tab(argv[1][end]))
			end--;
		while (start <= end)
		{
			if (!is_space_tab(argv[1][start]))
			{
				ft_putchar(argv[1][start]);
				start++;
			}
			else
			{
				ft_putchar(' ');
				while (is_space_tab(argv[1][start]))
					start++;
			}
		}
	}
	ft_putchar('\n');
	return (0);
}
