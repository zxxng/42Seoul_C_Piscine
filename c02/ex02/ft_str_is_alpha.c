/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:51:53 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/04 11:15:06 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a')
			|| str[i] > 'z')
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
	char arr1[] = "Hellowolrd";
	char arr2[] = "HELLO WOLRD!!";
	char arr3[] = "";

	printf("%s : %d\n", arr1, ft_str_is_alpha(arr1));
	printf("%s : %d\n", arr2, ft_str_is_alpha(arr2));
	printf("%s : %d\n", arr3, ft_str_is_alpha(arr3));
}*/
