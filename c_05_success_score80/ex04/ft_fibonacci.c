/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:00:01 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/11 10:28:07 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index <= 2)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdio.h>
int	main()
{
	printf("index=0 -> %d\n",ft_fibonacci(0));
	printf("index=1 -> %d\n",ft_fibonacci(1));
	printf("index=2 -> %d\n",ft_fibonacci(2));
	printf("index=5 -> %d\n",ft_fibonacci(5));
	printf("index=8 -> %d\n",ft_fibonacci(8));
}*/
