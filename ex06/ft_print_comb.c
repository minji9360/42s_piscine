/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 01:15:07 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/14 21:32:32 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		first_num;
	int		second_num;
	char	num[4];

	first_num = 0;
	while (first_num <= 98)
	{
		second_num = first_num + 1;
		while (second_num <= 99)
		{
			num[0] = '0' + first_num / 10;
			num[1] = '0' + first_num % 10;
			num[2] = '0' + second_num / 10;
			num[3] = '0' + second_num % 10;
			write(1, &num, 2);
			write(1, " ", 1);
			write(1, &num[2], 2);
			if (first_num < 98)
				write(1, ", ", 2);
			second_num++;
		}
		first_num++;
	}
}
