/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:23:24 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/10 15:25:41 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_print(int c)
{
	if (c >= 33 && c <= 126)
		return (1);
	return (0);
}

int	is_space_or_tab(int c)
{
	if (c == 9 || c == 32)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (is_space_or_tab(argv[1][i]))
			i++;
		while (is_print(argv[1][i])) 
		{
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
