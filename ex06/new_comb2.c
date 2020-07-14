/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 02:19:38 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/07 03:23:20 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void);
void ft_print(char c);

int		main(void)
{
	ft_print_comb2();
}

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char array[5] = {'0', '0', ' ', '0', '1'};
	while (array[0] != 9 || array[1] != 8 || array[3] != 9 || array[4] != 9)
	{
		ft_print(array[0]);
		ft_print(array[1]);
		array[3] = array[0];
		
		array[4] = array[3] + 1;
		ft_print(array[2]);
		while (array[4] <= 9)
		{
			ft_print(array[3]);
			ft_print(array[4]);

			array[4] = array[4] + 1;

			if (array[4] == 9)
			{
				array[3] = array[3] + 1;
				array[4] = 0;
			}
		}
		ft_print(',');
		ft_print(' ');
	}
}
