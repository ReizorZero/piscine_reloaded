/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:19:19 by rzero             #+#    #+#             */
/*   Updated: 2018/10/22 17:39:57 by rzero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if (nb > 0)
	{
		while (nb > 0)
		{
			factorial *= nb;
			--nb;
		}
		return (factorial);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}
