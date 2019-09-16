/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 13:48:38 by rzero             #+#    #+#             */
/*   Updated: 2018/10/31 15:52:01 by rzero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_elements(int min, int max)
{
	int el_num;

	el_num = 0;
	while (max > min)
	{
		el_num++;
		max--;
	}
	return (el_num);
}

int		*ft_range(int min, int max)
{
	int	*array;
	int i;
	int elements;

	if (min >= max)
		return (NULL);
	else
	{
		i = 0;
		elements = count_elements(min, max);
		array = (int*)malloc(sizeof(int) * elements);
		while (min < max)
		{
			array[i] = min;
			min++;
			i++;
		}
	}
	return (array);
}
