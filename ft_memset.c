/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:49:07 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/16 18:24:50 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void *ft_memset(void *s, int c, size_t n)
{
    int *ptr;
    size_t i;

    ptr = (int *) s;
    i = 0;
    while (i <= n)
    {
        ptr[i] = c;
        i++;
    }

    return (s);
}
*/
void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr;

    ptr = s;
    while(n-- > 0)
        *ptr++ = c;
        
    return (s);
}
