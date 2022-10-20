/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:58:41 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/05 10:50:24 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		tmp = tab[i];
		if (tmp > tab[i + 1])
		{
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}	

/*
#include <stdio.h>
int	main()
{
	int arr[10] = { 8,5,9,7,2,56,20,12,46,1 };
	int size = 10;

   	ft_sort_int_tab(arr, size);
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
}*/
