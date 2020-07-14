/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 03:24:02 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/07 05:35:15 by minjikim         ###   ########.fr       */
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
	write(1, &c, 5);
}


void	ft_print_comb2(void)
{
	int		i;
	char	num[5];

	i = 0;
	num[0] = 0;
	num[1] = 0;
	num[2] = ' ';
	num[3] = 0;
	num[4] = 1;
	
		while (1)
		{
			while (i < '5')
			{
				ft_print(num[i]);
				i++;
			}
			i = 0;

			if (num[0] != '9' && num[1] != '8' && num[3] != '9' &&  num[4] != '9')
			{
				ft_print(',');
				ft_print(' ');
			}
			else
				break ;
			
			while (1)
			{
				if (num[4] == '9')
				{
					if (num[3] == '9')
					{
						num[3] = num[0];
						num[4] = num[1] + 1;
						break ;
					}
					else
					{
						num[3]++;
						num[4] = 0;
					}
					break ;
				}
				else
					num[4]++;
			}

		}
}

