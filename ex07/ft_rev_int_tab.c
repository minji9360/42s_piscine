/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 17:51:57 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/07 21:50:05 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;
	int right;

	i = 0;
	right = size - 1;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[right];
		tab[right] = temp;
		right--;
		i++;
	}
}
