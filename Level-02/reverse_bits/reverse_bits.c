/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:12:34 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/20 01:14:24 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	int j;
	unsigned char	result;
	unsigned int base[8] = {1, 2, 4, 8, 16, 32, 64, 128};

	i = 7;
	j = 0;
	result = 0;
	while (j <= 7)
	{
		if (octet >= base[i])
		{
			result += base[j];
			octet -= base[i];
		}
		i--;
		j++;
	}
	return (result);
}
