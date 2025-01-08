/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 10:54:06 by vgoyzuet          #+#    #+#             */
/*   Updated: 2025/01/08 11:12:28 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*ar;
	int	len;
	int	i;

	ar = NULL;
	len = 1 + abs(end - start);
	ar = (int *)malloc(sizeof(int) * len);
	if (!ar)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ar[i] = end;
		if (start < end)
			end--;
		else
			end++;
		i++;
	}
	return (ar);
}
