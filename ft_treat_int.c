/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:07:12 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/18 11:16:41 by rnomura          ###   ########.fr       */
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

int ft_treat_int(int n)
{
	char *moji;
	int num;

	num = 0;
	moji = ft_itoa(n);
	if (!moji)
		return (0);
	num = ft_putstr_count(moji);	
	free(moji);
	return(num);
}
