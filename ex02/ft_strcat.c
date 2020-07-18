/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:55:05 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/18 19:03:05 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int		main(void)
{
	char s1[100] = "sdfdDDD";
	char s2[100] = "1231111";

	printf("%s\n", s1);
	ft_strcat(s1, s2);
	printf("%s", s1);
}

char	*ft_strcat(char *dest, char *src)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (dest[count] != '\0')
		count++;
	while (src[i] != '\0')
	{
		dest[count + i] = src[i];
		i++;
	}
	dest[count + i] = '\0';
	return (dest);
}
