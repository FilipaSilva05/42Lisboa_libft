/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva <asilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:47:17 by asilva            #+#    #+#             */
/*   Updated: 2021/11/02 13:17:58 by asilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if ((size < start) || len == 0)
		return (ft_strdup(""));
	if (len > (size - start))
		len = (size - start);
	str = (char *)ft_calloc(sizeof(char), len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, (s + start), len + 1);
	return (str);
}

/*
int main()
{
	char* str;

	str = ft_str("tripouille", 0, 42000);
	printf("%s\n", str);

	return 0;
}
*/
