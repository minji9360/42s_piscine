/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 05:30:56 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/19 09:39:43 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int n;
	int result;

	i = 0;
	n = 1;
	result = 0;
	while (str[i] == '\t' || str[i]  == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * n);
}

int		main(void)
{
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("1"));
	printf("%d\n", ft_atoi("10"));
	printf("%d\n", ft_atoi("123"));
	printf("%d\n", ft_atoi("1234"));
	printf("%d\n", ft_atoi("1234567890"));
	printf("%d\n", ft_atoi("-1"));
	printf("%d\n", ft_atoi("-10"));
	printf("%d\n", ft_atoi("-1234"));
	printf("%d\n", ft_atoi("-1234567890"));
	printf("%d\n", ft_atoi("  \t \r ---123tt"));
	printf("%d\n", ft_atoi(""));
	printf("%d\n", ft_atoi("- + -= - + 2-1 b"));
	return (0);
}
