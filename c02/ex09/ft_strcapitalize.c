/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <dagoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:54:17 by dagoncal          #+#    #+#             */
/*   Updated: 2022/10/04 16:42:18 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	check_char(char c)
{
	if (c > 47 && c < 58)
	{
		return (0);
	}
	else if (c > 64 && c < 91)
	{
		return (0);
	}
	else if (c > 96 && c < 123)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	str = ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (cap == 1 && (str[i] > 96 && str[i] < 123))
		{
			str[i] -= 32;
		}
		cap = check_char(str[i]);
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}
*/
