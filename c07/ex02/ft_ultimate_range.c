/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:21:43 by dagoncal          #+#    #+#             */
/*   Updated: 2022/10/06 14:21:49 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;

	i = 0;
	diff = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(diff * sizeof(int));
	if (!*range)
	{
		*range = 0;
		return (-1);
	}
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (diff);
}

/*
#include <stdio.h>
int	main(void)
{
	int	*arr;
	int	min;
	int	max;
	int	size;
	int	i;

	min = 5;
	max = 10;
	i = 0;
	size = ft_ultimate_range(&arr, min, max);
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
	printf("%d", size);
	return (0);
}
*/
