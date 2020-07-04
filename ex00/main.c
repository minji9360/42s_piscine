/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <va9360@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 11:54:08 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/04 18:34:32 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);
void rush(int x, int y);
void horizontal(int a, int b, int x);

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
			horizontal(a, b, x);
		}
		else
		{
			a = 1;
			horizontal(a, b, x);
		}
	}
}

void	horizontal(int x, int a, int b)
{
	while (a <= x)
	{
		if (a == 1 || a == x)
		{
			ft_putchar('o');
			if (a == x)
			{
				ft_putchar('\n');
				break;
			}
		}
		else if (a < x)
			ft_putchar('-');
		a++;
	}
	b++;
}
