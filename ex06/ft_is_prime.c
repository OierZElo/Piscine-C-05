/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ozugazag <ozugazag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:14:03 by ozugazag          #+#    #+#             */
/*   Updated: 2025/07/23 14:39:28 by ozugazag         ###   ########.fr       */
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
	return (i - 1);
}

int	ft_is_prime(int nb)
{
	int	sqr;
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	sqr = ft_sqrt(nb);
	while (i <= sqr)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	if (ft_is_prime(-10))
// 		printf("-10 es primo.\n");
// 	else
// 		printf("-10 no es primo.\n");
// 	if (ft_is_prime(0))
// 		printf("0 es primo.\n");
// 	else
// 		printf("0 no es primo.\n");
// 	if (ft_is_prime(1))
// 		printf("1 es primo.\n");
// 	else
// 		printf("1 no es primo.\n");
// 	if (ft_is_prime(2))
// 		printf("2 es primo.\n");
// 	else
// 		printf("2 no es primo.\n");
// 	if (ft_is_prime(3))
// 		printf("3 es primo.\n");
// 	else
// 		printf("3 no es primo.\n");
// 	if (ft_is_prime(4))
// 		printf("4 es primo.\n");
// 	else
// 		printf("4 no es primo.\n");
// 	if (ft_is_prime(5))
// 		printf("5 es primo.\n");
// 	else
// 		printf("5 no es primo.\n");
// 	if (ft_is_prime(10))
// 		printf("10 es primo.\n");
// 	else
// 		printf("10 no es primo.\n");
// 	if (ft_is_prime(13))
// 		printf("13 es primo.\n");
// 	else
// 		printf("13 no es primo.\n");
// 	if (ft_is_prime(97))
// 		printf("97 es primo.\n");
// 	else
// 		printf("97 no es primo.\n");
// 	return (0);
// }
