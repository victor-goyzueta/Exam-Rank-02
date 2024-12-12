/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:25:37 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/12 15:42:02 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	return (n & (n - 1)) == 0;
}

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	result;
	int	nbr;

	if (argc == 2)
	{
		nbr = atoi(argv[1]);
		result = is_power_of_2(nbr);
		if (result)
			printf("Yes");
		else
			printf("Nope");
	}
	return (0);
}
