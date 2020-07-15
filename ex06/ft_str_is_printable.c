/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 03:09:49 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/14 17:41:34 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_printable(char *str);

int		main(void)
{
	char str[200] = {"\0"};
	printf("%d", ft_str_is_printable(str));
}

int		ft_str_is_printable(char *str)
{
	int i;
	int a;

	i = 0;
	a = 1;
	while(str[i] != '\0')
	{
		if(!(str[i] >= ' ' && str[i] <= '~'))
		{
			a = 0;
			break;
		}
		i++;
	}
	return a;
}
