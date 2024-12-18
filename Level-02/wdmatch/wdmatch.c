/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:13:11 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/18 20:46:47 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str[i])
		return (0);
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	size_t	count;
	size_t	len1;
	size_t	len2;

	if (argc == 3)
	{
		len1 = ft_strlen(argv[1]);
		len2 = ft_strlen(argv[2]);
		if (len1 < len2)
		{
			i = 0;
			j = 0;
			count = 0;
			while (argv[1][i])
			{
				while (argv[2][j])
				{
					if (argv[1][i] == argv[2][j])
					{
						count++;
						j++;
						i++;
					}
					else
						j++;
				}
				i++;
			}
			i = 0;
			j = 0;
			if (argv[1][i] && count == len1)
			{
				while (argv[2][j])
				{
					if (argv[1][i] == argv[2][j])
						write(1, &argv[1][i], 1);
					j++;
				}
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
