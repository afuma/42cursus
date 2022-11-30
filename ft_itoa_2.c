/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:45:06 by blax              #+#    #+#             */
/*   Updated: 2022/11/21 19:31:25 by blax             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h> // printf
#include <stdint.h> //INT_MAX

static int ft_abs(int nbr)
{
    if (nbr < 0)
        return (-nbr);
    return (nbr);
}

static int ft_neg(int nbr)
{
    return (nbr < 0);
}

static int ft_cptdigit(int n)
{
    int i;

    i = 1;
    while (n > 9)
    {
        n /= 10;
        i++;
    }

    return (i);
}

static char *ft_allocate(char *str, int len)
{
    str = (char *) malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    return (str);
}

char *ft_itoa(int n)
{
    char *str;
    int len_n;
    int neg;

    neg = ft_neg(n);
    n = ft_abs(n);
    len_n = ft_cptdigit(n) + neg;
    if (!ft_allocate(str, len))
        return (NULL);
    str[len_n] = '\0';
    while (--len_n >= 0)
    {
        if (!len_n && neg)
            str[0] = '-';
        else
        {
            str[len_n] = (n % 10) + '0';
            n /= 10;
        }
    }
    return (str);
}

/*
int main(void)
{
    int n;

    n = 3402; printf("%d: %s\n", n, ft_itoa(n));
    n = 0; printf("%d: %s\n", n, ft_itoa(n));
    n = 1; printf("%d: %s\n", n, ft_itoa(n));
    n = 9; printf("%d: %s\n", n, ft_itoa(n));
    n = 10; printf("%d: %s\n", n, ft_itoa(n));
    n = 30025; printf("%d: %s\n", n, ft_itoa(n));
    n = 900; printf("%d: %s\n", n, ft_itoa(n));
    n = -4; printf("%d: %s\n", n, ft_itoa(n));
    n = -478888; printf("%d: %s\n", n, ft_itoa(n));
    n = -2200; printf("%d: %s\n", n, ft_itoa(n));
    
    return (0);
}
*/