/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:05:57 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/13 16:25:40 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	len = max - min;
	arr = (int *)malloc(sizeof(int) * len);
	if (!arr)
		return (-1);
	i = 0;
	while (min != max)
		arr[i++] = min++;
	*range = arr;
	return (len);
}

/*
#include <stdio.h>
int	main()
{
	int	*val1;
	int *val2;

	ft_ultimate_range(&val1, -3, 7);
	for (int i=0; i<(7-(-3)); i++)
		printf("%d ", val1[i]);
	printf("\nreturn : %d\n\n", ft_ultimate_range(&val1, -3, 7));
	
	if (!ft_ultimate_range(&val2, 4, 2))
		printf("NULL");
	printf("\nreturn : %d\n", ft_ultimate_range(&val2, 4, 2));
}*/
