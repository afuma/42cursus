/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:20:28 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/16 18:40:33 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
    char *new_str;
    int i;

    i = 0;
    new_str = (char *) malloc(ft_strlen(str) * sizeof(char) + 1);
    while(str[i] != '\0')
    {
        new_str[i] = str[i];
        i++;
    }
    
    return (new_str);
}