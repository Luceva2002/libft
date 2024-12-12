/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:59:57 by luevange          #+#    #+#             */
/*   Updated: 2024/12/12 15:13:02 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned int	array[];
	unsigned int	a;
	unsigned int	b;

	i = 0;
	a = (unsigned char *)dest;
	b = (unsigned char *)src;
	while (i < n)
	{
		array = b[i];
		a[i] = array;
		i++;
	}
}

/*char dest[ MAX_LEN ] = "This is the source string";
char	src[ MAX_LEN ] = "This is the target string";

int main (void)
{
  printf( "Before memcpy, target is \"%s\"\n", src );
  ft_memmove( dest, src, 4);
  printf( "After memcpy, target becomes \"%s\"\n", src );
}*/
