/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halyilma <halyilma@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 07:01:29 by halyilma          #+#    #+#             */
/*   Updated: 2023/08/03 00:23:16 by halyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = ac - 1;
	while (i > 0)
	{
		j = 0;
		while (av[i][j] && ac)
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
