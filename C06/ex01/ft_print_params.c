/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 01:24:15 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/21 01:45:04 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < argc - 1)
	{
		i++;
		while (argv[i][j] != '\0')
			j++;
		write(1, argv[i], j);
		write(1, "\n", 1);
		j = 0;
	}
	return (0);
}
