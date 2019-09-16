/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:51:16 by rzero             #+#    #+#             */
/*   Updated: 2018/10/31 15:29:28 by rzero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int index;

	if (argc > 1)
	{
		index = 1;
		while (argc > 1)
		{
			while (*argv[index] != '\0')
			{
				ft_putchar(*argv[index]);
				argv[index]++;
			}
			ft_putchar('\n');
			index++;
			argc--;
		}
	}
}
