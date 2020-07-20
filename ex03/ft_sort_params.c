/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 01:53:16 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/21 07:55:35 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		compare_str(char *str1, char *str2)
{
	int i;

	i = 0;
	while (str1[i] != '\0' || str2[i] != '\0')
	{
		if (str1[i] > str2[i])
			return (1);
		i++;
	}
	return (0);
}

char	**change_str(int argc, char **argv)
{
	int i;
	int count;
	char *temp;

	count = argc - 1;
	i = 1;
	while (count > 0)
	{
		while (i < count)
		{
			if (compare_str(argv[i], argv[i + 1]))
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
			}
			i++;
		}
		i = 1;
		count--;
	}
	return (argv);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	argv = change_str(argc, argv);
	while(i < argc)
	{
		while(argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
	return (0);
}
