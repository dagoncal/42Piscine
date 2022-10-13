/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:29:18 by dagoncal          #+#    #+#             */
/*   Updated: 2022/09/28 10:33:22 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		if (str[lenght] <= 64 || str[lenght] >= 123)
		{
			return (0);
		}
		else if (str[lenght] > 90 && str[lenght] < 97)
		{
			return (0);
		}
		lenght++;
	}
	return (1);
}
