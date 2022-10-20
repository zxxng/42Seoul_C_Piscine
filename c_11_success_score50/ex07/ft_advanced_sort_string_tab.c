/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:35:44 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/19 13:03:45 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char*, char*))
{
	int		i;
	char	*tmp;

	i = 0;
	while (tab[i + 1])
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
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
int	ft_cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int	main()
{
	char *arr[6];

	arr[0] = "test2";
	arr[1] = "test1";
	arr[2] = "hello";
	arr[3] = "123dd";
	arr[4] = "!free!";
	arr[5] = NULL;

	ft_advanced_sort_string_tab(arr, &ft_cmp);
	for (int i=0; i<6; i++)
		printf("%s\n", arr[i]);
}*/
