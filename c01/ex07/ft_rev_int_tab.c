/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:33:56 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/03 14:03:20 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}

/*
#include <stdio.h>
int	main()
{
	int arr[7] = { 1,2,3,4,5,6,7 };
	
	ft_rev_int_tab(arr, 7);

	int i = 0;
	while (arr[i])
	{
		printf("%d ", arr[i]);
		i++;
	}
}*/
