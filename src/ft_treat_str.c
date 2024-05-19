/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:43:48 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/19 22:39:34 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_treat_str(char *str)
{
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	return (ft_putstr(str));
}
