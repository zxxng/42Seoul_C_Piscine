/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 15:21:41 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/19 19:36:42 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
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
	char *str[4];
	
	str[0] = "hello";
	str[1] = "hello";
	str[2] = "hello";
	str[3] = "hello";

	printf("%d\n", ft_any(str, &ft_str_is_lowercase));
}*/
