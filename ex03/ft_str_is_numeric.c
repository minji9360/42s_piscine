/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 01:15:12 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/09 02:10:44 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	char str[200] = {"123"};
	printf("%d", ft_str_is_numeric(str));
}

int ft_str_is_numeric(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
			return (1);
		else
			return (0);
		i++;
	}
	return (0);
}
