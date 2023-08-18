/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halyilma <halyilma@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:04:44 by halyilma          #+#    #+#             */
/*   Updated: 2023/07/19 19:38:52 by halyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b, char c, char d)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
	if (!(a == '9' && b == '8'))
		write (1, ", ", 2);
}

void	ft_print_comb22(char a, char b)
{
	int	c;
	int	d;

	if (b == '9')
	{
		c = a + 1;
		d = '0';
	}
	else
	{
		c = a;
		d = b + 1;
	}
	while (c <= '9')
	{
		while (d <= '9')
		{
			ft_putchar(a, b, c, d);
			d++;
		}
		d = '0';
		c++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			ft_print_comb22(a, b);
			b++;
		}
		b = '0';
		a++;
	}
}
