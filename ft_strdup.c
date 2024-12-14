/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 14:31:28 by luevange          #+#    #+#             */
/*   Updated: 2024/12/14 15:57:11 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	c;
	int		i;
	char	*s2;

	i = 0;
	c = ft_strlen(s);
	s2 = malloc(c);
	while (s[i] != '\0')
	{
		s2[i] = s[i];
		i++;
	}
	return (s2);
}

/*int main(int ac, char **av)
{
	printf("%s", ft_strdup(av[1]));
}*/