/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halyilma <halyilma@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 00:29:13 by halyilma          #+#    #+#             */
/*   Updated: 2023/08/03 00:29:17 by halyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb <= 12)
	{
		if (nb < 0)
			return (0);
		if (nb == 0)
			return (1);
		while (nb > 0)
		{
			result = result * nb;
			nb--;
		}
	}
	return (result);
}
