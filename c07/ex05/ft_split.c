/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:39:57 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/13 15:31:14 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_flag(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_split_size(char *str, char *charset)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		while (ft_flag(str[i], charset) == 1)
			i++;
		if (!str[i])
			break ;
		while (ft_flag(str[i], charset) == 0 && str[i])
			i++;
		cnt++;
	}
	return (cnt);
}

char	*ft_strdup(char *str, char *charset, int len)
{
	int		i;
	char	*arr;

	arr = (char *)malloc(sizeof(char) * len + 1);
	if (!arr)
		return (0);
	i = 0;
	while (ft_flag(str[i], charset) == 0 && str[i])
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		tmp;
	int		arr;
	char	**split;

	split = (char **)malloc(sizeof(char *) * ft_split_size(str, charset) + 1);
	i = 0;
	arr = 0;
	while (str[i])
	{
		while (ft_flag(str[i], charset) == 1)
			i++;
		if (!str[i])
			break ;
		tmp = i;
		while (ft_flag(str[i], charset) == 0 && str[i])
			i++;
		split[arr++] = ft_strdup(&str[tmp], charset, i - tmp);
	}
	split[arr] = 0;
	return (split);
}

/*
#include <stdio.h>
int	main()
{
	int	n = 0;
	char *str = " I:/ want one,. ;try";
	char *charset = " :/,.;";
	char **out = ft_split(str, charset);

	while (out[n])
		printf("%s\n", out[n++]);
}*/
