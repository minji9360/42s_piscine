/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 17:24:54 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/06 18:07:06 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void);

int		main(void)
{
	ft_print_comb2();
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = '0';
	b = a;
	while(a <= '9')
	{
		while(b <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			if (a == b)
			{
				write(1, &a, 1);
				write(1, &b, 1);
				b++;
			}
			else if (a == '9' && b == '9')
				break;
			if (a != b)
				write(1, ", ", 2);
			if (a == '9' && b == '9')
				break ;
		}
		a++;
	}
}
