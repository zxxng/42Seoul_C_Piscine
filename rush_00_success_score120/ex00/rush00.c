/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 10:37:04 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/20 17:20:24 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x < 1 || y < 1)
		return ;
	col = 1;
	while (col <= y)
	{
		row = 1;
		while (row <= x)
		{
			if ((col == 1 || col == y) && (row == 1 || row == x))
				ft_putchar('o');
			else if ((col == 1 || col == y) && (row >= 1 || row <= x))
				ft_putchar('-');
			else if ((row == 1 || row == x) && (col >= 1 || col <= y))
				ft_putchar('|');
			else
				ft_putchar(' ');
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}
