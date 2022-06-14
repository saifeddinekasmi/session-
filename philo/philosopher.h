/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosopher.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skasmi <skasmi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 17:33:14 by skasmi            #+#    #+#             */
/*   Updated: 2022/06/12 18:05:01 by skasmi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

#include <unistd.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_int
{
    int i;
    int j;
    int k;    
}   t_int;

int	ft_isdigit(int nb);

#endif