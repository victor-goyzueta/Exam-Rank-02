/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 20:03:53 by vgoyzuet          #+#    #+#             */
/*   Updated: 2025/01/02 20:59:18 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t  len_digit(int nbr)
{
	size_t  len;
	
	len = 0;
	if (nbr == 0)
		return (1);
	else if (nbr < 0)
	{
		len++;
		nbr *=  -1;
	}
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	size_t	len;
	char	*str;
	
	len = len_digit(nbr);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (len--)
	{
		if (str[0] == '-' && len == 0)
			break ;
		str[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}
