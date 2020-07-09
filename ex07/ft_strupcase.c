/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 03:50:16 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/09 12:08:39 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str);

int		main(void)
{
	int j;

	j = 0;
	char str[100] = "sT23dsdfsDC1CDdddss";
	char str2[100] = {};
	*str2 = *ft_strupcase(str);
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
