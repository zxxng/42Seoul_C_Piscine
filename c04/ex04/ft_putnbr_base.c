/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:17:26 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/08 17:04:24 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_base_check(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = ft_base_check(base);
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (nbr >= len)
		ft_putnbr_base(nbr / len, base);
	write(1, &base[nbr % len], 1);
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
