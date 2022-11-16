/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 17:52:24 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/13 18:14:47 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
   int result;
   int sign;
 
   result = 0;
   sign = 1;
   if(*str == '-' || *str == '+')
   {
       if(*str == '-')
       {
           sign *= -1;
       }
   }
   while(*str >= 48 && *str <= 57)
   {
       result = result * 10 + *str;
       str++;
   }
   return (sign * result);
}
