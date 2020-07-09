/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 20:33:48 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/09 20:55:54 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char dest[20];
	char src[20];
	strcpy(dest, "To be ");
	strcpy(src, "or not to be");
	strncat(dest, src, 6);
	puts(dest);
	return 0;
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *start = dest;
	while(*dest++)
		;
	dest--;
	while (nb--) {
		if (!(*dest++ = *src)) 
			return start;
	}
	*dest = '\0';
	return start;
}	
