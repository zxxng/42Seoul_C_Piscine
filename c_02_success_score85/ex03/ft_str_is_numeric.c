/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:05:59 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/04 11:16:42 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		else
			i++;
	}
	return (1);
}

/*
#include <stdio.h>
int	main()
{
	char arr1[] = "00245";
	char arr2[] = "hello world!";
	char arr3[] = "";

	printf("%s : %d\n", arr1, ft_str_is_numeric(arr1));
	printf("%s : %d\n", arr2, ft_str_is_numeric(arr2));
	printf("%s : %d\n", arr3, ft_str_is_numeric(arr3));
}*/
