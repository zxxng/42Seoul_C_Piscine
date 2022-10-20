/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:36:54 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/04 11:13:22 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char arr1[] = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char arr2[] = "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0";
	char arr3[] = "Hello World!";
	unsigned int	num1 = 6;
	unsigned int	num2 = 16;

	printf("%s -> strncpy\n", strncpy(arr1, arr3, num1));
	printf("%s -> ft_strncpy\n", ft_strncpy(arr2, arr3, num1));
	printf("%s -> strncpy\n", strncpy(arr1, arr3, num2));
	printf("%s -> ft_strncpy", ft_strncpy(arr2, arr3, num2));
}*/
