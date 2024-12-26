/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:06:05 by luevange          #+#    #+#             */
/*   Updated: 2024/12/23 13:43:03 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(dest) > size)
		return (ft_strlen(src) + size);
	else
		while (dest[i] != '\0' && i < size && size > 0)
			i++;
	while ((i + j + 1) < size && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + ft_strlen(src));
}

/* int	main(void)
{
	char s1[20] = "123456789";
	char s2[20] = "poppo";
	char s3[20] = "123456789";

	printf("dest: %s len: %zu\n", s1, ft_strlcat(s1, s2, 20));
	printf("dest: %s len: %zu\n", s3, strlcat(s3, s2, 20));
} */