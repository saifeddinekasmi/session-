/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:32:28 by skasmi            #+#    #+#             */
/*   Updated: 2022/06/12 18:24:20 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosopher.h"

int main(int ac, char **av)
{
    t_int t;
    
    t.i = 1;
    t.j = 0;
    (void)ac;
    int *table = NULL;
    // if (ac == 5 || ac == 6)
    // {
   
    // }
    while (av[t.i])
    {
        printf("test\n");
        atoi(av[t.i]);
        printf("%d\n", av[t.i]);
        t.i++;
        t.j++;
    }
    t.i = 1;
    while (av[t.i])
    {
        // atoi(av[t.i]);
        // printf("%d\n", av[t.i][t.j]);
        while (av[t.i][t.j])
        {
            if (ft_isdigit(av[t.i][t.j]) == 1)
            {
                printf("ARG must contain just numbers !!");
                return (0);
            }
            t.j++;
        }
        t.i++;
    }
    // else 
    // {
    //     printf("ERR0R Arg !!");
    //     return (0);
    // }
    return (0);   
}