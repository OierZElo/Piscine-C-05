/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:33:15 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/23 12:39:32 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	return (1);
}

// int	main(void)
// {
// 	printf("Factorial de 5: %d\n", ft_recursive_factorial(5));   // 120
// 	printf("Factorial de 0: %d\n", ft_recursive_factorial(0));   // 1
// 	printf("Factorial de -2: %d\n", ft_recursive_factorial(-2)); // 0
// 	return (0);
// }
