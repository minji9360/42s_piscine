/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 21:21:32 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/19 04:00:26 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest1[50] = "abcd";
	char dest2[50] = "abcd";
	char src[] = "12345";
	unsigned int size = 2;
	printf("%s, %u\n%s, %lu\n", dest1, ft_strlcat(dest1, src, size), dest2, strlcat(dest2, src, size));
	return (0);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';
	while (src[j] != '\0')
		j++;
	if (i > size)
		return (size + j);
	return (i + j);
}
