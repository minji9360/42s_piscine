/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:07:53 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/18 17:50:42 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int main(void)
{
	char s1[] = "12345";
	char s2[] = "323141";
	char s3[] = "12345";
	printf("1. %d \n", ft_strcmp(s1, s2));
	printf("2. %d \n", ft_strcmp(s2, s3));
	printf("3. %d \n", ft_strcmp(s3, s1));

}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
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
	return (0);
}
