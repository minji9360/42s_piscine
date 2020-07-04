/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <va9360@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 11:54:08 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/04 20:21:55 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);
void rush(int x, int y);
void horizontal(int x, int a, int b, char side, char center);

int		main(void)
{
	rush(4, 5);
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rush(int x, int y)
{
	int a;
	int b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		if (b == 1 || b == y)
		{
			horizontal(x, a, b, 'o', '-');
			b++;
		}
		else
		{
			a = 1;
			horizontal(x, a, b, '|', ' ');
			b++;
		}
	}
}

void	horizontal(int x, int a, int b, char side, char center)
{
	while (a <= x)
	{
		if (a == 1 || a == x)
		{
			ft_putchar(side);
			if (a == x)
			{
				ft_putchar('\n');
				break;
			}
		}
		else if (a < x)
			ft_putchar(center);
		a++;
	}
}
