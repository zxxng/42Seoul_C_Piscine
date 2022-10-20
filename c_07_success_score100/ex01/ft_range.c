/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 10:54:46 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/13 16:33:47 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (!arr)
		return (0);
	i = 0;
	while (min != max)
		arr[i++] = min++;
	return (arr);
}

/*
#include <stdio.h>
int	main()
{
	int *val1;
	int	*val2;
	int *val3;
	
	val1 = ft_range(2, 7);
	for (int i=0; i<5; i++)
		printf("%d ", val1[i]);
	printf("\n");
	
	val2 = ft_range(-3, 2);
	for (int i=0; i<5; i++)
		printf("%d ", val2[i]);
	printf("\n");
	
	val3 = ft_range(7, 2);
	if (!val3)
		printf("NULL\n");
}*/
