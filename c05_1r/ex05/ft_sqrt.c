/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:00:39 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/11 10:30:33 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	while (num * num <= nb)
	{
		if (num * num == nb)
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
	printf("nb=16 -> %d\n", ft_sqrt(16));
}*/
