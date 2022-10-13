/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:02:46 by dagoncal          #+#    #+#             */
/*   Updated: 2022/09/27 14:35:08 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	count;
	int	count2;
	int	count3;	

	count = 0;
	while (count < size)
	{
		count2 = 0;
		count3 = 1;
		while (count2 < size)
		{
			if (tab[count2] > tab[count3] && count3 < size)
			{
				temp = tab[count2];
				tab[count2] = tab[count3];
				tab[count3] = temp;
			}
			count2++;
			count3 = count2 + 1;
		}
		count++;
	}
}
