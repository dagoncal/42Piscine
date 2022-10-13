/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagoncal <dagoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:22:18 by dagoncal          #+#    #+#             */
/*   Updated: 2022/10/13 11:57:28 by dagoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_arrlen(char **strs)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (strs[i])
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	lenght;

	lenght = 0;
	while (src[lenght] != '\0')
	{
		dest[lenght] = src[lenght];
		lenght++;
	}
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	char	*aux;

	i = 0;
	str = (char *)malloc((ft_arrlen(strs)
				+ ft_strlen(sep) * size + 1) * sizeof(char));
	str[0] = '\0';
	if (size == 0)
		return (str);
	aux = str;
	while (i < size)
	{
		ft_strcpy(aux, strs[i]);
		aux += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(aux, sep);
			aux += ft_strlen(sep);
		}
		i++;
	}
	*aux = '\0';
	return (str);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*str;
	char	*sep;

	sep = "----";
	str = ft_strjoin(argc, argv, sep);
	printf("%s", str);
	free(str);
}
*/
