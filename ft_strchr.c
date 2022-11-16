/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:51:13 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/16 18:35:28 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    // si il y a une erreur de cast entre la string (const char *s) et la valeur de retour qui est un char
    // alors creer une variable (char *str; *str = *s;) puis travailler avec str
    char *str;

    str = (char *) s;
    while (*str != '\0')
    {
        if (*str == c)
            return (str);
        str++;
    }
    if (*str == '\0' && c == '\0')
        return (str);
    return (NULL);
}
/*
char *ft_strchr(const char *s, int c)
{
    // si il y a une erreur de cast entre la string (const char *s) et la valeur de retour qui est un char
    // alors creer une variable (char *str; *str = *s;) puis travailler avec str
    char *str;

    str = (char *) s;
    while (*str)
    {
        if (*str == c)
            return (str);
        str++;
    }
    if (!*str && !c)
        return (str);
    return (NULL);
}*/