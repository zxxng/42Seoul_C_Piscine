/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:58:48 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/11 10:22:49 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	num;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	num = 1;
	while (power > 0)
	{
		num = num * nb;
		power--;
	}
	return (num);
}

/*
#include <stdio.h>
int	main()
{
	printf("%s -> %d\n", "2, -2", ft_iterative_power(2, -2));
	printf("%s -> %d\n", "2, 0", ft_iterative_power(2, 0));
	printf("%s -> %d\n", "5, 3", ft_iterative_power(5, 3));
	printf("%s -> %d\n", "18, 5", ft_iterative_power(18, 5));
}*/
