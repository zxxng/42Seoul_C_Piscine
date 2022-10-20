/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:44:50 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/13 10:34:05 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*arr;

	len = ft_strlen(src);
	arr = (char *)malloc(sizeof(char) * len + 1);
	if (!arr)
		return (0);
	i = 0;
	while (src[i])
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char arr1[] = "hello world!!";
	char arr2[] = "strdup vs ft_strdup print test";
	
	printf("%s -> strdup\n%s -> ft_strdup\n\n", strdup(arr1), ft_strdup(arr1));
	printf("%s -> strdup\n%s -> ft_strdup\n\n", strdup(arr2), ft_strdup(arr2));
}*/
