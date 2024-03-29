/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:31:02 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/19 19:37:42 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*arr;
	int	i;

	arr = malloc(sizeof(int) * length);
	if (!arr)
		return (0);
	i = 0;
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}

/*
int	is_positive(int a)
{
	if (a > 0)
		return (1);
	return (0);
}

#include <stdio.h>
int	main()
{
	int arr[5] = {0, -6, 659, -558, 5};
	int *res;
	int len = 0;
		
	res = ft_map(arr, len, &is_positive);
	for (int i=0; i < len; i++)
		printf("%d\n", res[i]);
}*/
