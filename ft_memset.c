/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 16:08:38 by luevange          #+#    #+#             */
/*   Updated: 2024/12/10 12:23:27 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	ft_strlen((const char *)dest);
}

int	main(int ac, char **av)
{
	printf("%d\n", ft_memset(av[1], 5, 4));
	printf("%d\n", memset());
}
