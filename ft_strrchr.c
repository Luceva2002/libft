/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:28:33 by luevange          #+#    #+#             */
/*   Updated: 2024/12/17 15:16:44 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (str[i])
	{
		if (str[i] == c)
			return ((char *)str + i);
		i--;
	}
	if (c == '\0')
		return ((char *)str + i);
	return (0);
}

int	main(int ac, char **av)
{
	int c = 'c';
	printf("%s\n", ft_strrchr(av[1], c));
	printf("%s", strrchr(av[1], c));
}