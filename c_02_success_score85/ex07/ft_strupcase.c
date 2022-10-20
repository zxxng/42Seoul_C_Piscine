/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:40:17 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/04 11:23:12 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else
			i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main()
{
	char arr[] = "hello world!!";

	printf("before : %s\n", arr);
	printf("after : %s\n", ft_strupcase(arr));
}*/
