/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:52:09 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/15 19:23:37 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    int i;

    i = 0;
    if (little[i] == '\0')
        return (big);
    while(*big != '\0' && i < len)
    {
        if (big[i] == little[0])
            return (big + i);
        i++;
    }
    return (NULL);
}
