/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:15:04 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/08 14:47:03 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char arr1[] = "hello world";
	char arr2[] = "hello";

	printf("%d -> strcmp\n", strcmp(arr1, arr2));
	printf("%d -> ft_strcmp", ft_strcmp(arr1, arr2));
}*/
