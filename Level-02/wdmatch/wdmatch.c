/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 19:13:11 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/18 19:27:19 by vgoyzuet         ###   ########.fr       */
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


int main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 3)
	{
		if (ft_strlen(argv[1]) > ft_strlen(argv[2]))
		{
			write(1, "\n", 1);
			return (0);
		}
		while (argv[1][i])
		{
			j = 0;
			while (argv[2][j])
				j++;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}