/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:11:50 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/06 11:17:52 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < nb)
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
	char arr3[] = " world!!";
	unsigned int num = 6;

	printf("%s -> strncat\n", strncat(arr1, arr3, num));
	printf("%s -> ft_strncat\n", ft_strncat(arr2, arr3, num));
}*/
