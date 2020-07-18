/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 04:58:58 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/19 05:07:29 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
}

int		main(void)
{
	ft_putstr("How Can I alive in Piscine");
}
