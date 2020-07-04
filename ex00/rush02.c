/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 23:19:47 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/04 23:21:26 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y)
{
	int a;
	int b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		if (b == 1)
			horizontal(x, a, 'A', 'B');
		else if (b < y)
		{
			a = 1;
			horizontal(x, a, 'B', ' ');
		}
		else
			horizontal(x, a, 'C', 'B');
		b++;
	}
}

void	horizontal(int x, int a, char side, char center)
{
	while (a <= x)
	{
		if (a == 1)
		{
			ft_putchar(side);
			if (a == x)
			{
				ft_putchar('\n');
				break ;
			}
		}
		else if (a == x)
		{
			ft_putchar(side);
			ft_putchar('\n');
			break ;
		}
		else if (a < x)
			ft_putchar(center);
		a++;
	}
}
