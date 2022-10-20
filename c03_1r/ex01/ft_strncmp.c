/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:23:41 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/07 20:30:51 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char arr1[] = "0123456789";
	char arr2[] = "012549";
	unsigned int num1 = 0;
	unsigned int num2 = 1;
	unsigned int num3 = 6;

	printf("%d -> strncmp\n", strncmp(arr1, arr2, num1));
	printf("%d -> ft_strncmp\n", ft_strncmp(arr1, arr2, num1));
	printf("%d -> strncmp\n", strncmp(arr1, arr2, num2));
	printf("%d -> ft_strncmp\n", ft_strncmp(arr1, arr2, num2));
	printf("%d -> strncmp\n", strncmp(arr1, arr2, num3));
	printf("%d -> ft_strncmp\n", ft_strncmp(arr1, arr2, num3));
}*/
