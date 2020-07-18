/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 06:14:30 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/19 03:48:42 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str[30] = "11231";
	char to_find[10] = "123";

	printf("%s\n%s\n", ft_strstr(str, to_find), strstr(str, to_find));
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int check;

	i = 0;
	if (to_find[i] == '\0')
		return (&str[i]);
	while (str[i] != '\0')
	{
		j = 0;
		check = 1;
		while (str[i + j] != '\0' && to_find[j] != '\0')
		{
			if (str[i + j] != to_find[j])
			{
				check = 0;
				break ;
			}
			j++;
		}
		if (check == 1 && to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
