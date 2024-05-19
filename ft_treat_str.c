/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:43:48 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/19 16:23:27 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
# include "libftprintf.h"

int ft_treat_str(char *str)
{
	if (!str)
	{
		write(1, "(NULL)", 6);
		return(6);
	}
	return(ft_putstr(str));
}
