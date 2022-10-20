/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:36:39 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/16 13:48:49 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_base_len(char *base);
int	ft_base_check(char *base);
int	ft_str_check(char c, char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_arr_num(int nb, char *base_to)
{
	int	num;

	num = 0;
	if (nb < 0)
	{
		nb = -nb;
		num++;
	}
	while (nb != 0)
	{
		nb = nb / ft_base_len(base_to);
		num++;
	}
	return (num);
}

char	*ft_putnbr_base(int nbr, char *base_to, char *res, int idx)
{
	int			len;
	long long	nb;

	len = ft_base_len(base_to);
	nb = nbr;
	res[idx] = '\0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	while (nb != 0)
	{
		res[idx - 1] = base_to[nb % len];
		nb = nb / len;
		idx--;
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{	
	int			nb;
	int			idx;
	char		*res;

	if (ft_base_check(base_to) == -1 || ft_base_check(base_from) == -1)
		return (0);
	nb = ft_atoi_base(nbr, base_from);
	idx = ft_arr_num(nb, base_to);
	res = (char *)malloc(sizeof(char) * idx + 1);
	if (!res)
		return (0);
	res = ft_putnbr_base(nb, base_to, res, idx);
	if (nb == 0)
	{
		res = (char *)malloc(sizeof(char) * 2);
		res[0] = base_to[0];
		res[1] = '\0';
		return (res);
	}
	return (res);
}
