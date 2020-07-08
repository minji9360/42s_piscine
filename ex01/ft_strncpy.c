/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 17:07:45 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/08 21:02:49 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
	int i;
	char src[255] = {"Hello my name is"};
	char dest[255] = {};

	*dest = *ft_strncpy(dest, src, 3);
	for (i = 0; i <= 3; i++)
	{
		printf("%c", dest[i]);
	}
	return (0);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *temp;

	temp = dest;
	while(n)
	{
		if((*temp = *src) != '\0')
			src++;
		temp++;
		n--;
	}
	return dest;
}	
