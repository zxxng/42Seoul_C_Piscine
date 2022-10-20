/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:04:15 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/04 11:18:09 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	char arr2[] = "helloworld";
	char arr3[] = "";

	printf("%s : %d\n", arr1, ft_str_is_lowercase(arr1));
	printf("%s : %d\n", arr2, ft_str_is_lowercase(arr2));
	printf("%s : %d\n", arr3, ft_str_is_lowercase(arr3));
}*/
