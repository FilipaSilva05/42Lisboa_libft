/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva <asilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:45:21 by asilva            #+#    #+#             */
/*   Updated: 2021/11/02 11:14:46 by asilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	if (dest == src || size == 0)
		return (dest);
	if (dest < src)
	{
		tmp_dest = (unsigned char *) dest;
		tmp_src = (unsigned char *) src;
		while (size--)
			*tmp_dest++ = *tmp_src++;
	}
	else
	{
		tmp_dest = (unsigned char *) dest + (size - 1);
		tmp_src = (unsigned char *) src + (size - 1);
		while (size--)
			*tmp_dest-- = *tmp_src--;
	}
	return (dest);
}

/*
int main(void)
{
	char a[10] = { "Ana" };
	char b[10] = { "Ana" };
	char str[] = "";

	printf("memmove before : %s\n", a);
	ft_memmove(a + 1, b + 1, 9);
	printf("memmove after : %s\n", a);

	printf("memmove before : %s\n", str);
	ft_memmove(str+3, str +1, 3);
	printf("memmove after : %s\n", str);

	return 0;
}
*/