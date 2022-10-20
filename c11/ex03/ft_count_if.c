/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:33:19 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/19 12:59:47 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (i < length && tab[i])
	{
		if (f(tab[i]) != 0)
			cnt++;
		i++;
	}
	return (cnt);
}

/*
int	ft_str_is_lowercase(char *str)
{
	int	i = 0;

	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		str++;
	}
	return (1);
}

#include <stdio.h>
int	main()
{
	char	*str[10];

	str[0] = "hello";
	str[1] = "hello";
	str[2] = "hello";
	str[3] = "Hello";
	str[4] = "Hello";

	printf("%d\n", ft_count_if(str, 9, &ft_str_is_lowercase));
}*/
