/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <va9360@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 11:54:08 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/04 15:57:11 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rush(int x, int y);

int			main(void)
{
	rush(1, 5);
	return (0);
}

void		rush(int x, int y)
{
	int a;
	int b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		if (b == 1 || b == y)
		{
			while (a <= x)
			{
				if (a == 1 || a == x)
				{
					write(1, "o", 1);
					if (a == x)
					{
						write(1, "\n", 1);
						break;
					}
				}
				else if (a < x)
					write(1, "-", 1);
				a++;
			}
			b++;
			a = 1;
		}
		else
		{
			while (a <= x)
			{
				if (a == 1 || a == x)
				{
					write(1, "|", 1);
					if (a == x)
					{
						write(1, "\n", 1);
						break;
					}
				}
				else if (a < x)
					write(1, " ", 1);
				a++;
			}
			b++;
			a = 1;
		}
	}
}
