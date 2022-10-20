/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:19:43 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/04 11:10:56 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
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
	
	printf("%s -> strcpy\n", strcpy(arr1, arr3));
	printf("%s -> ft_strcpy", ft_strcpy(arr2, arr3));
}*/
