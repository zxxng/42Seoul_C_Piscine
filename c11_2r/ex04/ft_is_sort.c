/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:39:10 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/19 18:57:49 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	if (length <= 2)
		return (1);
	while (tab[i] == tab[i + 1])
		i++;
	if (tab[i] > tab[i + 1])
	{
		while (i + 1 < length)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			i++;
		}
		return (1);
	}
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

/*
int	ft_cmp(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a == b)
		return (0);
	return (1);
}

#include <stdio.h>
int main()
{
	int arr1[] = {1, 2, 2, 2, 1, 3, 4, 5, 6, 6, 6, 6, 7};
	int	arr2[] = {151185};
	int arr3[] = {5, 4, 3, 2, 1};
	int	arr4[] = {1, 1, 2, 6, 5};
	int	arr5[] = {5, 7, 4};

	printf("%d  ", ft_is_sort(arr1, 4, &ft_cmp));
	printf("%d  ", ft_is_sort(arr2, 2, &ft_cmp));
	printf("%d  ", ft_is_sort(arr3, 5, &ft_cmp));
	printf("%d  ", ft_is_sort(arr4, 5, &ft_cmp));
	printf("%d  ", ft_is_sort(arr5, 3, &ft_cmp));
}*/
