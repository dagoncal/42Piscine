/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:18:26 by dagoncal          #+#    #+#             */
/*   Updated: 2022/10/11 16:09:15 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	unsigned int	res;

	res = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d \n", ft_iterative_power(0, 2));
	printf("%d \n", ft_iterative_power(-1, 2));
	printf("%d \n", ft_iterative_power(2, 2));
	printf("%d \n", ft_iterative_power(8, 2));
	return (0);
}
*/
