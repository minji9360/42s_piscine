/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 05:35:08 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/20 10:22:41 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		is_valid(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[i] == '\0' || base[i] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j++])
				return (0);
		}
		i++;
	}
	return (1);
}

void	recursive_print_number(int n, char *base, int length)
{
	if (n / length < 1)
		write(1, &base[n], 1);
	else
	{
		recursive_print_number(n / length, base, length);
		write(1, &base[n % length], 1);
	}
}

int		get_length(char *base)
{
	int i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base(int number, char *base)
{
	char	temp;
	int		length;

	if (!is_valid(base))
		return ;
	length = get_length(base);
	if (number >= 0)
	{
		recursive_print_number(number, base, length);
		return ;
	}
	write(1, "-", 1);
	temp = base[number % length * (-1)];
	if (number / length * (-1) > 0)
		recursive_print_number(number / length * (-1), base, length);
	write(1, &temp, 1);
}
