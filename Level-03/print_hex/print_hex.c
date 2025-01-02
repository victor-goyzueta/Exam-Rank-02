/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:50:52 by vgoyzuet          #+#    #+#             */
/*   Updated: 2025/01/02 20:00:16 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (str[i])
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

void	print_hex(int	nbr)
{
	char	*base_hex;
	
	base_hex = "0123456789abcdef";
	if (nbr >= 16)
	{
		print_hex(nbr / 16);
	}
	ft_putchar(base_hex[nbr % 16]);
}

int	main(int argc, char **argv)
{
	int	nbr;

	if (argc == 2 && argv[1])
	{
		nbr = ft_atoi(argv[1]);
		print_hex(nbr);
	}
	write(1, "\n", 1);
	return (0);
}
