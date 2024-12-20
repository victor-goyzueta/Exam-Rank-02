/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:45:30 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/20 01:14:39 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	int j;
	unsigned int base[8] = {1, 2, 4, 8, 16, 32, 64, 128};

	i = 7;
	j = 0;
	while (j <= 7)
	{
		if (octet >= base[i])
		{
			write(1, "1", 1);
			octet -= base[i];
		}
		else
			write(1, "0", 1);
		i--;
		j++;
	}
}
