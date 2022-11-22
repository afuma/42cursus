/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:43:33 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/22 18:22:31 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "libft.h"

int compt_words(char const *str, char delimiter, int *len_words)
{
    size_t len_str;
    
    len_str = 0;
    while (*str)
    {
        if (*str != c)
            len_str++;
        else
            ft_substr(str, start, len_str);
        len_str = -1;
    }

    return (nb_words);
}

void fill_tab(char *s, char *stab, int *len_words, size_t nb_words)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < nb_words)
    {
        while (j <= len_words[i])
        {
            stab[i + j] = s[j];
            j++;
        }
        j = 0;
        i++;
    }
}

void init_tab(char **tab, char *stab, int *len_words)
{
    int i;

    i = 0;
    tab = (char **) malloc(sizeof(char *) * nb_words);
    if (!tab)
        return (NULL);

    while (i <= nb_words)
    {
        stab = (char *) malloc(sizeof(char) * len_words[i]);
        if (!stab)
            return (NULL);
        i++;
    }
}

char **ft_split(char const *str, char delimiter)
{
    char **tab;
    char *stab;
    size_t nb_words;
    int *len_words;

    len_str = 0;
    nb_words = 0;
    nb_words = compt_words(s, c, len_words);
    init_tab(tab, stab, len_words, c);
    fill_tab(tab, stab, len_words);

    return (tab);
}
*/