/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:31:40 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/20 17:31:43 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_board.h"
#include "ft_check.h"

int	ft_count_argu(char *str) // 입력값(av[1]) 유효한지 검사
{
	int	i;
	int	cnt;

	i = -1; 
	cnt = 0;
	while (str && str[++i]) // 줄을 줄이기 위해 ++i사용 하므로 i=-1
	{
		if (str[i] == ' ')
			continue ;
		if (!('1' <= str[i] && str[i] <= '9')) // 9까지만 받음
			return (-1); // 에러처리
		if (i > 0 && str[i - 1] != ' ') // 숫자가 연속으로 들어온게 없는지 검사 (숫자 사이 공백 여러개는 가능)
			return (-1);
		++cnt;
	}
	return (cnt);
}

int	ft_parse(t_game *session, char *str) // 보드판 배열 확인
{
	int	i;
	int	j;
	int	cnt;

	if (session == 0 || str == 0)
		return (-1);
	cnt = ft_count_argu(str);
	if (cnt < 0 || cnt % 4 != 0) // cnt <= 0 4(상하좌우)
		return (-1);
	i = -1;
	j = 0;
	session->size = cnt / 4; // size 1~9
	while (str && str[++i])
	{
		if (str[i] == ' ')
			continue ;
		if (str[i] > '0' + session->size) // 힌트들은 1~size까지
			return (-1);
		session->hint[j / session->size][j % session->size] = str[i] - '0'; // " 1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4"
		// 1 2 3 4    (0, 0) ~ (0, 3)
		// 1 2 3 4    (1, 0) ~ (1, 3)
		// 1 2 3 4
		// 1 2 3 4
		++j;
	}
	return (0);
}
// #include <stdlib.h>
int	ft_solve(t_game *session, int row, int col) // 백트랙킹 구현부분
{
//   system("clear");
//   ft_print(session);
	int	i;

	if (row == 0 && col == 0) // row, col 이 0,0 일때 
		ft_fill(session, 0, 0); // 초기값 설정
	if (col == session->size) // 가로 다찼을때
	{
		if (row == session->size - 1) // 로도 다차면
			return (1); // 종료 (정답 찾음)
		++row; // 세로 증가 (다음줄 이동)
		col = 0; // 가로 초기화
	}
	if (session->board[row][col]) // 해당칸이 차있으면 다음칸 탐색?? / ft_fill 설정된곳 건너뛰기
		return (ft_check(session, row, col) && ft_solve(session, row, col + 1)); // ft_solve 재귀 반복
	i = 0;
	while (++i <= session->size) // size보다 작거나 같을때까지
	{
		session->board[row][col] = i; 
		if (ft_check(session, row, col) && ft_solve(session, row, col + 1))
			return (1);
		session->board[row][col] = 0; // 아 i를 넣어놨는데 체크값이 안맞으니 0으로 비워주기
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_game	session;
	
	ft_init(&session);
	if (argc != 2 //ac가 2가 아니고
		|| (ft_parse(&session, argv[1]) < 0) // 보드판배열이 0보다 작거나 (리턴 -1)
		|| (ft_solve(&session, 0, 0) == 0)) // 솔브가 리턴 0이면
	{ 
		write(2, "Error\n", 6);
		return (-1);
	}
	ft_print(&session); // ft_board 파일 확인
	return (0);
}
