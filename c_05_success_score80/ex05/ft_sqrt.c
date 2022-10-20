/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:00:39 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/11 13:20:32 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	n;
	long long	num;

	n = nb;
	num = 1;
	while (num * num <= n)
	{
		if (num * num == n)
			return (num);
		num++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	printf("nb=-3 -> %d\n", ft_sqrt(-3));
	printf("nb=0 -> %d\n", ft_sqrt(0));
	printf("nb=5 -> %d\n", ft_sqrt(5));
	printf("nb=9 -> %d\n", ft_sqrt(9));
	printf("nb=2147483647 -> %d\n", ft_sqrt(2147483647));
}*/
