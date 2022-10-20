/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:01:43 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/11 10:42:43 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime2(int nb)
{
	long long	n;
	long long	num;

	n = nb;
	num = 2;
	while (num * num <= n)
	{
		if (n % num == 0)
			return (0);
		num++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	while (ft_is_prime2(nb) != 1)
		nb++;
	return (nb);
}

/*
#include <stdio.h>
int	main()
{
	printf("nb=-6 -> %d\n", ft_find_next_prime(-6));
	printf("nb=0 -> %d\n", ft_find_next_prime(0));
	printf("nb=6 -> %d\n", ft_find_next_prime(6));
	printf("nb=17 -> %d\n", ft_find_next_prime(17));
	printf("nb=92 -> %d\n", ft_find_next_prime(92));
}*/
