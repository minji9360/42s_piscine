/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 21:09:59 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/09 01:08:10 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char str[200] = {"sdfsdf"};
	printf("%d", ft_str_is_alpha(str));
}

int ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
			return(0);
		else
			return(1);
		i++;
	}
	return (0);
}
