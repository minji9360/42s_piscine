/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 02:56:39 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/14 17:39:29 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
	char str[200] = {"ADd"};
	printf("%d", ft_str_is_uppercase(str));
}

int ft_str_is_uppercase(char *str)
{
	int i;
	int a;

	i = 0;
	a = 1;
	while(str[i] != '\0')
	{
		if(!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			a = 0;
			break;
		}
		i++;
	}
	return a;
}
