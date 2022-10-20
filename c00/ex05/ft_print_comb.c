/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:42:58 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/01 23:23:15 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(char i, char j, char k )
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	while (first <= '7')
	{
		second = '1';
		second = first + 1;
		while (second <= '8')
		{
			third = '2';
			third = second + 1;
			while (third <= '9')
			{
				ft_putchars(first, second, third);
				if (first != '7' || second != '8' || third != '9')
					write(1, ", ", 2);
				third++;
			}
			second++;
		}
		first++;
	}
}


int	main(void)
{
	ft_print_comb();
	return 0;
}
