/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   day01.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasalaza <dasalaza@student.42barcelona.c>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 19:19:54 by dasalaza          #+#    #+#             */
/*   Updated: 2023/12/01 20:10:55 by dasalaza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by daruuu on 12/1/23.
//

#include <fcntl.h>
#include <stdio.h>
#include "day01.h"
int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	ft_find_number_in_str(char *str)
{
	int	*value[2];
	int	i = 0;
	int	j = ft_strlen(str);

	while ( str[i] != '\n')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			value[0] = (&str[i]);
			break;
		}
		i++;
	}
	while ( str[j] != '\n')
	{
		if (str[j] >= '0' && str[j] <= '9')
		{
			value[1] = (&str[j]);
			break;
		}
		j++;
	}
}

int	check_min_numbers_in_line(char *str)
{
	int	i = 0;
	int	count_number= 0;

	while (str[i] != '\n')
	{
		if (str[i] >= '0' && str[i] <= '9')
			count_number++;
		i++;
	}
	if (count_number < 2)
		return (0);
	return (1);
}

int	*get_calibration_value_per_line(int fd)
{
	int i = 0;
	char	*str;

	while (str[i] != '\n')
	{

	}


}

char	*read_lines_and_get_calibration_number(int fd)
{
	while (fd != -1)
	{

	}

}

int	main()
{

	int	fd = open("text01", O_RDONLY);
	if (fd == -1)
		printf("error");


	return (0);
}