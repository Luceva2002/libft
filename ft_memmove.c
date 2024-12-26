/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:59:57 by luevange          #+#    #+#             */
/*   Updated: 2024/12/12 17:11:59 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*a;
	const unsigned char	*b;

	a = (unsigned char *)dest;
	b = (const unsigned char *)src;
	if (!a || !b)
		return (NULL);
	if (dest < src)
	{
		ft_memcpy(dest, src, n);
	}
	else if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			a[i] = b[i];
		}
	}
	return (dest);
}

/*int main(void)
{
	char src[50];
	char dest[50];

	printf("Before memmove, dest is \"%s\"\n", dest);
	ft_memmove(dest, src, 13); // Copia "Hello, world!" (+ il terminatore nullo)
	printf("After memmove, dest becomes \"%s\"\n", dest);
	return (0);
}*/