/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:07:23 by rzero             #+#    #+#             */
/*   Updated: 2018/10/25 14:39:01 by rzero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

#define BUF_SIZE 66

int		ft_read_file(char *file_name)
{
	int		fd;
	int		read_r;
	char	buf[BUF_SIZE + 1];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error: unable to open file.");
		return (1);
	}
	while ((read_r = read(fd, buf, BUF_SIZE)))
	{
		buf[read_r] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("Error: unable to close file.");
		return (1);
	}
	return (0);
}
