/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 05:37:01 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/19 18:30:04 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (flag == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			flag = 0;
		}
		else
		{
			if (flag == 0 && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			else if (flag == 1 && (str[i] >= 'A' && str[i] <= 'Z'))
				flag = 0;
			else if (str[i] >= '0' && str[i] <= '9')
				flag = 0;
			else if (str[i] == ' ' || !((str[i] >= 'a' && str[i] <= 'z')
						|| (str[i] >= 'A' && str[i] <= 'Z')))
				flag = 1;
		}
		i++;
	}
	return (str);
}
