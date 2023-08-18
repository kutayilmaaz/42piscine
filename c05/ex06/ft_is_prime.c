/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halyilma <halyilma@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 00:31:07 by halyilma          #+#    #+#             */
/*   Updated: 2023/08/03 00:31:09 by halyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime_check(int a)
{
	int	i;

	i = 2;
	while (a != i)
	{
		if ((a % i) == 0)
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}

int	ft_is_prime(int nb)
{
	if (nb == 0 || nb == 1)
	{
		return (0);
	}
	else
		return (prime_check(nb));
}
