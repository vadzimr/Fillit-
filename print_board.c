/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_board.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echeung <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/09 12:44:59 by echeung           #+#    #+#             */
/*   Updated: 2020/02/10 13:31:21 by echeung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_board(char board[12][12], int size)
{
	int	i;

	i = 0;
	while (i++ < size)
	{
		write(1, board[i][i], size);
		write(1, "\n", 1);
	}
}
