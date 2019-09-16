/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:41:10 by rzero             #+#    #+#             */
/*   Updated: 2018/10/26 12:00:08 by rzero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int factorial;

	factorial = 1;
	if (nb > 0 && nb < 13)
	{
		nb = nb * ft_recursive_factorial(nb - 1);
		return (nb);
	}
	else if (nb == 0)
		return (1);
	else
		return (0);
}
