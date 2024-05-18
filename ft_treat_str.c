/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:43:48 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/18 11:47:01 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

static int ft_putstr_count(char *moji)
{
        int num;

        num = 0;
        while(*moji)
        {
                write(1, moji++, 1);
                num++;
        }
        return(num);
}

int ft_treat_str(char *str)
{
	int num;

	num = 0;
	num = ft_putstr_count(str);
	return(num);
}
