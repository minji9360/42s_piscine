/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 21:09:59 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/09 16:58:34 by minjikim         ###   ########.fr       */
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
	int a;

	i = 0;
	a = 1;
	while(str[i] != '\0')
	{
		if(!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')))
			a = 0;
		i++;
	}
	return (a);
}
