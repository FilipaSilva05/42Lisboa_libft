/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva <asilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:46:59 by asilva            #+#    #+#             */
/*   Updated: 2021/11/02 11:08:28 by asilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	destsize;
	size_t	srcsize;
	size_t	i;

	destsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	if (n == 0)
		return (srcsize);
	if (n < destsize)
		srcsize += n;
	else
		srcsize += destsize;
	i = 0;
	while (src[i] != '\0' && (destsize + i) < n - 1)
	{
		dest[destsize + i] = src[i];
		i++;
	}
	dest[destsize + i] = '\0';
	return (srcsize);
}
