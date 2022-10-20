/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calculator.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:36:02 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/19 16:04:28 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_plus(int num1, int num2)
{
	int	res;

	res = num1 + num2;
	return (res);
}

int	ft_minus(int num1, int num2)
{
	int	res;

	res = num1 - num2;
	return (res);
}

int	ft_div(int num1, int num2)
{
	int	res;

	if (num2 == 0)
		return (-1);
	res = num1 / num2;
	return (res);
}

int	ft_multi(int num1, int num2)
{
	int	res;

	res = num1 * num2;
	return (res);
}

int	ft_mod(int num1, int num2)
{
	int	res;

	if (num2 == 0)
		return (-1);
	res = num1 % num2;
	return (res);
}
