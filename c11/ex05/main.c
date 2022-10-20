/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:23:29 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/19 16:34:26 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	answer;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	answer = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		answer = answer * 10 + (str[i] - '0');
		i++;
	}
	return (answer * sign);
}

void	ft_putnbr(int nb)
{
	long long	n;
	char		c;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	do_op(char *a, char *b, char c)
{
	int	(*calc[5])(int, int);
	int	res;

	calc[0] = ft_plus;
	calc[1] = ft_minus;
	calc[2] = ft_div;
	calc[3] = ft_multi;
	calc[4] = ft_mod;
	if (c == '+')
		res = (*calc[0])(ft_atoi(a), ft_atoi(b));
	else if (c == '-')
		res = (*calc[1])(ft_atoi(a), ft_atoi(b));
	else if (c == '-')
		res = (*calc[3])(ft_atoi(a), ft_atoi(b));
	else if (c == '-')
		res = (*calc[4])(ft_atoi(a), ft_atoi(b));
	else if (c == '-')
		res = (*calc[5])(ft_atoi(a), ft_atoi(b));
	else
		return (0);
	return (res);
}

int	main(int ac, char *av[])
{
	if (ac != 4)
		return (-1);
	if (av[2][0] == '/' && ft_atoi(av[3]) == 0)
		write(1, "Stop : division by zero", 24);
	else if (av[2][0] == '%' && ft_atoi(av[3]) == 0)
		write(1, "Stop : modulo by zero", 22);
	else
		ft_putnbr(do_op(av[1], av[3], av[2][0]));
	write(1, "\n", 1);
	return (0);
}
