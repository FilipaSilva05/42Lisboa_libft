/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva <asilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:46:24 by asilva            #+#    #+#             */
/*   Updated: 2021/11/05 14:37:10 by asilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	char	*d;
	char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (dest && src)
	{
		while (count --)
			*d++ = *s++;
	}	
	return (dest);
}
