/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:23:46 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/07 20:23:35 by jaeyyoo          ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d_len;
	unsigned int	s_len;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	i = 0;
	while (dest[i])
		i++;
	if (i > size || size == 0)
		return (s_len + size);
	j = 0;
	while (i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (d_len + s_len);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char arr1[30] = "hello";
	char arr2[30] = "hello";
	char arr3[] = " world!!";
	unsigned int	num = 16;

	printf("%lu : %s -> strlcat\n", strlcat(arr1, arr3, num), arr1);
	printf("%u : %s -> ft_strlcat", ft_strlcat(arr2, arr3, num), arr2);

}*/
