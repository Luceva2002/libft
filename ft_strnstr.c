/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:38:17 by luevange          #+#    #+#             */
/*   Updated: 2024/12/10 14:15:22 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*needle > len)
		return (0);
	if (haystack[i] > len)
		return (0);
	while (haystack[i] && i <= len)
	{
		if (haystack[i] == *needle)
		{
			return ((char *)haystack + i);
			needle++;
		}
		i++;
	}
	return (0);
}

/* int     main(int ac, char **av)
{
	printf("%s\n", ft_strnstr(av[1], av[2], 10));
	printf("%s\n", strnstr(av[1], av[2], 10));
}*/