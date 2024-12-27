/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 15:57:44 by luevange          #+#    #+#             */
/*   Updated: 2024/12/27 17:55:29 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;
	
	if (!s)
		return (NULL);
	i = 0;
	s2 = (char *)malloc(ft_strlen(s) + 1);
	while (s[start] && i < len)
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}

/*
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const		*tmp;
	char			*s2;
	unsigned int	i;

	i = 0;
	tmp = &(s[start]);
	if (len < ft_strlen(tmp))
		s2 = (char *)malloc(len + 2);
	else
		s2 = (char *)malloc(ft_strlen(tmp) + 2);
	while (*tmp != '\0' && i < len)
	{
		s2[i] = *tmp;
		tmp++;
		i++;
	}
	s2[i] = '\0';
	return (s2);
}*/
/*
int	main(void)
{
	char *s = ft_substr("tripouille", 100, 1);
	printf("%s\n", s);
	free(s);
	return (0);
} */