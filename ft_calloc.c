/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 16:00:19 by luevange          #+#    #+#             */
/*   Updated: 2024/12/21 10:14:22 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	mem;
	void	*array;

	mem = size * nmemb;
	array = malloc(mem);
	if (array == 0)
		return (array);
	ft_bzero(array, mem);
	return (array);
}

/*int     main()
{
	printf("%s\n", (char *)ft_calloc(2, 4));
	printf("%s\n", (char *)calloc(2, 4));
	return (0);
}*/