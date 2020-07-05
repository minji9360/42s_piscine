/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 01:40:09 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/06 01:58:46 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void);

int		main(void)
{
	ft_print_alphabet();
}

void	ft_print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		write(1, &letter, 1);

		letter++;
	}
}
