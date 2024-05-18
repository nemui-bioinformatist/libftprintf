/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 22:53:26 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/18 23:20:37 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// # include <stdio.h>
// # include <unistd.h>

// int 	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// 	return (1);
// }

// int	ft_putnbr(unsigned long long n)
// {
// 	int count;

// 	count = 0;
// 	if (n <= 9)
// 		count += ft_putchar(n + '0');
// 	else
// 	{
// 		count += ft_putnbr(n / 10);
// 		count += ft_putchar(n % 10 + '0');
// 	}
// 	return (count);
// }

int ft_treat_uint(unsigned long long n)
{
    return(ft_putnbr(n));
}

// int main()
// {
//     // テストケース
//     unsigned long long values[] = {0, 1, 15, 16, 255, 256, 4095, 4096, 123456789, 0xFFFFFFFFFFFFFFFF};
//     size_t num_values = sizeof(values) / sizeof(values[0]);

//     for (size_t i = 0; i < num_values; i++) {
//         int count = ft_treat_uint(values[i]);
//         write(1, "\n", 1);
//         printf("Printed %d characters\n", count);
//     }

//     return 0;
// }