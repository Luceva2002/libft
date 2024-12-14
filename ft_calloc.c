/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:00:19 by luevange          #+#    #+#             */
/*   Updated: 2024/12/14 15:12:14 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	mem;
	char	*array;
	char	*zero;
	int		i;

	mem = size * nmemb;
	i = 0;
	if (size == 0)
		return (NULL);
	array = (char *)malloc(mem);
	while (i < mem)
	{
		array[i] = '0';
		i++;
	}
	return ((void *)array);
}

/*int     main()
{
	printf("%s\n", (char *)ft_calloc(2, 4));
	printf("%s\n", (char *)calloc(2, 4));
	return (0);
}*/