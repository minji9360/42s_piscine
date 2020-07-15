/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 05:08:29 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/14 17:43:41 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str);

int		main(void)
{
	char test[50] = {"sdf123SGeDefsD"};
	char result[50] = {};
	*result = *ft_strlowcase(test);
}

char	*ft_strlowcase(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		printf("%c", str[i]);
		i++;
	}
	return str;
}
