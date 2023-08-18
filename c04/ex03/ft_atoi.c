/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halyilma <halyilma@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 01:25:42 by halyilma          #+#    #+#             */
/*   Updated: 2023/08/02 06:32:35 by halyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	spaceskipper(char *src)
{
	int	i;

	i = 0;
	while ((src[i] >= 9 && src[i] <= 13) || src[i] == 32)
	{
		i++;
	}
	return (i);
}

int	signedcheck(char *src, int *i)
{
	int	sign;

	sign = 1;
	*i = spaceskipper(src);
	while (src[*i] == '-' || src[*i] == '+')
	{
		if (src[*i] == '-')
		{
			sign *= -1;
		}
		*i += 1;
	}
	return (sign);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	sign;
	int	num;

	res = 0;
	sign = signedcheck(str, &i);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = (res * 10 + (str[i] - 48));
		else
			break ;
		i++;
	}
	num = res * sign;
	return (num);
}
