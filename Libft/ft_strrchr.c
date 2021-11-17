/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva <asilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:47:12 by asilva            #+#    #+#             */
/*   Updated: 2021/11/02 11:55:49 by asilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	res;

	i = 0;
	res = -1;
	if (c == '\0')
	{
		while (str[i])
			i++;
		return ((char *)(&(str[i])));
	}
	while (str[i])
	{
		if (str[i] == (char)c)
			res = i;
		i++;
	}
	if (res == -1)
		return (NULL);
	return ((char *)(&(str[res])));
}

/*
int main(void)
{
	char* str = "pen pineapple apple pen!";

	printf("%s\n", ft_strrchr(str, 'p'));

	return 0;
}
*/