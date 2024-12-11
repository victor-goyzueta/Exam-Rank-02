/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:47:50 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/11 14:10:02 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(int c)
{
	write(1, &c, 1);
}

void	putstr(char *s)
{
	int	i;

	i = 0;
	if (!s[i])
		return ;
	while (s[i])
	{
		putchar(s[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 4)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0] && !argv[2][1])
				argv[1][i] = argv[3][0];
			i++;
		}
		putstr(argv[1]);
	}
	putchar('\n');
	return (0);
}
