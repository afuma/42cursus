/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 19:23:02 by blax              #+#    #+#             */
/*   Updated: 2022/11/22 11:23:14 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *nstr;
    unsigned int offset_left; // decalage par la gauche
    unsigned int offset_right; // decalage par la droite
    unsigned int len_set;
    unsigned int len_nstr;

    len_nstr = 0;
    offset_left = 0;
    len_set = ft_strlen(set);
    offset_right = len_set + 1; // pour enlever le \0
    // voir len_set - 1 si on commence a l'index 0 (voir aussi pour le \0)
    while (!ft_strncmp(s1 + offset_left, set, len_set))
        offset_left = offset_left + len_set + 1;
    while (!ft_strncmp(s1 + ft_strlen(s1) + 1 - offset_right, set, len_set))
        offset_right = offset_right + len_set;
    
    len_nstr = ft_strlen(s1) + 1 - (offset_right + offset_left);
    nstr = malloc(sizeof(char) * len_nstr);
    if (!nstr)
        return(NULL);
    ft_strlcpy(nstr, s1 + offset_left, len_nstr - offset_left);
    
    return (nstr);
}