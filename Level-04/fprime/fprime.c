/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 15:05:31 by vgoyzuet          #+#    #+#             */
/*   Updated: 2025/01/08 19:07:41 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_prime(int n)
{
	int	aux;
	if (n == 0 || n == 1)
		return (0);
	aux = 2;
	while (aux < n)
	{
		if ((n % aux) == 0)
			return (0);
		aux++;
	}
	return (1);
}

int	last_prime(int n)
{
	int	last;
	int	aux;

	aux = 2;
	last = n;
	while (aux < n)
	{
		if (is_prime(aux) && (n % aux == 0))
			last = aux;
		aux++;
	}
	return (last);
}

int	main(int argc, char **argv)
{
	int	aux;
	int	last;

	if (argc == 2)
	{
		aux = 2;
		last = last_prime(atoi(argv[1]));
		if (atoi(argv[1]) == 0)
			return(printf("\n"));
		else if (atoi(argv[1]) == 1)
			return (printf("1\n"));
		else if (is_prime(atoi(argv[1])))
			return (printf("%i\n", atoi(argv[1])));
		while (aux <= last)
		{
			if (aux == last)
				return (printf("%d", last));
			else if (is_prime(aux) && (atoi(argv[1]) % aux == 0))
				printf("%d*", aux);
			else if (aux * last != atoi(argv[1]))
				aux++;
		}
	}
	printf("\n");
	return (0);
}
