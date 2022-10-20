/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:59:23 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/11 10:24:42 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>
int	main()
{
	printf("%s -> %d\n", "2, -2", ft_recursive_power(2, -2));
	printf("%s -> %d\n", "2, 0", ft_recursive_power(2, 0));
	printf("%s -> %d\n", "5, 3", ft_recursive_power(5, 3));
	printf("%s -> %d\n", "18, 15", ft_recursive_power(18, 5));
}*/
