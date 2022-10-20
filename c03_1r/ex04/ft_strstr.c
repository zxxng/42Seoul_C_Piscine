/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:18:30 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/07 20:23:58 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!*to_find)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i++] == to_find[j++])
		{	
			if (!to_find[j])
				return (&str[i - j]);
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char arr1[] = "hello world!!";
	char arr2[] = "w";
	char arr3[] = "lll";
	char arr4[] = "";
	
	printf("문자열이 일치할 때\n");
	printf("%s -> strstr\n", strstr(arr1, arr2));
	printf("%s -> ft_strstr\n\n", ft_strstr(arr1, arr2));
	printf("문자열이 일치하지않을 때\n");
	printf("%s -> strstr\n", strstr(arr1, arr3));
	printf("%s -> ft_strstr\n\n", ft_strstr(arr1, arr3));
	printf("to_find = '' 일때\n");
	printf("%s -> strstr\n", strstr(arr1, arr4));
	printf("%s -> ft_strstr\n\n", ft_strstr(arr1, arr4));
}*/
