/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 03:50:16 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/09 05:05:34 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str);

int		main(void)
{
	int j;

	j = 0;
	char str[100] = "sTdsdfsDC1CDdddss";
	char str2[100] = {};
	*str2 = *ft_strupcase(str);
	while(j <= 100)
	{
		printf("%c", str2[j]);
		j++;
	}
}

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		printf("%c", str[i]);
		i++;
	}
	return str;
}
