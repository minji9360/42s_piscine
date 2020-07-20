/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjikim <minjikim@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 01:53:16 by minjikim          #+#    #+#             */
/*   Updated: 2020/07/21 04:19:38 by minjikim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		compare_str(char *a, char *b)
{
	while (*argv[i] != '\0')
	{
		if (*argv[i] == *argv[i + 1])
			return (0);
		else if (argv[i] > argv[i + 1])
			return (1);
		else if (argv[i] < argv[i + 1])
			return (-1);
	}
	return (0);
}

char	change_str(int i, int result, char **argv)
{
	char temp;

	temp = '\0';
	if (compare_str(argv[j], argv[j+1])
	{
		temp = *argv[i];
		*argv[i] = *argv[i + 1];
		*argv[i + 1] = temp;
	}
	return (**argv);
}


int		main(int argc, char **argv)
{
	int i;
	int result;

	i = 0;
	while (*argv[i] != '\0')
	{
		result = compare_str(i, argv);
		change_str(i, result, argv);
		i++;
	}
	result = 0;
	while (argv[i][result] != '\0')
		result++;
	while (*argv[i] != '\0')
	{
		write(1, argv[i], result + 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);		
}
