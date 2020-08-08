/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 18:07:34 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/14 22:26:44 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recursive(int nb)
{
	char result;

	if (nb == 0)
		return ;
	recursive(nb / 10);
	result = '0' + nb % 10;
	write(1, &result, 1);
}

void	ft_putnbr(int nb)
{
	char result;

	if (nb < 0)
	{
		write(1, "-", 1);
		recursive(-(nb / 10));
		result = '0' - nb % 10;
	}
	else
	{
		recursive(nb / 10);
		result = '0' + nb % 10;
	}
	write(1, &result, 1);
}
