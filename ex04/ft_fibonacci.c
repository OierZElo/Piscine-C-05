/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:42:50 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/23 13:51:24 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// int	main(void)
// {
// 	printf("Fibonacci(-2) = %d\n", ft_fibonacci(-2)); // Índice inválido (-1)
// 	printf("Fibonacci(-1) = %d\n", ft_fibonacci(-1)); // Índice inválido (-1)
// 	printf("Fibonacci(0) = %d\n", ft_fibonacci(0));   // 0
// 	printf("Fibonacci(1) = %d\n", ft_fibonacci(1));   // 1
// 	printf("Fibonacci(2) = %d\n", ft_fibonacci(2));   // 1
// 	printf("Fibonacci(3) = %d\n", ft_fibonacci(3));   // 2
// 	printf("Fibonacci(4) = %d\n", ft_fibonacci(4));   // 3
// 	printf("Fibonacci(5) = %d\n", ft_fibonacci(5));   // 5
// 	printf("Fibonacci(6) = %d\n", ft_fibonacci(6));   // 8
// 	printf("Fibonacci(7) = %d\n", ft_fibonacci(7));   // 13
// 	printf("Fibonacci(8) = %d\n", ft_fibonacci(8));   // 21
// 	printf("Fibonacci(9) = %d\n", ft_fibonacci(9));   // 34
// 	printf("Fibonacci(10) = %d\n", ft_fibonacci(10)); // 55
// 	return (0);
// }
