/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <vgoyzuet@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:43:57 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/12 14:40:05 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	tmp;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	j = 0;
	while (i-- && j <= i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		j++;
	}	
	return (str);
}
