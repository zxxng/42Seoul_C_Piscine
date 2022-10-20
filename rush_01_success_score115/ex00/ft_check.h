/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:32:18 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/20 17:32:23 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECK_H
# define FT_CHECK_H
# include "ft_board.h"

int	ft_ok_colup(t_game *session, int col);
int	ft_ok_coldown(t_game *session, int col);
int	ft_ok_rowleft(t_game *session, int row);
int	ft_ok_rowright(t_game *session, int row);
int	ft_check(t_game *session, int row, int col);
#endif
