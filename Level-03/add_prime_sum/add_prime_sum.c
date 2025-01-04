/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 22:44:15 by vgoyzuet          #+#    #+#             */
/*   Updated: 2025/01/04 22:44:24 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	else
		ft_putchar(nbr + '0');
}

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	is_prime(int nbr)
{
	int	aux;
	
	aux = nbr - 1;
	if (nbr == 1 || nbr == 0)
		return (0);
	while (aux > 1)
	{
		if ((nbr % aux) == 0)
			return (0);
		aux--;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	unsigned int	result;
	int	nbr;
	
	
	result = 0;
	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		while (nbr >= 0)
		{
			while (is_prime(nbr))
			{
				result += nbr;
				nbr--;
			}
			nbr--;
		}		
	}
	ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}
