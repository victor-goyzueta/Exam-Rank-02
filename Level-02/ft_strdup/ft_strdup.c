/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 21:23:50 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/11 21:49:58 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s[i])
		return (0);
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	size_t	len;
	int	i;

	len = 0;
	i = 0;
	if (!src)
		return (NULL);
	len = ft_strlen(src);
	cpy = malloc(sizeof(char) * (len + 1));
	if (!cpy)
		return (NULL);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int	main()
{
	char	*src = "Hello, world!";
	char	*cpy;

	cpy = ft_strdup(src);
	printf("%s", cpy);
	return (0);
}
