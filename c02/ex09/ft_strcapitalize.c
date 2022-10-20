/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:47:20 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/04 11:25:48 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	flag;
	int	i;

	flag = 1;
	i = 0;
	while (str[i])
	{
		if (flag == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		if (flag == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main()
{
	char arr[] ="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("before : %s\n", arr);
	printf("after : %s\n", ft_strcapitalize(arr));
}*/
