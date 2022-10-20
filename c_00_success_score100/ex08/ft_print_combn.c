/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 09:57:02 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/02 13:43:12 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recur(char *arr, int n, int idx, int num)
{
	if (n == idx)
	{
		write(1, arr, n);
		if (arr[0] != 10 - n + '0')
			write(1, ", ", 2);
		return ;
	}
	while (num <= '9')
	{
		arr[idx] = num;
		recur(arr, n, idx + 1, num + 1);
		num++;
	}
}

void	ft_print_combn(int n)
{
	char	arr[9];

	recur(arr, n, 0, '0');
}
