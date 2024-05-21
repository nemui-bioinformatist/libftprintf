/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 22:53:26 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/21 20:58:23 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_treat_uint(unsigned int n)
{
	return (ft_putnbr(n));
}

// int main()
// {
//     // テストケース
//     unsigned long long values[] = {0, 1, 15, 16, 255, 256, 4095, 4096,
	// 123456789, 0xFFFFFFFFFFFFFFFF};
//     size_t num_values = sizeof(values) / sizeof(values[0]);

//     for (size_t i = 0; i < num_values; i++) {
//         int count = ft_treat_uint(values[i]);
//         write(1, "\n", 1);
//         printf("Printed %d characters\n", count);
//     }

//     return (0);
// }