/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 18:12:34 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/20 14:50:47 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int	i;
	int j;
	int base[8] = {128, 64, 32, 16, 8, 4, 2, 1};
	unsigned char	result;

	i = 0;
	j = 7;
	result = 0;
	while (i <= 7)
	{
		if (octet >= base[i])
		{
			result += base[j];
			octet -= base[i];
		}
		i++;
		j--;
	}
	return (result);
}
