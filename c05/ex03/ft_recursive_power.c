/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 13:48:00 by dagoncal          #+#    #+#             */
/*   Updated: 2022/10/11 16:11:41 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
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
	if (power > 0)
	{
		res = nb * ft_recursive_power(nb, (power - 1));
	}
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d \n", ft_recursive_power(-1, 2));
	printf("%d \n", ft_recursive_power(0, 2));
	printf("%d \n", ft_recursive_power(1, 2));
	printf("%d \n", ft_recursive_power(2, 2));
	printf("%d \n", ft_recursive_power(8, 2));
	return (0);
}
*/
