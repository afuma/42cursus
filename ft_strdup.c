/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:20:28 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/20 13:57:48 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
    char *new_str;
    size_t i;

    i = 0;
    new_str = (char *) malloc(sizeof(char) * (ft_strlen(str) + 1));
    if(!new_str)
        return (NULL);
    while(str[i])
    {
        new_str[i] = str[i];
        i++;
    }
    new_str[i] = '\0';

    return (new_str);
}