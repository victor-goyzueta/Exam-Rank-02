/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:45:30 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/20 14:35:15 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	int base[8] = {128, 64, 32, 16, 8, 4, 2, 1};

	i = 0;
	while (i <= 7)
	{
		if (octet >= base[i])
		{
			write(1, "1", 1);
			octet -= base[i];
		}
		else
			write(1, "0", 1);
		i++;
	}
}
