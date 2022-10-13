/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:14:39 by dagoncal          #+#    #+#             */
/*   Updated: 2022/09/28 12:18:07 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		if (str[lenght] > 96 && str[lenght] < 123)
		{
			str[lenght] -= 32;
		}
		lenght++;
	}
	return (str);
}
