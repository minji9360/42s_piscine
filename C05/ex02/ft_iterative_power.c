/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 17:09:22 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/20 17:18:06 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (nb < 0 && power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (result);
	else
		while (power > 0)
		{
			result *= nb;
			power--;
		}
	return (result);
}
