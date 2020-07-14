/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 18:18:06 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/07 11:20:12 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void);
void ft_putchar(char c);

int		main(void)
{
	ft_print_comb2();
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char first_num;
	char second_num;

	first_num = '0';
	second_num = '0' + 48;

	while (first_num <= 98 && second_num <= 99)
	{
		while (first_num < 99)
		{
			ft_putchar(first_num / 10);
			ft_putchar(first_num % 10);
			ft_putchar(' ');

			ft_putchar(second_num / 10);
			ft_putchar(second_num % 10);
			second_num = second_num + 48;
			if (second_num == 99)
				first_num = first_num + 48;
			write(1, ", ", 2);
		}
	}
}
