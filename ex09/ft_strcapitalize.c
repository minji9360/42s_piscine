/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 05:37:01 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/19 21:32:08 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int flag;

	flag = 1;
	while (str != '\0')
	{
		if (flag == 1 && (*str >= 'a' && *str <= 'z'))
		{
			str -= 32;
			flag = 0;
		}
		else
		{
			if (flag == 0 && (*str >= 'A' && *str <= 'Z'))
				str += 32;
			else if (flag == 1 && (*str >= 'A' && *str <= 'Z'))
				flag = 0;
			else if (*str >= '0' && *str <= '9')
				flag = 0;
			else if (*str == ' ' || !((*str >= 'a' && *str <= 'z')
						|| (*str >= 'A' && *str <= 'Z')))
				flag = 1;
		}
		str++;
	}
	return (str);
}
