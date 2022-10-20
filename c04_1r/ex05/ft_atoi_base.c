/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:18:29 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/09 14:13:20 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (-1);
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (-1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_str_check(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	i;
	int	sign;
	int	answer;

	len = ft_base_len(base);
	i = 0;
	if (len < 2 || ft_base_check(base) == -1)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	sign = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	answer = 0;
	while (ft_str_check(str[i], base) || str[i] == base[0])
	{
		answer = answer * len + (ft_str_check(str[i], base));
		i++;
	}
	return (answer * sign);
}

/*
#include <stdio.h>
int main()
{
	char str1[] = "100";
	char str2[] = "100";
	char str3[] = "100";
	char base1[] = "0123456789";
	char base2[] = "0123456789abcdef";
	char base3[] = "01";

	printf("str : %s, base : %s  -> %d\n", str1, base1, ft_atoi_base(str1,base1));
	printf("str : %s, base : %s -> %d\n", str2, base2, ft_atoi_base(str2,base2));
	printf("str : %s, base : %s -> %d\n", str3, base3, ft_atoi_base(str3,base3));
}*/
