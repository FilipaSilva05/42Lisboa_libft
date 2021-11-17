/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva <asilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:47:10 by asilva            #+#    #+#             */
/*   Updated: 2021/11/02 11:10:26 by asilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *c, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	if (c[0] == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] && i < size)
	{
		j = 0;
		if (str[i] == c[j])
		{
			while (i + j < size && str[i + j] == c[j])
			{
				j++;
				if (!c[j])
					return ((char *)&str[i]);
			}
		}
		i++;
	}
	return (0);
}
