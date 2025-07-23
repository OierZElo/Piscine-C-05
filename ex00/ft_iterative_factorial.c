/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:26:55 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/23 12:32:26 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		result = result * nb--;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("Factorial de -5: %d\n", ft_iterative_factorial(-5));
// 	printf("Factorial de 0: %d\n", ft_iterative_factorial(0));   // 1
// 	printf("Factorial de 1: %d\n", ft_iterative_factorial(1));   // 1
// 	printf("Factorial de 5: %d\n", ft_iterative_factorial(5));   // 120
// 	printf("Factorial de 10: %d\n", ft_iterative_factorial(10)); // 3628800
// 	return (0);
// }
