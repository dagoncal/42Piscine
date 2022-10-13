/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:24:27 by dagoncal          #+#    #+#             */
/*   Updated: 2022/10/11 12:24:04 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	if (min > max || min == max)
	{
		return (0);
	}
	arr = (int *)malloc((max - min) * sizeof(int));
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

/*
#include <stdio.h>
int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	size;
	int	*arr;
	
	i = 0;
	min = 1;
	max = 5;
	size = max - min;
	arr = ft_range(min, max);
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
	return (0);
}
*/
