/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:09:45 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/04 11:27:25 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	idx;
	unsigned int	len;

	idx = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (idx < len && idx + 1 < size)
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (len);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char arr1[20];
	char arr2[20];
	char arr3[] = "hello world!!";
	unsigned int num = 6;

	printf("%u : %s -> ft_strlcpy\n", ft_strlcpy(arr1, arr3, num), arr1);
	printf("%lu : %s -> strlcpy\n", strlcpy(arr2, arr3, num), arr1);
}*/
