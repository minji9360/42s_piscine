/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:19:10 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/20 18:05:44 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int result;

	result = 1;
	if (nb < 0 && power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (1);
	else
		while (power > 0)
		{
			result *= nb;
			power--;
		}
	return (result);
}
