/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migo <migo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:05:32 by migo              #+#    #+#             */
/*   Updated: 2022/10/02 17:08:13 by migo             ###   ########.fr       */
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
			if (row == 1 && (col == 1 || col == y))
				ft_putchar('A');
			else if (row == x && (col == 1 || col == y))
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
