/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:19:50 by marvin            #+#    #+#             */
/*   Updated: 2025/07/24 11:19:50 by marvin           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
	{
		return (nb);
	}
	return (ft_find_next_prime(nb + 1));
}

// int main(void)
// {
//     printf("Next prime >= 0 is %d\n", ft_find_next_prime(0));
//     printf("Next prime >= 1 is %d\n", ft_find_next_prime(1));
//     printf("Next prime >= 2 is %d\n", ft_find_next_prime(2));
//     printf("Next prime >= 3 is %d\n", ft_find_next_prime(3));
//     printf("Next prime >= 8 is %d\n", ft_find_next_prime(8));
//     printf("Next prime >= 14 is %d\n", ft_find_next_prime(14));
//     printf("Next prime >= 17 is %d\n", ft_find_next_prime(17));
//     printf("Next prime >= 20 is %d\n", ft_find_next_prime(20));
//     printf("Next prime >= 97 is %d\n", ft_find_next_prime(97));
//     printf("Next prime >= 100 is %d\n", ft_find_next_prime(100));
//     printf("Next prime >= 997 is %d\n", ft_find_next_prime(997));
//     printf("Next prime >= 1000 is %d\n", ft_find_next_prime(1000));
//     return 0;
// }