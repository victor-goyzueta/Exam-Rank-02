/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgoyzuet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:33 by vgoyzuet          #+#    #+#             */
/*   Updated: 2024/12/10 16:59:40 by vgoyzuet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(int c)
{
	write(1, &c, 1);
}

void	putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		putchar (s[i]);
		i++;
	}
	putchar ('\n');
}

void	putnbr(int n)
{
	if (n > 9)
	{
		putnbr(n / 10);
		putchar((n % 10) + '0');
	}
	else
		putchar(n + '0');
}

int	main()
{
	int	n;
	n = 1;

	while (n <= 100)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
		{
			if (((n % 3) == 0) && (n % 5) == 0)
			{
				putstr("fizzbuzz");
				n++;
			}
			else if ((n % 3) == 0)
			{
				putstr("fizz");
				n++;
			}
			else
			{
				putstr("buzz");
				n++;
			}
		}
		putnbr(n);
		putchar('\n');
		n++;
	}
}
