/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:06:09 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/06 11:14:45 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char arr1[30] = "hello";
	char arr2[30] = "hello";
	char arr3[] = " world";

	printf("%s -> strcat\n", strcat(arr1, arr3));
	printf("%s -> ft_strcat\n", ft_strcat(arr2, arr3));
}*/
