/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:54:50 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/03 13:42:27 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>
int	main()
{
	int num1 = 15;
	int num2 = 2;
	int div;
	int mod;

	ft_div_mod(num1, num2, &div, &mod);
	printf("div : %d,  mod : %d\n", div, mod);
}*/
