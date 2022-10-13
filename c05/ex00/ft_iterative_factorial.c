/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:59:57 by dagoncal          #+#    #+#             */
/*   Updated: 2022/10/04 11:53:32 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	i = nb - 1;
	while (i > 1)
	{
		nb = nb * i;
		i--;
	}
	nb = nb * 1;
	return (nb);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d \n", ft_iterative_factorial(-1));
	printf("%d \n", ft_iterative_factorial(0));
	printf("%d \n", ft_iterative_factorial(8));
	return (0);
}
*/
