/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:52:24 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/23 20:26:58 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
   int result;
   int sign;
 
   result = 0;
   sign = 1;
   while ((*str >= 9 && *str <= 13) || *str == ' ')
        str++;
   if(*str == '-' || *str == '+')
   {
       if(*str++ == '-')
           sign *= -1;
   }
   while(ft_isdigit(*str))
   {
       result = result * 10 + (*str - '0');
       str++;
   }
   return (sign * result);
}
// faire un main et teser le 0 en fin de chaine comme: 120
// et voir s'il neretourne pas 1200 avec le \0 comptait comme un 0 ?