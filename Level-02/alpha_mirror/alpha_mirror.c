/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:50:28 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/11 15:22:47 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_alpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

void	mirror(int c)
{
	int	i;
	char	*lower = "abcdefghijklmnopqrstuvwxyz";
	char	*upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	i = 0;
	if (is_alpha(c))
	{
		while ((c != lower[i]) && (c != upper[i]))
			i++;
		if (c == lower[i])
			c = lower[25 - i];
		else
			c = upper[25 - i];
	}
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc == 2)
		while (argv[1][i])
		{
			mirror(argv[1][i]);
			i++;
		}
	write(1, "\n", 1);
	return (0);
}
