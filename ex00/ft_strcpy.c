/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:07:53 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/09 15:59:05 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int main(void)
{
	int j = 0;
	char s1[] = "12345";
	char s2[] = "23141";
	char s3[] = "12345";
	printf("1. %d \n", ft_strcmp(s1, s2));
	printf("2. %d \n", ft_strcmp(s2, s3));
	printf("3. %d \n", ft_strcmp(s3, s1));

}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	// 한쪽 문자열이 끝날 때까지 비교 수행
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		// 문자 같으면 계속 비교
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}

		// 앞의 문자가 더 크면 1 return
		else if (s1[i] > s2[i])
			return (1);

		// 뒤의 문자가 더 크면 -1 return
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}

	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] != '\0')
		return (1);
	else return (-1);
}
