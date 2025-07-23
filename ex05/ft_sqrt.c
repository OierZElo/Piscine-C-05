/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:53:40 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/23 14:13:20 by ozugazag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	n;

	if (nb < 0)
		return (0);
	n = 0;
	i = 0;
	while (n <= nb)
	{
		if (n == nb)
			return (i);
		n = n + (2 * i) + 1;
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	res;

// 	res = ft_sqrt(0);
// 	printf("ft_sqrt(0) = %d\n", res);
// 	res = ft_sqrt(1);
// 	printf("ft_sqrt(1) = %d\n", res);
// 	res = ft_sqrt(4);
// 	printf("ft_sqrt(4) = %d\n", res);
// 	res = ft_sqrt(9);
// 	printf("ft_sqrt(9) = %d\n", res);
// 	res = ft_sqrt(10);
// 	printf("ft_sqrt(10) = %d (no es cuadrado perfecto)\n", res);
// 	res = ft_sqrt(16);
// 	printf("ft_sqrt(16) = %d\n", res);
// 	res = ft_sqrt(-4);
// 	printf("ft_sqrt(-4) = %d (no es cuadrado perfecto)\n", res);
// 	return (0);
// }
