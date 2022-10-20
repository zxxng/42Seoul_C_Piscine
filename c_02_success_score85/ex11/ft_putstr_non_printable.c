/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:24:32 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/04 11:29:45 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*arr;

	i = 0;
	arr = "0123456789abcdef";
	while (str[i])
	{	
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			write(1, &arr[str[i] / 16], 1);
			write(1, &arr[str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

/*
#include <stdio.h>
int	main()
{
	char arr[] ="Coucou\ntu vas bien ?";

	printf("%s\n", arr);
	ft_putstr_non_printable(arr);
}*/
