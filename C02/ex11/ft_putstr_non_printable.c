/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 18:57:20 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/19 21:38:30 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		printable(unsigned char c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

void	decimal_calculation(unsigned char c)
{
	c = c + '0';
	if (c > '9')
		c += 39;
	write(1, &c, 1);
}

void	write_decimal(unsigned char c)
{
	write(1, "\\", 1);
	decimal_calculation((int)c / 16);
	decimal_calculation((int)c % 16);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (!printable(*str))
			write_decimal(*str);
		else
			write(1, str, 1);
		str++;
	}
}
