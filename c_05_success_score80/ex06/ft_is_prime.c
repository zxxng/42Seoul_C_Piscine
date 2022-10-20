/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:01:09 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/11 10:42:54 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long	n;
	long long	num;

	n = nb;
	if (nb < 2)
		return (0);
	num = 2;
	while (num * num <= n)
	{
		if (n % num == 0)
			return (0);
		num++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main()
{
	printf("nb=-6 -> %d\n", ft_is_prime(-6));
	printf("nb=0 -> %d\n", ft_is_prime(0));
	printf("nb=7 -> %d\n", ft_is_prime(7));
	printf("nb=68 -> %d\n", ft_is_prime(68));
	printf("nb=97 -> %d\n", ft_is_prime(97));
}*/
