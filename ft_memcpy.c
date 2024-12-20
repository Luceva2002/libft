/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:20:32 by luevange          #+#    #+#             */
/*   Updated: 2024/12/20 17:29:35 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*b;
	unsigned char	*a;

	i = 0;
	b = (unsigned char *)src;
	a = (unsigned char *)dest;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}

/*#define MAX_LEN 80

char	source[ MAX_LEN ] = "This is the source string";
char	target[ MAX_LEN ] = "This is the target string";

int	main(void)
{
  printf( "Before memcpy, target is \"%s\"\n", target );
  ft_memcpy( target, source, sizeof(source));
  printf( "After memcpy, target becomes \"%s\"\n", target );
}*/