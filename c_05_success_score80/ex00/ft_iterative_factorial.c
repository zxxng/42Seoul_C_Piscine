/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:47:19 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/10 22:20:57 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	if (nb < 0)
		return (0);
	num = 1;
	while (nb > 0)
	{
		num = num * nb;
		nb--;
	}
	return (num);
}

/*
#include <stdio.h>
int	main()
{
	printf("%d -> %d\n", -3, ft_iterative_factorial(-3));
	printf("%d -> %d\n", 0, ft_iterative_factorial(0));
	printf("%d -> %d\n", 3, ft_iterative_factorial(3));
	printf("%d -> %d\n", 5, ft_iterative_factorial(5));
}*/
