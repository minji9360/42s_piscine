/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 05:37:01 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/09 14:09:35 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcapitalize(char *str);

int		main(void)
{
	int j;
	char arr[5] = {"12345"};
	
//	printf("salut, comment tU vAs ? 42mots quarante-deuX; cinquante-et-un\n");
//	printf("%c", *ft_strcapitalize(org));
	printf("%s\n", arr);
	printf("%c", *ft_strcapitalize(arr));
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 1;
	while(str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			if (flag == 1)
			{
				str[i] -= 32;
				flag = 0;
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (flag == 0) 
				str[i] += 32;
		}
		else if(str[i] >= '0' && str[i] <= '9')
		{
			flag = 0;
		}
		else
			flag = 1;
		printf("%c", str[i]);
		i++;
	}
	return str;
}

