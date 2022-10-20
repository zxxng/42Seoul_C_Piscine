/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeyyoo <jaeyyoo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 15:32:22 by jaeyyoo           #+#    #+#             */
/*   Updated: 2022/10/19 19:06:31 by jaeyyoo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_plus(int num1, int num2);
int		ft_minus(int num1, int num2);
int		ft_div(int num1, int num2);
int		ft_multi(int num1, int num2);
int		ft_mod(int num1, int num2);
#endif
