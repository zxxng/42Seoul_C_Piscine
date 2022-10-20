/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 20:36:39 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/13 16:27:20 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_base_len(char *base);
int	ft_base_check(char *base);
int	ft_str_check(char c, char *base);
int	ft_atoi_base(char *str, char *base);

char	*ft_putnbr_base(int nbr, char *base_to, char *res, int idx)
{
	int			len;
	long long	nb;

	len = ft_base_len(base_to);
	nb = nbr;
	if (len < 2 || ft_base_check(base_to) == -1)
		return (0);
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
	int			n;
	int			idx;
	char		*res;

	nb = ft_atoi_base(nbr, base_from);
	n = nb;
	idx = 0;
	if (nb < 0)
		idx++;
	while (n != 0)
	{
		n = n / ft_base_len(base_to);
		idx++;
	}
	res = (char *)malloc(sizeof(char) * idx + 1);
	if (!res)
		return (0);
	res = ft_putnbr_base(nb, base_to, res, idx);
	if (nb == 0 || res == 0)
		return (0);
	res[idx + 1] = '\0';
	return (res);
}

/*
#include <stdio.h>
int	main()
{	
	printf("\n--ex04--\n\n");
	
	char strnum[] = "    ---+--2147483648"; 
	char strnum2[] = "   -+---++--59862";
	char strnum3[] = "     +++-+-+++66585";
	char base1[] = "0123456789";
	char base2[] = "0123456789abcdef";
	char base3[] = "++-669";

	printf("%s\n", ft_convert_base(strnum, base1, base2));
	printf("%s\n", ft_convert_base(strnum2, base1, base2));
	printf("%s\n", ft_convert_base(strnum3, base1, base3));

}*/
