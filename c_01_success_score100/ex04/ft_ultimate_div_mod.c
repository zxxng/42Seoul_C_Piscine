/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 20:34:50 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/03 18:45:20 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

/*
#include <stdio.h>
int	main()
{
	int num1 = 15;
	int num2 = 2;

	ft_ultimate_div_mod(&num1, &num2);
	printf("a : %d, b : %d", num1, num2);
}*/
