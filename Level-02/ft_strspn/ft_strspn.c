/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 13:15:06 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/16 19:08:22 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	b;
	int		i;
	int		j;

	b = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (!accept[j] || (s[i] != accept[j]))
			return (b);
		b++;
		i++;
		j++;
	}
	return (b);
}
