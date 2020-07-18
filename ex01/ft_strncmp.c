/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 16:01:33 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/18 18:55:54 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char str1[] = "abcdef";
	char str2[] = "abcdaa";
	char str3[] = "abcdzz";

	printf("%d ", ft_strncmp(str1, str2, 3));
	printf("%d ", ft_strncmp(str1, str2, 10));
	printf("%d ", ft_strncmp(str1, str2, 5));
	printf("%d ", ft_strncmp(str1, str3, 5));
	printf("%d ", ft_strncmp(str1, str3, 4));
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	
	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		else if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);

		i++;
	}

	if (i == n)
		return (0);
	else if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] > s2[i])
		return (1);

	else return (-1);
}
