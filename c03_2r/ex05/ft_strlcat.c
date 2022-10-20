/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 13:23:46 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/08 16:38:08 by jaeyyoo          ###   ########.fr       */
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
	if (d_len > size || size == 0)
		return (s_len + size);
	i = d_len;
	j = 0;
	while (i < size - 1 || src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (d_len + s_len);
}


#include <stdio.h>
#include <string.h>
int	main()
{
	char arr1[10] = "hello";
	char arr2[10] = "hello";
	char arr3[] = " world!!";
	unsigned int	num = 11;

	printf("%lu : %s -> strlcat\n", strlcat(arr1, arr3, num), arr1);
	printf("%u : %s -> ft_strlcat", ft_strlcat(arr2, arr3, num), arr2);

}
