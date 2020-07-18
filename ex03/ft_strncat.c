/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 20:33:48 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/19 03:51:16 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int		main(void)
{
	char dest[20];
	char src[20];
	strcpy(dest, "To be ");
	strcpy(src, "or not to be");
	strncat(dest, src, 3);
	puts(dest);
	return 0;
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size;
	unsigned int	i;

	size = 0;
	i = 0;
	while (dest[size] != '\0')
		size++;
	while (src[i] != '\0' && (i < nb))
	{
		dest[size] = src[i];
		size++;
		i++;
	}
	dest[size] = '\0';
	return (dest);
}
