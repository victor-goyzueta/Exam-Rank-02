/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:23:12 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/11 21:22:23 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	b;
	size_t	i;
	size_t	j;
	
	b = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j] && s[i] == reject[j])
		{
			j++;
			i++;
		}
		if (!reject[j])
			return (b);
		b++;
		i++;
	}
	return (b);
}
