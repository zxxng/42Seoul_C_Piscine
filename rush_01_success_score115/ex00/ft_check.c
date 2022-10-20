/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:32:04 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/20 17:32:11 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_check.h"

int	ft_ok_colup(t_game *session, int col) // 위쪽 검사
{
	int	row;
	int	cnt;
	int	max;

	row = 0;
	cnt = 1;
	max = session->board[row][col]; // 
	while (++row < session->size) // row가 size보다 작을때까지
	{
		if (max < session->board[row][col])
		{
			max = session->board[row][col];
			++cnt;
		}
	}
	if (session->hint[0][col] != cnt)
		return (0);
	return (1);
}

int	ft_ok_coldown(t_game *session, int col) // 아래쪽 검사
{
	int	row;
	int	cnt;
	int	max;

	row = session->size - 1;
	cnt = 1;
	max = session->board[row][col];
	while (--row >= 0)
	{
		if (max < session->board[row][col])
		{
			max = session->board[row][col];
			++cnt;
		}
	}
	if (session->hint[1][col] != cnt)
		return (0);
	return (1);
}

int	ft_ok_rowleft(t_game *session, int row) // 왼쪽 검사
{
	int	col;
	int	cnt;
	int	max;

	col = 0;
	cnt = 1;
	max = session->board[row][col];
	while (++col < session->size)
	{
		if (max < session->board[row][col])
		{
			max = session->board[row][col];
			++cnt;
		}
	}
	if (session->hint[2][row] != cnt)
		return (0);
	return (1);
}

int	ft_ok_rowright(t_game *session, int row) // 오른쪽 검사
{
	int	col;
	int	cnt;
	int	max;

	col = session->size - 1;
	cnt = 1;
	max = session->board[row][col];
	while (--col >= 0)
	{
		if (max < session->board[row][col])
		{
			max = session->board[row][col];
			++cnt;
		}
	}
	if (session->hint[3][row] != cnt)
		return (0);
	return (1);
}

int	ft_check(t_game *session, int row, int col)
{
	int	i;

	if (session == 0 || session->size <= row || session->size <= col)
		return (0);
	i = -1;
	while (++i < session->size) //위쪽, 왼쪽 겹치는 값 검사
	{
		if ((i != row && session->board[i][col] == session->board[row][col])
			|| (i != col && session->board[row][i] == session->board[row][col]))
			return (0);
	}
	if (row == session->size - 1)
	{
		if (!ft_ok_colup(session, col) || !ft_ok_coldown(session, col))
			return (0);
	}
	if (col == session->size - 1)
	{
		if (!ft_ok_rowleft(session, row) || !ft_ok_rowright(session, row))
			return (0);
	}
	return (1);
}
