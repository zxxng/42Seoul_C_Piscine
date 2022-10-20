/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square_dp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jikang2 <jikang2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:34:04 by jikang2           #+#    #+#             */
/*   Updated: 2022/10/20 11:56:39 by jikang2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 6 x 6 board
// .ox
// ./test "...o.." "o....." ".o...." "......" "o....o" "......"

#include <stdlib.h>
#include <unistd.h>

int	check_around(int dp[6][6], int x, int y)
{
	int	arr[3];
	int	min;
	int	i;

	i = 0;
	arr[0] = dp[x][y - 1];
	arr[1] = dp[x - 1][y - 1];
	arr[2] = dp[x - 1][y];
	min = 7;
	while (i < 3)
	{
		if (min > arr[i])
			min = arr[i];
		i++;
	}
	return (min);
}

/*
	roc[0] = -1;
	roc[1] = -1;
 */
int	*find_box_roc(int board[6][6], int dp[6][6])
{
	int	*roc;
	int	max;
	int	i;
	int	j;

	roc = (int *)malloc(sizeof(int) * 2);
	max = -1;
	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			if (board[i][j] == 0)
				dp[i][j] = 0;
			else if (i == 0 || j == 0)
				dp[i][j] = 1;
			else
				dp[i][j] = 1 + check_around(dp, i, j);
			if (max < dp[i][j])
			{
				max = dp[i][j];
				roc[0] = i;
				roc[1] = j;
			}
			j++;
		}
		i++;
	}
	return (roc);
}

void	into_av_board(char **av, int board[6][6])
{
	int	i;
	int	j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			if (av[i + 1][j] == 'o')
				board[i][j] = 0;
			else
				board[i][j] = 1;
			j++;
		}
		i++;
	}
}

void	print_dp(int dp[6][6])
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			c = '0' + dp[i][j];
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
/*
void	print_board(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i <= 6)
	{
		j = 0;
		while (j < 6)
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
*/

int	main(int ac, char **av)
{
	int		dp[6][6];
	int		board[6][6];
	int		*roc;
	char	c;

	into_av_board(av, board);
	roc = find_box_roc(board, dp);
//	print_board(av);
	write(1, "board\n", 6);
	print_dp(dp);
	c = '0' + roc[0];
	write(1, &c, 1);
	write(1, ", ", 2);
	c = '0' + roc[1];
	write(1, &c, 1);
	return (0 * ac);
}
/*
	for(int i = 0; i < 6; i++)
		for(int j = 0; j < 6; j++)
			dp[i][j] = -1;
	for(int i = 0; i < 6; i++)
		for(int j = 0; j < 6; j++)
			board[i][j] = -1;
*/
