/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <va9360@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 11:54:08 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/04 15:19:44 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void rush(int x, int y);

int			main(void)
{
	rush(1, 1);
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
					printf("o");
					if (a == x)
					{
						printf("\n");
						break;
					}
				}
				else if (a < x)
					printf("-");
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
					printf("|");
					if (a == x)
					{
						printf("\n");
						break;
					}
				}
				else if (a < x)
					printf(" ");
				a++;
			}
			b++;
			a = 1;
		}
	}
}
