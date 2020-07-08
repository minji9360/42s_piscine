/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 23:14:19 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/08 18:17:55 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int		main(void)
{
	char s1[255] = "Hello";
	char s2[10] = "Noooo";
	int i;

	i = 1;
	while(i++)
	{
		printf("%c\n", *ft_strcpy(s1, s2));
	}
	return 0;
}

char	*ft_strcpy(char *dest, char *src)
{
	char *temp;

	temp = dest;
	while(*src)
	{
		*temp++ = *src++;
	}
	*temp = 0x00;

	return dest;
}
