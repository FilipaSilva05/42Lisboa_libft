/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asilva <asilva@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:46:41 by asilva            #+#    #+#             */
/*   Updated: 2021/11/02 11:16:41 by asilva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_strs(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			count++;
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	i;
	char	*src;
	char	**dest;

	dest = (char **)malloc(((count_strs(s, c)) + 1) * sizeof(*dest));
	if (!dest)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (*s && *s == c)
			s++;
		src = (char *)s;
		len = 0;
		while (*s && *s != c)
		{
			s++;
			len++;
		}
		if (*(s - 1) != c)
			dest[i++] = ft_substr(src, 0, len);
	}
	dest[i] = 0;
	return (dest);
}

/*
int		main(void)
{
	char			**tab;
	unsigned int	i;

	i = 0;
	tab = ft_split(", hello, sp    lit ,,,,  th,,,is,plz, , ", ", ");
	if (!tab[0])
		ft_putendl_fd("ok\n", 1);
	while (tab[i] != NULL)
	{
		ft_putendl_fd(tab[i], 1);
		i++;
	}
}
*/
