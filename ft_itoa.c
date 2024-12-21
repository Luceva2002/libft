/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luevange <luevange@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 12:05:27 by luevange          #+#    #+#             */
/*   Updated: 2024/12/21 17:41:35 by luevange         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int  cnt_ln(int nb)
{
    int div;
    int cnt;
    
    cnt = 0;
    if (nb == 0)
        return (1);
    if (nb < 0)
    {
        nb = -nb;
    }
    while (nb > 0)
    {
        div = nb / 10;
        cnt ++;
        nb = div;
    }
    return (cnt);
}
char *numchar(int nb)
{
    char *s;
    int tmp;
    int i;
    
    i = 0;
    tmp = nb;
    if (nb < 0)
    {
        nb = -nb;
        i++;     
    }
    while (nb > 0)
        nb = nb / 10;
    while (nb <= tmp)
    {
        s[i] = (nb % 10) + '0';
        nb = nb * 10;
        i ++;
    }
    s[i] = '\0';
    return (s);
}

char *ft_itoa(int nb)
{
    char *s;
    
    s = (char *)malloc(sizeof(char *) * (cnt_ln(nb) + 1));
    if (nb < 0)
    {
        *s = '-';
        s ++;
    }
    *s = *numchar(nb);
    
}

int main()
{
    int i = -10;
    printf("%s", numchar(i));
    //printf("%d", cnt_ln(n));
}