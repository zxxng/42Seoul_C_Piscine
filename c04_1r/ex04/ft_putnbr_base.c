/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:17:26 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/09 14:11:59 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

void	ft_putnbr_base(int nbr, char *base)
{
	int			len;
	long long	nb;

	len = ft_base_len(base);
	nb = nbr;
	if (len < 2 || ft_base_check(base) == -1)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= len)
		ft_putnbr_base(nb / len, base);
	write(1, &base[nb % len], 1);
}

/*
int main()
{
	char arr1[] = "0123456789";
	char arr2[] = "01";
	char arr3[] = "0123456789ABCDEF";

	ft_putnbr_base(-226532, arr1);
	write(1, "\n", 1);
	ft_putnbr_base(-226532, arr2);
	write(1, "\n", 1);
	ft_putnbr_base(-226532, arr3);
	write(1, "\n", 1);
}*/
