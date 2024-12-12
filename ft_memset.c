/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:08:38 by luevange          #+#    #+#             */
/*   Updated: 2024/12/10 15:41:37 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)dest)[i] = c;
		i++;
	}
	return (dest);
}

/*int	main()
{
	char array[10] = "ciccio";
	printf("%s\n", (char *)memset(array, '8', 4));
	printf("%s\n", (char *)ft_memset(array, '8', 4));
	return(0);
}*/
