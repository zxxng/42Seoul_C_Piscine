/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_board.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:31:50 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/20 17:31:56 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_board.h"

void	ft_init(t_game *session) // 빈 배열엔 쓰레기값이 들어가 있을 수 있으니 초기화해주기
{
	int	row;
	int	col;

	session->size = 0;
	row = -1;
	while (++row < 9)
	{
		col = -1;
		while (++col < 9)
			session->hint[row][col] = 0; // hint 초기화 (모든 값 0 설정)
	}
	row = -1;
	while (++row < 9)
	{
		col = -1;
		while (++col < 9)
			session->board[row][col] = 0; // board 초기화 (모든 값 0 설정)
	}
}

void	ft_fill2(t_game *session)  // 초기값 입력 : 1이면 최대값(size)
{
	int	i;

	i = -1;
	while (++i < session->size)
	{
		if (session->hint[0][i] == 1) // 상 = 1일때 
			session->board[0][i] = session->size; // size(최대값) 입력
		if (session->hint[1][i] == 1) // 하 = 1일때
			session->board[session->size - 1][i] = session->size;
		if (session->hint[2][i] == 1) // 좌 = 1일때
			session->board[i][0] = session->size;
		if (session->hint[3][i] == 1) // 우 = 1 일때
			session->board[i][session->size - 1] = session->size;
	}
}

void	ft_fill(t_game *session) // ex) 최대값(size)이면 1 2 3 4 ...size
{
	int	i;
	int	j;

	i = -1;
	while (++i < session->size)
	{
		j = -1;
		while (++j < session->size) 
		{
			if (session->hint[0][i] == session->size) // 상 = size 일때
				session->board[j][i] = j + 1; // j(세로)칸 size까지 순서대로 입력
			if (session->hint[1][i] == session->size) // 하 = size 일때
				session->board[j][i] = session->size - j; // j(세로)칸 아래부터 위로 size까지 순서대로 입력
			if (session->hint[2][i] == session->size) // 좌 = 1 일때
				session->board[i][j] = j + 1; // i(가로)칸 왼쪽에서 오른쪽으로 입력
			if (session->hint[3][i] == session->size) // 우 = 1 일때
				session->board[i][j] = session->size - j; // i(가로)칸 오른쪽에서 왼쪽으로
		}
	}
	ft_fill2(session);
}

void	ft_print(t_game *session) // 출력하는 함수
{
	int	row;
	int	col;

	row = -1;
	while (++row < session->size) 
	{
		col = -1;
		while (++col < session->size)
		{
			write(1, &"0123456789"[session->board[row][col] % 10], 1); 
			write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}
