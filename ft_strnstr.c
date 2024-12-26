/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:38:17 by luevange          #+#    #+#             */
/*   Updated: 2024/12/23 17:10:21 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;
	size_t	j;

	n = ft_strlen(needle);
	i = 0;
	if (n == 0)
		return ((char *)haystack);
	if (n > len)
		return (0);
	while (haystack[i] && i + n <= len)
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (j == n - 1)
				return ((char *)haystack + i);
			j++;
		}
		i++;
	}
	return (0);
}

/*  int     main(int ac, char **av)
{
	printf("%s\n", ft_strnstr(av[1], av[2], 10));
	printf("%s\n", strnstr(av[1], av[2], 10));
} */