/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 19:14:18 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/04 11:21:27 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
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
	char arr1[] = "hello world!";
	char arr2[] = "	";
	char arr3[] = "";

	printf("%s : %d\n", arr1, ft_str_is_printable(arr1));
	printf("%s : %d\n", arr2, ft_str_is_printable(arr2));
	printf("%s : %d\n", arr3, ft_str_is_printable(arr3));
}*/
