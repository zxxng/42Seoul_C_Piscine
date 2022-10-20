/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:09:44 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/04 11:19:40 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
	char arr1[] = "Hello World";
	char arr2[] = "HELLOWORLD";
	char arr3[] = "";

	printf("%s : %d\n", arr1, ft_str_is_uppercase(arr1));
	printf("%s : %d\n", arr2, ft_str_is_uppercase(arr2));
	printf("%s : %d\n", arr3, ft_str_is_uppercase(arr3));
}*/
