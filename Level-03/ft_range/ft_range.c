/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 10:06:20 by vgoyzuet          #+#    #+#             */
/*   Updated: 2025/01/08 11:09:11 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
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
		ar[i] = start;
		if (start < end)
			start++;
		else
			start--;
		i++;
	}
	return (ar);
}
