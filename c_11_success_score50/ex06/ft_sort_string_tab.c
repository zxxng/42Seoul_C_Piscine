/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:49:37 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/20 10:36:53 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	char	*tmp;

	i = 0;
	while (tab[i + 1])
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		else
			i++;
	}
}

/*
#include <stdio.h>
int	main()
{
	char *arr[6];

	arr[0] = "test2";
	arr[1] = "test3";
	arr[2] = "test1";
	arr[3] = "1234";
	arr[4] = "!free!";
	arr[5] = NULL;

	ft_sort_string_tab(arr);
	for (int i=0; i<6; i++)
		printf("%s ", arr[i]);
}*/
