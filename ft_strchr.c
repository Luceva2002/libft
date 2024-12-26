/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:38:20 by luevange          #+#    #+#             */
/*   Updated: 2024/12/26 22:04:35 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	c1;

	c1 = (unsigned char)c;
	while (*str)
	{
		if (*str == c1)
			return ((char *)str);
		str++;
	}
	if (c1 == '\0')
		return ((char *)str);
	return (NULL);
}

/*int main(int ac, char **av)
{
	int c = 'c';
	printf("%s\n", ft_strchr(av[1], c));
	printf("%s", strchr(av[1], c));
}*/
