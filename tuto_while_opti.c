/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tuto_while_opti.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesaint <edesaint@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 13:42:40 by edesaint          #+#    #+#             */
/*   Updated: 2022/11/20 13:43:32 by edesaint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main(void)
{
  int i;
  
  // test 1 -> in while i--
  i = 5;
  while (i > 0)
  {
    printf("%d\n", i);
    i--;
  }
  
  printf("\n");
  // test 2 -> while i--
  i = 5;
  while (i-- > 0) // i-- puis test la condition
  {
    printf("%d\n", i);
  }
  
  printf("\n");
  // test 3 -> while --i
  i = 5;
  while (--i > 0) // test la condition puis i--
  {
    printf("%d\n", i);
  }
  
  return (0);
}