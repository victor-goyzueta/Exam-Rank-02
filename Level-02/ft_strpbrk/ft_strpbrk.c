/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 21:51:53 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/11 22:31:55 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;
	int	j;

	if (!s1 || !s2)
		return (NULL);
	j = 0;
	while (s2[j])
	{
		i = 0;
		while (s1[i] && s1[i] != s2[j])
			i++;
		if (s1[i] == s2[j])
			return (&(s1[i]);
		j++;
	}
	return (NULL);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*s;

	if (argc == 3)
	{
		s = ft_strpbrk(argv[1], argv[2]);
		printf("%s", s);
	}
	return (0);
}
