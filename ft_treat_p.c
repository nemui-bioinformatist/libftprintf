/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:54:24 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/18 23:22:51 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// # include "libft.h"
// # include "libftprintf.h"

# include <stdio.h>
# include <unistd.h>

static int 	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

static char base_change(unsigned long long n)
{
	if (n % 16 > 9)
		return(n % 16 - 10 + 'A');
	else
		return(n % 16 + '0');
}
static int	ft_putnbr_base(unsigned long long n)
{
	int count;

	count = 0;
	if (n <= 16)
		count += ft_putchar(base_change(n));
	else
	{
		count += ft_putnbr_base(n / 16);
		count += ft_putchar(base_change(n));
	}
	return (count);
}

static int ft_point_base(unsigned long long p)
{
	int num;

	write(1, "0x", 2);
	num = 2;
	num += ft_putnbr_base(p);
	return(num);
}

int ft_treat_p(unsigned long long p)
{
	return(ft_point_base(p));
}

int main()
{
    // テストケース
    unsigned long long values[] = {0, 1, 15, 16, 255, 256, 4095, 4096, 123456789, 0xFFFFFFFFFFFFFFFF};
    size_t num_values = sizeof(values) / sizeof(values[0]);

    for (size_t i = 0; i < num_values; i++) {
        int count = ft_point_base(values[i]);
        write(1, "\n", 1);
        printf("Printed %d characters\n", count);
    }

    return 0;
}