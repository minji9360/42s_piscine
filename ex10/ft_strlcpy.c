/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 18:27:28 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/15 16:39:15 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int				main(void)
{
	char o[20];
	printf("returned - %lu, string - %s \n", strlcpy(o, "abcedf", 10L), o);
	printf("returned - %lu, string - %s \n", strlcpy(o, "123456", 6L), o);
	printf("returned - %lu, string - %s \n", strlcpy(o, "abcedf", 7L), o);
	printf("returned - %lu, string - %s \n", strlcpy(o, "123456", 3L), o);
	printf("returned - %lu, string - %s \n", strlcpy(o, "abcef", 0L), o);
	printf("--------\n");
	
	printf("returned - %u, string - %s \n", ft_strlcpy(o, "abcdef", 10L), o);
	printf("returned - %u, string - %s \n", ft_strlcpy(o, "123456", 6L), o);
	printf("returned - %u, string - %s \n", ft_strlcpy(o, "abcdef", 7L), o);
	printf("returned - %u, string - %s \n", ft_strlcpy(o, "123456", 3L), o);
	printf("returned - %u, string - %s \n", ft_strlcpy(o, "abcef", 0L), o);
	
	return (0);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	count;
	int	int_size;

	count = 0;
	int_size = (int)size;
	while (src[count] != '\0' && count < (int_size - 1))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	while (src[count] != '\0')
		count++;

	return (count);
}
