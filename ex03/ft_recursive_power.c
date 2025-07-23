/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:27:57 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/23 13:39:13 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// int	main(void)
// {
// 	printf("2^3 = %d\n", ft_recursive_power(2, 3)); // 8
// 	printf("5^0 = %d\n", ft_recursive_power(5, 0)); // 1
// 	printf("0^0 = %d\n", ft_recursive_power(0, 0));
// 	printf("3^-2 = %d\n", ft_recursive_power(3, -2)); // 0 (potencia negativa)
// 	printf("-2^3 = %d\n", ft_recursive_power(-2, 3)); // -8
// 	printf("-2^4 = %d\n", ft_recursive_power(-2, 4)); // 16
// 	return (0);
// }
