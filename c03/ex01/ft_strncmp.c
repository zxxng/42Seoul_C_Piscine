/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:23:41 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/06 10:59:35 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]) && i < n)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char arr1[] = "hello world!";
	char arr2[] = "hello jaeyyoo!";
	unsigned int num = 7;

	printf("%d -> strncmp\n", strncmp(arr1, arr2, num));
	printf("%d -> ft_strncmp\n", ft_strncmp(arr1, arr2, num));
}*/
