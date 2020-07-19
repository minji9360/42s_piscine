/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 05:37:01 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/19 23:37:33 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	is_letter(char *str)
{
	return ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')
			|| (*str >= '0' && *str <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int flag;
	char *strr;

	flag = 1;
	*strr = *str;
	while (*strr != '\0')
	{
		if (flag == 1 && (*str >= 'a' && *str <= 'z'))
		{
			*str -= 32;
			flag = 0;
		}
		else if (flag == 0 && (*str >= 'A' && *str <= 'Z'))
			*str += 32;
		else if (flag == 1 && (*str >= '0' && *str <= '9'))
			flag = 0;
		else if (!(is_letter(*str)))
			flag = 1;
		*strr++;
	}
	return (strr);
}
