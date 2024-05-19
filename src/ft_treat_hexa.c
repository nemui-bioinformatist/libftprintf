/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 12:42:30 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/19 22:55:38 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

// # include <stdio.h>
// # include <unistd.h>

// static int 	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// 	return (1);
// }

static char	base_change_lx(unsigned int n)
{
	if (n % 16 > 9)
		return (n % 16 - 10 + 'A');
	else
		return (n % 16 + '0');
}

static char	base_change_x(unsigned int n)
{
	if (n % 16 > 9)
		return (n % 16 - 10 + 'a');
	else
		return (n % 16 + '0');
}

static int	ft_putnbr_base_lx(unsigned int n)
{
	int	count;

	count = 0;
	if (n <= 15)
		count += ft_putchar(base_change_lx(n));
	else
	{
		count += ft_putnbr_base_lx(n / 16);
		count += ft_putchar(base_change_lx(n));
	}
	return (count);
}

static int	ft_putnbr_base_x(unsigned int n)
{
	int	count;

	count = 0;
	if (n <= 15)
		count += ft_putchar(base_change_x(n));
	else
	{
		count += ft_putnbr_base_x(n / 16);
		count += ft_putchar(base_change_x(n));
	}
	return (count);
}

int	ft_treat_hexa(unsigned int n, char c)
{
	int	num;

	if (c == 'X')
		num = ft_putnbr_base_lx(n);
	else
		num = ft_putnbr_base_x(n);
	return (num);
}

// int main() {
//     printf("Uppercase");
//     ft_treat_hexa(12345, 'X');
//     printf("\n");
//     ft_treat_hexa(123456789, 'X');
//     printf("\n");
//     printf("Lowercase");
//     ft_treat_hexa(12345, 'x');
//     printf("\n");
//     ft_treat_hexa(123456789, 'x');
// }