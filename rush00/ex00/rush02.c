/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:06:41 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/01 13:39:11 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	if (x < 1 && y < 1)
		return ;
	col = 1;
	while (col <= y)
	{
		row = 1;
		while (row <= x)
		{
			if (col == 1 && (row == 1 || row == x))
				ft_putchar('A');
			else if (col == y && (row == 1 || row == x))
				ft_putchar('C');
			else if (col == 1 || col == y || row == 1 || row == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}
