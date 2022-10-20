/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:31:28 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/13 11:56:41 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(int size, char **strs, char *sep)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++])
			len++;
		i++;
	}
	i = 0;
	while (sep[i])
		i++;
	len = len + i * (size - 1);
	return (len);
}

char	*ft_str_push(int size, char *arr, char **strs, char *sep)
{
	int	idx;
	int	i;
	int	j;

	idx = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			arr[idx++] = strs[i][j++];
		j = 0;
		if (i != size - 1)
		{
			while (sep[j])
				arr[idx++] = sep[j++];
		}
		i++;
	}
	arr[idx] = '\0';
	return (arr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		len;

	len = ft_strlen(size, strs, sep);
	arr = (char *)malloc(sizeof(char) * len + 1);
	if (!arr)
		return (0);
	arr = ft_str_push(size, arr, strs, sep);
	return (arr);
}

/*
#include <stdio.h>
int	main()
{
	char *strs[4];
	char *sep;

	sep = " ~~ ";
	strs[0] = "hello";
	strs[1] = "42";
	strs[2] = "seoul";
	strs[3] = "!!!";
	printf("size = 2\n");
	printf("%s\n\n", ft_strjoin(2, strs, sep));
	printf("size = 4\n");
	printf("%s\n", ft_strjoin(4, strs, sep));
}*/
