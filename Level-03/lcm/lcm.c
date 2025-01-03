/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 18:42:08 by vgoyzuet          #+#    #+#             */
/*   Updated: 2025/01/03 19:18:43 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int count(unsigned int nbr, unsigned div)
{
	unsigned int count;
	
	count = 0;
	while (nbr % div == 0)
	{
		nbr /= div;
		count++;
	}
	return (count);
}

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int	result;
	unsigned int	div;
	unsigned int	expo[2] = {0, 0};
	int				i;
	
	if (a == 0 || b == 0)
		return (0);
	if (a == 1 && b == 1)
		return (1);
	div = 2;
	result = 1;
	i = 0;
	while (a > 1 || b > 1)
	{
		expo[0] = 0;
		expo[1] = 0;
		if (a % div == 0)
		{
			expo[0] = count(a, div);
			a /= div;
		}
		if (b % div == 0)
		{
			expo[1] = count(b, div);
			b /= div;
		}
		if (expo[0] >= expo[1])
			i = 0;
		else
			i = 1;
		while (expo[i])
		{
			result *= div;
			expo[i]--;
		}
		div++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	unsigned int	result;

	if (argc == 3)
	{
		result = lcm(atoi(argv[1]), atoi(argv[2]));
		printf("%u\n", result);
	}
	return (0);
}
