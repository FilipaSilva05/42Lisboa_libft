/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva <asilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:46:29 by asilva            #+#    #+#             */
/*   Updated: 2021/11/02 10:47:20 by asilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned char	*start;
	size_t			i;

	i = 0;
	if (dest == NULL)
		return (NULL);
	start = (unsigned char *)dest;
	while (i < count)
	{
		*start = (unsigned char)c;
		start++;
		i++;
	}
	return (dest);
}
