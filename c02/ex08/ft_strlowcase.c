/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:45:24 by dagoncal          #+#    #+#             */
/*   Updated: 2022/09/28 14:23:32 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		if (str[lenght] > 64 && str[lenght] < 91)
		{
			str[lenght] += 32;
		}
		lenght++;
	}
	return (str);
}
