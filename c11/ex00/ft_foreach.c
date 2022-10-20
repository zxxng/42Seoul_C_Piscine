/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:43:53 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/19 12:51:19 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
#include <unistd.h>
void	ft_putnbr(int nb)
{
	long long	n;
	char		c;

	n = nb;
	if (n < 10)
		write(1, " ", 1);
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

#include <stdio.h>

int	main()
{
	int arr[5] = {-2147483648, 0, 4569, -9999};
	
	ft_foreach(arr, 4, &ft_putnbr);
}*/
