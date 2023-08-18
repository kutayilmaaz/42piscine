/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fuyilmaz <fuyilmaz@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 18:34:11 by fuyilmaz          #+#    #+#             */
/*   Updated: 2023/07/15 18:51:19 by fuyilmaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int x, char ilk, char orta, char son)
{
	int	sutun_sayac;

	sutun_sayac = 1;
	while (sutun_sayac <= x)
	{
		if (sutun_sayac == 1)
			ft_putchar(ilk);
		else if (sutun_sayac == x)
			ft_putchar(son);
		else
			ft_putchar(orta);
		sutun_sayac++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	satir_sayac;

	satir_sayac = 1;
	if (x < 1 || y < 1)
	{
		write(1, "x ve y değerleri 1'den küçük olamaz.\n", 38);
	}
	else
	{
		while (satir_sayac <= y)
		{
			if (satir_sayac == 1)
				ft_print(x, '/', '*', '\\');
			else if (satir_sayac == y)
				ft_print(x, '\\', '*', '/');
			else
				ft_print(x, '*', ' ', '*');
			satir_sayac++;
		}
	}
}
