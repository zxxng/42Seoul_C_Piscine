/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_board.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:30:58 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/20 17:31:03 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOARD_H               
# define FT_BOARD_H
# include <unistd.h>

typedef struct s_game
{
	int	size;
	int	hint[4][9];
	int	board[9][9];
}				t_game;

void	ft_init(t_game *session);
void	ft_fill(t_game *session);
void	ft_fill2(t_game *session);
void	ft_print(t_game *session);
#endif
