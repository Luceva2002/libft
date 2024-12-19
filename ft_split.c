/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:50:43 by luevange          #+#    #+#             */
/*   Updated: 2024/12/19 18:44:01 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_word(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}
size_t	charcount(char const *str, char c, size_t i)
{
	while (str[i] != c)
		i++;
	return (i);
}
char	**ft_split(char const *s, char c)
{
	char const	**temp;
	int			*i;
	size_t		p;

	p = count_word(s, c);
	temp = malloc(sizeof(char) * count_word(s, c) + 1);
	while (*s)
	{
		if (s[i] != c)
			temp[0] = malloc((charcount(s, c, i) + 1) * sizeof(char));
		k++;
	}
}
int	main(int ac, char **av)
{
	printf("%zu\n", count_word((char const *)av[1], 'c'));
}