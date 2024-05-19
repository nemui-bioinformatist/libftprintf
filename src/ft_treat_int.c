/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnomura <rnomura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:07:12 by rnomura           #+#    #+#             */
/*   Updated: 2024/05/19 22:59:38 by rnomura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <unistd.h>

// static size_t	count_digit(long long num)
// {
// 	size_t	count;

// 	count = 0;
// 	if (num == 0)
// 		return (1);
// 	while (num > 0)
// 	{
// 		num = (num - num % 10) / 10;
// 		count++;
// 	}
// 	return (count);
// }

// static void	getdigitstoarray(char *arr, size_t count, size_t sign,
// 		long long num)
// {
// 	arr[count] = '\0';
// 	while (sign < count)
// 	{
// 		arr[--count] = num % 10 + '0';
// 		num = (num - num % 10) / 10;
// 	}
// 	if (sign == 1)
// 		arr[0] = '-';
// }

// char	*ft_itoa(int n)
// {
// 	size_t		sign;
// 	size_t		count;
// 	long long	num;
// 	char		*arr;

// 	count = 0;
// 	sign = 0;
// 	num = n;
// 	if (n < 0)
// 	{
// 		sign = 1;
// 		num *= -1;
// 		count++;
// 	}
// 	count += count_digit(num);
// 	arr = (char *)malloc((count + 1) * sizeof(char));
// 	if (!arr)
// 		return (NULL);
// 	getdigitstoarray(arr, count, sign, num);
// 	return (arr);
// }

// int ft_putstr(char *s)
// {
// 	int count;

// 	count = 0;
// 	while(s && *s)
// 	{
// 		write(1, s++, 1);
// 		count++;
// 	}
// 	return(count);
// }

int	ft_treat_int(int n)
{
	char	*moji;
	int		num;

	num = 0;
	moji = ft_itoa(n);
	if (!moji)
		return (0);
	num = ft_putstr(moji);
	free(moji);
	return (num);
}

// int main()
// {
//     printf("Test 1: %d\n", ft_treat_int(1234));       // 
//     printf("Test 2: %d\n", ft_treat_int(-5678));      // 
//     printf("Test 3: %d\n", ft_treat_int(0));          // 
//     printf("Test 4: %d\n", ft_treat_int(2147483647)); // 
//     printf("Test 5: %d\n", ft_treat_int(-2147483648));// 

//     return 0;
// }