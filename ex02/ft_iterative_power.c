/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:41:05 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/23 13:27:17 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

// int	main(void)
// {
// 	printf("2^3 = %d\n", ft_iterative_power(2, 3));   // 8
// 	printf("5^0 = %d\n", ft_iterative_power(5, 0));   // 1
// 	printf("0^0 = %d\n", ft_iterative_power(0, 0));   // 1
// 	printf("3^-2 = %d\n", ft_iterative_power(3, -2)); // 0
// 	return (0);
// }
