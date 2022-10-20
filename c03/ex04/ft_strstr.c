/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:18:30 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/06 11:20:16 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			if (to_find[j])
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (&str[i]);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char arr1[] = "hello world!!";
	char arr2[] = "wo";
	
	printf("%s -> strstr\n", strstr(arr1, arr2));
	printf("%s -> ft_strstr\n", ft_strstr(arr1, arr2));
}*/
