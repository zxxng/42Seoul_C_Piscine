/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:55:05 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/10 22:22:42 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>
int	main()
{
	printf("%d -> %d\n", -2, ft_recursive_factorial(-2));
	printf("%d -> %d\n", 0, ft_recursive_factorial(0));
	printf("%d -> %d\n", 3, ft_recursive_factorial(3));
	printf("%d -> %d\n", 5, ft_recursive_factorial(5));
}*/
