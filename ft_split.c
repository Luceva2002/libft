/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:50:43 by luevange          #+#    #+#             */
/*   Updated: 2024/12/21 17:00:34 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_word(char const *str, char c)
{
	int	i;
	int	count;

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

int	charcount(char const *str, char c, int i)
{
	int	len;

	len = 0;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	char	**temp;

	k = 0;
	i = 0;
	temp = malloc(sizeof(char *) * (count_word(s, c) + 1));
	while (s[i])
	{
		if (s[i] != c && k < count_word(s, c))
		{
			temp[k] = malloc((charcount(s, c, i) + 1) * sizeof(char));
			ft_strlcpy(temp[k], &s[i], charcount(s, c, i));
			k++;
			i += charcount(s, c, i);
		}
		else
			i++;
	}
	temp[k] = NULL;
	return (temp);
}
/* int	main(int ac, char **av)
{
	char **array;

	(void)ac;
	int	i = 0;
	array = ft_split(av[1], 'c');
	while (array[i])
	{
		printf("%s\n", array[i]);
		i ++;
	}
	i = 0;
	while(array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
	return (0);
} */