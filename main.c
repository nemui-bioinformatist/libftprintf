/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 22:50:06 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/16 00:02:01 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libftprintf.h"

int ft_printf(const char *input, ...)
{
	va_list args;//the list of argument
	int num;//output of ft_printf

	num = 0;
	va_start(args, input);//initialization
	num = printf_process();
}
