/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:43:48 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/18 16:08:16 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space_tab(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	is_print_wo_space(int c)
{
	if (c >= 33 && c <= 126)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	start = 0;
	end = 0;
	if (argc == 2)
	{
		
		if (!argv[1][i] || !argv[1])
		{
			write(1, "\n", 1);
			return (0);
		}
		else
		{
			while (argv[1][i])
			{
				i++;
			}
			i--;
			while (is_space_tab(argv[1][i]))
				i--;
			end = i;
			while (is_print_wo_space(argv[1][i]))
				i--;
			start = i + 1;
			while (start <= end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
