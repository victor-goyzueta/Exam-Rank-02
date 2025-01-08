/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgdc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:40:44 by vgoyzuet          #+#    #+#             */
/*   Updated: 2025/01/08 11:57:52 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int	a;
	int	b;
	int	n;
	int	result;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		n = 1;
		result = n;
		while (n <= a && n <= b)
		{
			if ((a % n == 0) && (b % n == 0))
				result = n;
			n++;
		}
		printf("%d", result);
	}
	printf("\n");
	return (0);
}
