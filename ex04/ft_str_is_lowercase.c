/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 02:14:05 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/09 02:55:04 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
	char str[200] = {"ssbss"};
	printf("%d", ft_str_is_lowercase(str));
}

int ft_str_is_lowercase(char *str)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while(str[i] != '\0')
	{
		if(!(str[i] >= 'a' && str[i] <= 'z'))
		{
			a = 0;
			break;
		}
		else
			a = 1;
		i++;
	}
	return a;	
}
