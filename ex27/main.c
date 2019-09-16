/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 13:55:13 by rzero             #+#    #+#             */
/*   Updated: 2018/10/25 14:37:24 by rzero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc == 2)
	{
		ft_read_file(argv[1]);
	}
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
