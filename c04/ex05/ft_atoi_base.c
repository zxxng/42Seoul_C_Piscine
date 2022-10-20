/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:18:29 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/08 17:05:41 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_base_check(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == ' ')
		return (1);
	return (0);
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

	len = ft_base_check(base);
	i = 0;
	while (ft_isspace(str[i]))
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
