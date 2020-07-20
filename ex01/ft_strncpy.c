/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 17:07:45 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/17 22:05:41 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *temp;

	temp = dest;
	while (n)
	{
		if ((*temp = *src) != '\0')
			src++;
		temp++;
		n--;
	}
	return (dest);
}
