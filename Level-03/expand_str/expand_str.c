/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 15:24:43 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/21 15:59:46 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space_tab(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	count;
	int	flag;
	int	start;
	int	end;

	if (argc == 2)
	{
		i = 0;
		start = 0;
		end = 0;
		flag = 0;
		count = 0;
		while (argv[1][i])
		{
			if (!is_space_tab(argv[1][i]) && !flag)
			{
				start = i;
				flag = 1;
			}
			i++;
		}
		while (is_space_tab(argv[1][i]) || argv[1][i] == '\0')
		{
			i--;
		}
		end = i;
		while (start <= end)
		{
			if (!is_space_tab(argv[1][start]))
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			else
			{
				count = 3;
				while (count--)
				{
					write(1, " ", 1);
				}
				while (is_space_tab(argv[1][start]))
					start++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
