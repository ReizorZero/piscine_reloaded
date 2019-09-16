/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rzero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:58:54 by rzero             #+#    #+#             */
/*   Updated: 2018/10/30 16:44:36 by rzero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	my_swap(char **w1, char **w2)
{
	char *temp;

	temp = 0;
	temp = *w1;
	*w1 = *w2;
	*w2 = temp;
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else
			i++;
	}
	return (0);
}

void	bubble_sort(char **array, int elnum)
{
	int i;
	int swp_count;

	i = 0;
	swp_count = 0;
	while (i < elnum)
	{
		if ((i + 1 != elnum) && (ft_strcmp(array[i], array[i + 1]) > 0))
		{
			my_swap(&array[i], &array[i + 1]);
			swp_count = 1;
		}
		i++;
		if (i == elnum && swp_count == 1)
		{
			swp_count = 0;
			i = 0;
		}
	}
}

void	display(char **array, int elem_num)
{
	int i;

	i = 0;
	while (i < elem_num)
	{
		while (*array[i] != '\0')
		{
			ft_putchar(*array[i]);
			array[i]++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		bubble_sort(&argv[1], argc - 1);
		display(&argv[1], argc - 1);
	}
	return (0);
}
